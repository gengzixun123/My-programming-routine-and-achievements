// GZXView.cpp : implementation of the CGZXView class
//

#include "stdafx.h"
#include "GZX.h"

#include "GZXDoc.h"
#include "GZXView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGZXView

IMPLEMENT_DYNCREATE(CGZXView, CView)

BEGIN_MESSAGE_MAP(CGZXView, CView)
	//{{AFX_MSG_MAP(CGZXView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGZXView construction/destruction

CGZXView::CGZXView()
{
	// TODO: add construction code here

}

CGZXView::~CGZXView()
{
}

BOOL CGZXView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CGZXView drawing

void CGZXView::OnDraw(CDC* pDC)
{
	CGZXDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	
	
	pDC->Ellipse(100,100,600,600);
	pDC->Ellipse(200,200,350,300);
	pDC->Ellipse(400,200,550,300);
	pDC->Ellipse(250,400,450,480);
}

/////////////////////////////////////////////////////////////////////////////
// CGZXView printing

BOOL CGZXView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CGZXView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CGZXView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CGZXView diagnostics

#ifdef _DEBUG
void CGZXView::AssertValid() const
{
	CView::AssertValid();
}

void CGZXView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGZXDoc* CGZXView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGZXDoc)));
	return (CGZXDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGZXView message handlers
