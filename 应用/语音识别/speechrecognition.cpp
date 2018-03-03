#include <windows.h>
#include <atlstr.h>
#include <sphelper.h>
#include <sapi.h>
#include<comutil.h>
#include<string.h>

#pragma comment(lib,"sapi.lib")
#pragma comment(lib, "comsupp.lib") 

#define GID_CMD_GR 333333
#define WM_RECOEVENT WM_USER+1

 LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);


 void openqq();
 void you();
 void zuo();
 void shang();
 void xia();
 void closeqq();
 void show();
 void hide();



 char 	 szAppName[] = "TsinghuaYincheng";
 BOOL b_initSR;
 BOOL b_Cmd_Grammar;
 CComPtr<ISpRecoContext>m_cpRecoCtxt;  //语音识别程序接口
 CComPtr<ISpRecoGrammar>m_cpCmdGramma; //识别语法
 CComPtr<ISpRecognizer>m_cpRecoEngine; //语音识别引擎
 int speak(wchar_t *str);

 int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,PSTR szCmdLine,int iCmdShow)
 {
	 HWND        hwnd;
	 MSG         msg;
	 WNDCLASS    wndclass;

	 wndclass.cbClsExtra          =0;
	 wndclass.cbWndExtra          =0;
	 wndclass.hbrBackground       =(HBRUSH)GetStockObject(WHITE_BRUSH);
	 wndclass.hCursor             =LoadCursor(NULL,IDC_ARROW);
	 wndclass.hIcon               =LoadIcon(NULL,IDI_APPLICATION);
	 wndclass.hInstance           =hInstance;
	 wndclass.lpfnWndProc         =WndProc;
	 wndclass.lpszClassName       =szAppName;
	 wndclass.lpszMenuName        =NULL;
	 wndclass.style               =CS_HREDRAW|CS_VREDRAW;

	 if(!RegisterClass(&wndclass))
	 {
		 MessageBox(NULL,TEXT("This program requires Windows NT!"),szAppName,MB_ICONERROR);
		 return 0;
	 }
	 speak(L"谭胜是一个猥琐男");

	 hwnd=CreateWindow(szAppName,
		               TEXT("传智播客C/C++学院语音识别教程"),
					   WS_OVERLAPPEDWINDOW,
					   CW_USEDEFAULT,
					   CW_USEDEFAULT,
					   CW_USEDEFAULT,
					   CW_USEDEFAULT,
					   NULL,
					   NULL,
					   hInstance,
					   NULL);

	 ShowWindow(hwnd,iCmdShow);
	 UpdateWindow(hwnd);
	 
	 while(GetMessage(&msg,NULL,0,0))
	 {
		 TranslateMessage(&msg);
		 DispatchMessage(&msg);
	 }
	
	 return msg.wParam;
 }

 LRESULT CALLBACK WndProc(HWND hwnd,UINT message,WPARAM wParam,LPARAM lParam)
 {
	 HDC           hdc;
	 PAINTSTRUCT   ps;

	 switch(message)
	 {
	 case WM_CREATE:
		 {
			 //初始化COM端口
			 ::CoInitializeEx(NULL,COINIT_APARTMENTTHREADED);
			 //创建识别引擎COM实例为共享型
			 HRESULT hr=m_cpRecoEngine.CoCreateInstance(CLSID_SpSharedRecognizer);
			 //创建识别上下文接口
			 if(SUCCEEDED(hr))
			 {
				 hr=m_cpRecoEngine->CreateRecoContext(&m_cpRecoCtxt);
			 }
			 else MessageBox(hwnd,TEXT("error1"),TEXT("error"),S_OK);
			 //设置识别消息,使计算机时刻监听语音消息
			 if(SUCCEEDED(hr))
			 {
				 hr=m_cpRecoCtxt->SetNotifyWindowMessage(hwnd,WM_RECOEVENT,0,0);
			 }
			 else MessageBox(hwnd,TEXT("error2"),TEXT("error"),S_OK);
			 //设置我们感兴趣的事件
			 if(SUCCEEDED(hr))
			 {
				 ULONGLONG ullMyEvents=SPFEI(SPEI_SOUND_START)|SPFEI(SPEI_RECOGNITION)|SPFEI(SPEI_SOUND_END);
				 hr=m_cpRecoCtxt->SetInterest(ullMyEvents,ullMyEvents);
			 }
			 else MessageBox(hwnd,TEXT("error3"),TEXT("error"),S_OK);
			 //创建语法规则
			 b_Cmd_Grammar=TRUE;
			 if(FAILED(hr))
			 {
				 MessageBox(hwnd,TEXT("error4"),TEXT("error"),S_OK);
			 }
			 hr=m_cpRecoCtxt->CreateGrammar(GID_CMD_GR,&m_cpCmdGramma);
			 WCHAR wszXMLFile[20]=L"er.xml";
			 MultiByteToWideChar(CP_ACP,0,(LPCSTR)"er.xml",-1,wszXMLFile,256);
			 hr=m_cpCmdGramma->LoadCmdFromFile(wszXMLFile,SPLO_DYNAMIC);
			 if(FAILED(hr))
			 {
				 MessageBox(hwnd,TEXT("error5"),TEXT("error"),S_OK);
			 }
			 b_initSR=TRUE;
			 //在开始识别时，激活语法进行识别
		     hr=m_cpCmdGramma->SetRuleState(NULL,NULL,SPRS_ACTIVE);
	    	 return 0;
		 }
	 case WM_RECOEVENT:
		 {
			 RECT rect;
             GetClientRect(hwnd,&rect);
             hdc=GetDC(hwnd);
			 USES_CONVERSION;
			 CSpEvent event;
			 while(event.GetFrom(m_cpRecoCtxt)==S_OK)
			 {
			     switch(event.eEventId)
			     {
			     case SPEI_RECOGNITION:
    				 {
            			 static const WCHAR wszUnrecognized[]=L"<Unrecognized>";
		            	 CSpDynamicString dstrText;
			    		 //取得识别结果
				    	 if(FAILED(event.RecoResult()->GetText(SP_GETWHOLEPHRASE,SP_GETWHOLEPHRASE,TRUE,&dstrText,NULL)))
					     {
						     dstrText=wszUnrecognized;
    					 }
        	    		 BSTR SRout;
	        	    	 dstrText.CopyToBSTR(&SRout);
						 char* lpszText2 = _com_util::ConvertBSTRToString(SRout);

			    		 if(b_Cmd_Grammar)
				    	 {
							 //绘制文本
							 DrawText(hdc, TEXT(lpszText2), -1, &rect, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
							
							 
							 if (strcmp("我是学霸",lpszText2)==0)
	    				     {    
								
								 MessageBoxA(0, lpszText2, lpszText2, 0);
				        	
					         }
							 if (strcmp("清华土匪", lpszText2) == 0)
							 {

								 MessageBoxA(0, lpszText2, lpszText2, 0);
								 
							 }
							 if (strcmp("传智播客", lpszText2) == 0)
							 {

								 MessageBoxA(0, lpszText2, lpszText2, 0);
								 
							 }
							 if (strcmp("天下无双", lpszText2) == 0)
							 {
								 wchar_t * str = L"谭胜大爷吹牛皮的功夫天下无双";
								 speak(str);
								

							 }
							 if (strcmp("给我上", lpszText2) == 0)
							 {
								 speak(L"亲爱的主人，好");
								 shang();
								

							 }
							 if (strcmp("给我下", lpszText2) == 0)
							 {

								 speak(L"亲爱的主人，好");
								 xia();
							

							 }
							 if (strcmp("给我左", lpszText2) == 0)
							 {

								 speak(L"亲爱的主人，好");
								 zuo();
								

							 }
							 if (strcmp("给我右", lpszText2) == 0)
							 {
								 speak(L"亲爱的主人，好");
								 you();
								

							 }
							 if (strcmp("打开企鹅", lpszText2) == 0)
							 {
								 speak(L"亲爱的主人，好");
								 openqq();
								

							 }
							 if (strcmp("关闭企鹅", lpszText2) == 0)
							 {
								 speak(L"亲爱的主人，好");
								 closeqq();
							

							 }
							 if (strcmp("显示", lpszText2) == 0)
							 {
								 speak(L"亲爱的主人，好");
								 show();
								

							 }
							 if (strcmp("隐藏", lpszText2) == 0)
							 {
								 speak(L"亲爱的主人，好");
								 hide();
						

							 }
							 if (strcmp("谭胜是谁", lpszText2) == 0)
							 {

								 speak(L"谭胜是横空出世的英雄，百年不遇的天才");
							
							 }
							 if (strcmp("你是谁", lpszText2) == 0)
							 {
								 speak(L"我是你们勇猛勤奋彪悍的谭胜大哥写的语音识别程序");
							

							 }

							 if (strcmp("你是笨蛋", lpszText2) == 0)
							 {
								 speak(L"我的创造者谭胜大哥聪明的惊天地泣鬼神");
							;

							 }
							 if (strcmp("你是蠢猪", lpszText2) == 0)
							 {
								 speak(L"我固然很蠢，但是我的创造者谭胜大哥聪明的惊天地泣鬼神");
					

							 }
							 if (strcmp("你很好", lpszText2) == 0)
							 {
								 speak(L"我一直很牛逼，多亏谭大爷");
								

							 }
							 if (strcmp("中秋快乐", lpszText2) == 0)
							 {
								 speak(L"谭大爷叫你回家吃月饼");
								

							 }

						
    					 }    
        			 }
	    		 }
			 }
			 return TRUE;
		 }
	 case WM_PAINT:
		 hdc=BeginPaint(hwnd,&ps);
		 EndPaint(hwnd,&ps);
		 return 0;
	 case WM_DESTROY:
		 PostQuitMessage(0);
		 return 0;
	 }
	 return DefWindowProc(hwnd,message,wParam,lParam);
 }





#pragma comment(lib, "ole32.lib") //CoInitialize CoCreateInstance需要调用ole32.dll   
int speak(wchar_t *str)
{
	 ISpVoice * pVoice = NULL;
	 ::CoInitialize(NULL);
	 //获取ISpVoice接口：   
	 long hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void **)&pVoice);
	 hr = pVoice->Speak(str, 0, NULL);
	 pVoice->Release();
	 pVoice = NULL;
	 //千万不要忘记：   
	 ::CoUninitialize();
	 return TRUE;
 }





