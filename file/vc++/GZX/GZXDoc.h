// GZXDoc.h : interface of the CGZXDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GZXDOC_H__BBEA03B0_7454_48BA_A7B7_B7282763254E__INCLUDED_)
#define AFX_GZXDOC_H__BBEA03B0_7454_48BA_A7B7_B7282763254E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CGZXDoc : public CDocument
{
protected: // create from serialization only
	CGZXDoc();
	DECLARE_DYNCREATE(CGZXDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGZXDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CGZXDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGZXDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GZXDOC_H__BBEA03B0_7454_48BA_A7B7_B7282763254E__INCLUDED_)
