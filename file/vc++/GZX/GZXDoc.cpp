// GZXDoc.cpp : implementation of the CGZXDoc class
//

#include "stdafx.h"
#include "GZX.h"

#include "GZXDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGZXDoc

IMPLEMENT_DYNCREATE(CGZXDoc, CDocument)

BEGIN_MESSAGE_MAP(CGZXDoc, CDocument)
	//{{AFX_MSG_MAP(CGZXDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGZXDoc construction/destruction

CGZXDoc::CGZXDoc()
{
	// TODO: add one-time construction code here

}

CGZXDoc::~CGZXDoc()
{
}

BOOL CGZXDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CGZXDoc serialization

void CGZXDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CGZXDoc diagnostics

#ifdef _DEBUG
void CGZXDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGZXDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGZXDoc commands
