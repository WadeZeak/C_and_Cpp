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
 CComPtr<ISpRecoContext>m_cpRecoCtxt;  //����ʶ�����ӿ�
 CComPtr<ISpRecoGrammar>m_cpCmdGramma; //ʶ���﷨
 CComPtr<ISpRecognizer>m_cpRecoEngine; //����ʶ������
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
	 speak(L"̷ʤ��һ�������");

	 hwnd=CreateWindow(szAppName,
		               TEXT("���ǲ���C/C++ѧԺ����ʶ��̳�"),
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
			 //��ʼ��COM�˿�
			 ::CoInitializeEx(NULL,COINIT_APARTMENTTHREADED);
			 //����ʶ������COMʵ��Ϊ������
			 HRESULT hr=m_cpRecoEngine.CoCreateInstance(CLSID_SpSharedRecognizer);
			 //����ʶ�������Ľӿ�
			 if(SUCCEEDED(hr))
			 {
				 hr=m_cpRecoEngine->CreateRecoContext(&m_cpRecoCtxt);
			 }
			 else MessageBox(hwnd,TEXT("error1"),TEXT("error"),S_OK);
			 //����ʶ����Ϣ,ʹ�����ʱ�̼���������Ϣ
			 if(SUCCEEDED(hr))
			 {
				 hr=m_cpRecoCtxt->SetNotifyWindowMessage(hwnd,WM_RECOEVENT,0,0);
			 }
			 else MessageBox(hwnd,TEXT("error2"),TEXT("error"),S_OK);
			 //�������Ǹ���Ȥ���¼�
			 if(SUCCEEDED(hr))
			 {
				 ULONGLONG ullMyEvents=SPFEI(SPEI_SOUND_START)|SPFEI(SPEI_RECOGNITION)|SPFEI(SPEI_SOUND_END);
				 hr=m_cpRecoCtxt->SetInterest(ullMyEvents,ullMyEvents);
			 }
			 else MessageBox(hwnd,TEXT("error3"),TEXT("error"),S_OK);
			 //�����﷨����
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
			 //�ڿ�ʼʶ��ʱ�������﷨����ʶ��
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
			    		 //ȡ��ʶ����
				    	 if(FAILED(event.RecoResult()->GetText(SP_GETWHOLEPHRASE,SP_GETWHOLEPHRASE,TRUE,&dstrText,NULL)))
					     {
						     dstrText=wszUnrecognized;
    					 }
        	    		 BSTR SRout;
	        	    	 dstrText.CopyToBSTR(&SRout);
						 char* lpszText2 = _com_util::ConvertBSTRToString(SRout);

			    		 if(b_Cmd_Grammar)
				    	 {
							 //�����ı�
							 DrawText(hdc, TEXT(lpszText2), -1, &rect, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
							
							 
							 if (strcmp("����ѧ��",lpszText2)==0)
	    				     {    
								
								 MessageBoxA(0, lpszText2, lpszText2, 0);
				        	
					         }
							 if (strcmp("�廪����", lpszText2) == 0)
							 {

								 MessageBoxA(0, lpszText2, lpszText2, 0);
								 
							 }
							 if (strcmp("���ǲ���", lpszText2) == 0)
							 {

								 MessageBoxA(0, lpszText2, lpszText2, 0);
								 
							 }
							 if (strcmp("������˫", lpszText2) == 0)
							 {
								 wchar_t * str = L"̷ʤ��ү��ţƤ�Ĺ���������˫";
								 speak(str);
								

							 }
							 if (strcmp("������", lpszText2) == 0)
							 {
								 speak(L"�װ������ˣ���");
								 shang();
								

							 }
							 if (strcmp("������", lpszText2) == 0)
							 {

								 speak(L"�װ������ˣ���");
								 xia();
							

							 }
							 if (strcmp("������", lpszText2) == 0)
							 {

								 speak(L"�װ������ˣ���");
								 zuo();
								

							 }
							 if (strcmp("������", lpszText2) == 0)
							 {
								 speak(L"�װ������ˣ���");
								 you();
								

							 }
							 if (strcmp("�����", lpszText2) == 0)
							 {
								 speak(L"�װ������ˣ���");
								 openqq();
								

							 }
							 if (strcmp("�ر����", lpszText2) == 0)
							 {
								 speak(L"�װ������ˣ���");
								 closeqq();
							

							 }
							 if (strcmp("��ʾ", lpszText2) == 0)
							 {
								 speak(L"�װ������ˣ���");
								 show();
								

							 }
							 if (strcmp("����", lpszText2) == 0)
							 {
								 speak(L"�װ������ˣ���");
								 hide();
						

							 }
							 if (strcmp("̷ʤ��˭", lpszText2) == 0)
							 {

								 speak(L"̷ʤ�Ǻ�ճ�����Ӣ�ۣ����겻�������");
							
							 }
							 if (strcmp("����˭", lpszText2) == 0)
							 {
								 speak(L"�������������ڷܱ뺷��̷ʤ���д������ʶ�����");
							

							 }

							 if (strcmp("���Ǳ���", lpszText2) == 0)
							 {
								 speak(L"�ҵĴ�����̷ʤ�������ľ����������");
							;

							 }
							 if (strcmp("���Ǵ���", lpszText2) == 0)
							 {
								 speak(L"�ҹ�Ȼ�ܴ��������ҵĴ�����̷ʤ�������ľ����������");
					

							 }
							 if (strcmp("��ܺ�", lpszText2) == 0)
							 {
								 speak(L"��һֱ��ţ�ƣ����̷��ү");
								

							 }
							 if (strcmp("�������", lpszText2) == 0)
							 {
								 speak(L"̷��ү����ؼҳ��±�");
								

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





#pragma comment(lib, "ole32.lib") //CoInitialize CoCreateInstance��Ҫ����ole32.dll   
int speak(wchar_t *str)
{
	 ISpVoice * pVoice = NULL;
	 ::CoInitialize(NULL);
	 //��ȡISpVoice�ӿڣ�   
	 long hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void **)&pVoice);
	 hr = pVoice->Speak(str, 0, NULL);
	 pVoice->Release();
	 pVoice = NULL;
	 //ǧ��Ҫ���ǣ�   
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
		RECT rectwind;//����,lefr ,right ,top,bottom
		GetWindowRect(win, &rectwind);//��ȡ����
		SetWindowPos(win, NULL, rectwind.left, rectwind.top - 100, 300, 300, 1);
	}


}

void xia()
{
	HWND win = FindWindowA("TXGuiFoundation", "QQ2013");
	if (win != NULL)
	{
		RECT rectwind;//����,lefr ,right ,top,bottom
		GetWindowRect(win, &rectwind);//��ȡ����
		SetWindowPos(win, NULL, rectwind.left, rectwind.top + 100, 300, 300, 1);
	}
}

void zuo()
{
	HWND win = FindWindowA("TXGuiFoundation", "QQ2013");
	if (win != NULL)
	{
		RECT rectwind;//����,lefr ,right ,top,bottom
		GetWindowRect(win, &rectwind);//��ȡ����
		SetWindowPos(win, NULL, rectwind.left - 100, rectwind.top, 300, 300, 1);
	}

}

void you()
{
	HWND win = FindWindowA("TXGuiFoundation", "QQ2013");
	if (win != NULL)
	{
		RECT rectwind;//����,lefr ,right ,top,bottom
		GetWindowRect(win, &rectwind);//��ȡ����
		SetWindowPos(win, NULL, rectwind.left + 100, rectwind.top, 300, 300, 1);//��������λ��

	}

}