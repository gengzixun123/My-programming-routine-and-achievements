#include<iostream>

using namespace std;

struct dot
{
    int v;
    dot *next;
};

dot *GZX,*WZS,*LZY,*YY;

void f1()
{
    for(int i = 1; i <= 10000; i++)
    {
        GZX = new dot;
        GZX->v = i;
        if(i == 1)
        {
            WZS=LZY = GZX;
        }
        else
        {
            WZS->next = GZX;
            WZS = GZX;
        }
    }
    WZS->next = NULL;

    YY = LZY;
    while(YY)
    {
        cout<<YY->v<<"\t";
        YY = YY->next;
    }
}

void f2()
{
    int input;
    int i = 0;

    do
    {
        cin>>input;
        if(input == 0)
        {
            break;
        }

        if(i == 0)
        {
            LZY = GZX = WZS = new dot;
            GZX->v = input;
        }
        else
        {
            GZX = new dot;
            GZX->v = input;

            WZS->next = GZX;
            WZS = GZX;
        }
        i++;
    }while(1);

    YY = LZY;

    while(YY)
    {
        cout<<YY->v<<"\t";
        YY = YY->next;
    }
}

void D()
{
    int input;
    int i = 0;

    do
    {
        cin>>input;
        if(input == 0)
        {
            break;
        }

        if(i == 0)
        {
            LZY = GZX = WZS = new dot;
            GZX->v = input;
        }
        else
        {
            GZX = new dot;
            GZX->v = input;

            WZS->next = GZX;
            WZS = GZX;
        }
        i++;
    }while(1);

    YY = LZY;

    while(YY)
    {
        cout<<YY->v<<"\t";
        YY = YY->next;
        if(YY->next == NULL)
        {
            break;
        }
    }

    int x = 0;
    for(;LZY = NULL;)
    {
        dot *ZTQ = LZY;
        LZY = LZY->next;
        delete ZTQ;
        x++;
    }
    cout<<x<<endl;
}


void R(dot *head)
{
    int input;
    int i = 0;

    do
    {
        cin>>input;
        if(input == 0)
        {
            break;
        }
        if(i == 0)
        {
            LZY = GZX = WZS = new dot;
            GZX->v = input;

        }
        else
        {
            GZX = new dot;
            GZX->v = input;

            WZS->next = GZX;
            WZS = GZX;
            i++;
        }

    }while(1);

    YY = LZY;

    while(YY)
    {
        cout<<YY->v<<"\t";
        YY = YY->next;
        if(YY->next == NULL)
        {
            break;
        }
    }

    int x = 0;
    while(head != NULL)
    {
        if(head->next!=NULL)
        {
            dot *ZTQ = head;
            while(ZTQ->next->next != NULL)
            {
                ZTQ = ZTQ->next;
            }
            delete ZTQ->next;
            ZTQ->next = NULL;
            x++;
        }
        else
        {
            delete head;
            head = NULL;
            x++;
        }
    }
}

int main()
{
    R(LZY);
    cout<<endl;
/*  HTTP/1.1 200 OK
    Cache-Control: private
    Content-Type: text/html; charset=utf-8
    Server: Microsoft-IIS/10.0
    X-AspNet-Version: 4.0.30319
    X-Powered-By: ASP.NET
    Date: Sun, 21 Jan 2024 10:09:12 GMT
    Connection: close
    Content-Length: 124664
    Set-Cookie: BIGipServerpool_web_b2b=1330424000.20480.0000; path=/


    <!DOCTYPE html>

    <html xmlns="http://www.w3.org/1999/xhtml">
    <head><meta http-equiv="Content-Type" content="text/html; charset=utf-8;no-cache" /><title>
            长城图片_长城图片大全_长城图片素材_全景视觉
    </title><meta http-equiv="pragma" content="no-cache" /><meta http-equiv="Cache-Control" content="no-cache, must-revalidate" /><link href="/css/panorama/SearchResult.css?v=20181215" rel="stylesheet" type="text/css" /><link href="/css/panorama/frameSet.css?v=20181215" rel="stylesheet" type="text/css" /><link href="/css/float.css?v=20181215" rel="stylesheet" type="text/css" /><link href="/css/screen.css?v=20210621" rel="stylesheet" type="text/css" /><link href="/css/search.css?v=20190104" rel="stylesheet" type="text/css" /><link href="/css/reset.css?v=20190114" rel="stylesheet" type="text/css" />
        <script src="/js/jquery-1.11.3.min.js?v=1" type="text/javascript"></script>
    <meta name="Description" content="全景�?
    */

    system("pause");

    return 0;
}
