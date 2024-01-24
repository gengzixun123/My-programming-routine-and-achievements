// Demo001.h : main header file for the DEMO001 application
//

#if !defined(AFX_DEMO001_H__A4D82E96_C232_4C2E_9A89_D2616B5B6FB8__INCLUDED_)
#define AFX_DEMO001_H__A4D82E96_C232_4C2E_9A89_D2616B5B6FB8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CDemo001App:
// See Demo001.cpp for the implementation of this class
//

class CDemo001App : public CWinApp
{
public:
	CDemo001App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDemo001App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CDemo001App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEMO001_H__A4D82E96_C232_4C2E_9A89_D2616B5B6FB8__INCLUDED_)
