
// �ٳֲ���.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C�ٳֲ���App: 
// �йش����ʵ�֣������ �ٳֲ���.cpp
//

class C�ٳֲ���App : public CWinApp
{
public:
	C�ٳֲ���App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C�ٳֲ���App theApp;