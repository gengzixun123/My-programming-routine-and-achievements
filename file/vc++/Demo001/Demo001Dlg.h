// Demo001Dlg.h : header file
//

#if !defined(AFX_DEMO001DLG_H__B2D8E6F7_ED6C_4846_9409_8237535226DF__INCLUDED_)
#define AFX_DEMO001DLG_H__B2D8E6F7_ED6C_4846_9409_8237535226DF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CDemo001Dlg dialog

class CDemo001Dlg : public CDialog
{
// Construction
public:
	CDemo001Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CDemo001Dlg)
	enum { IDD = IDD_DEMO001_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDemo001Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CDemo001Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEMO001DLG_H__B2D8E6F7_ED6C_4846_9409_8237535226DF__INCLUDED_)
