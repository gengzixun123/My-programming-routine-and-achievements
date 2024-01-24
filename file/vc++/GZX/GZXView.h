// GZXView.h : interface of the CGZXView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GZXVIEW_H__9FAB6168_FC03_4C58_951E_AF844F159003__INCLUDED_)
#define AFX_GZXVIEW_H__9FAB6168_FC03_4C58_951E_AF844F159003__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CGZXView : public CView
{
protected: // create from serialization only
	CGZXView();
	DECLARE_DYNCREATE(CGZXView)

// Attributes
public:
	CGZXDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGZXView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CGZXView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGZXView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in GZXView.cpp
inline CGZXDoc* CGZXView::GetDocument()
   { return (CGZXDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GZXVIEW_H__9FAB6168_FC03_4C58_951E_AF844F159003__INCLUDED_)