void openqq()
{

	ShellExecuteA(0, "open", "\"C:\\Program Files (x86)\\Tencent\\QQ\\QQProtect\\Bin\\QQProtect.exe\"", 0, 0, 1);

}

void closeqq()
{

	system("taskkill /f /im QQ.exe");
}

void show()
{
	HWND win = FindWindowA("TXGuiFoundation", "QQ2013");
	if (win != NULL)
	{
		ShowWindow(win, SW_SHOW);
	}

}

void  hide()
{

	HWND win = FindWindowA("TXGuiFoundation", "QQ2013");
	if (win != NULL)
	{
		ShowWindow(win, SW_HIDE);
	}

}


void  shang()
{
	HWND win = FindWindowA("TXGuiFoundation", "QQ2013");
	if (win != NULL)
	{
		RECT rectwind;//区域,lefr ,right ,top,bottom
		GetWindowRect(win, &rectwind);//获取区域
		SetWindowPos(win, NULL, rectwind.left, rectwind.top - 100, 300, 300, 1);
	}


}

void xia()
{
	HWND win = FindWindowA("TXGuiFoundation", "QQ2013");
	if (win != NULL)
	{
		RECT rectwind;//区域,lefr ,right ,top,bottom
		GetWindowRect(win, &rectwind);//获取区域
		SetWindowPos(win, NULL, rectwind.left, rectwind.top + 100, 300, 300, 1);
	}
}

void zuo()
{
	HWND win = FindWindowA("TXGuiFoundation", "QQ2013");
	if (win != NULL)
	{
		RECT rectwind;//区域,lefr ,right ,top,bottom
		GetWindowRect(win, &rectwind);//获取区域
		SetWindowPos(win, NULL, rectwind.left - 100, rectwind.top, 300, 300, 1);
	}

}

void you()
{
	HWND win = FindWindowA("TXGuiFoundation", "QQ2013");
	if (win != NULL)
	{
		RECT rectwind;//区域,lefr ,right ,top,bottom
		GetWindowRect(win, &rectwind);//获取区域
		SetWindowPos(win, NULL, rectwind.left + 100, rectwind.top, 300, 300, 1);//设置区域位置

	}

}