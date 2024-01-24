// GZX.h : main header file for the GZX application
//

#if !defined(AFX_GZX_H__B022512D_7082_4413_882F_4CDEF2E8FC27__INCLUDED_)
#define AFX_GZX_H__B022512D_7082_4413_882F_4CDEF2E8FC27__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CGZXApp:
// See GZX.cpp for the implementation of this class
//

class CGZXApp : public CWinApp
{
public:
	CGZXApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGZXApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CGZXApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GZX_H__B022512D_7082_4413_882F_4CDEF2E8FC27__INCLUDED_)
