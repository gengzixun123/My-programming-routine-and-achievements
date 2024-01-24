#include<iostream>

using namespace std;

struct stu
{
    int fen;
    stu *next;
};

int main()
{
    stu *s1,*s2,*s3,*s4,*s5,*s6,*s7;

    s1 = new stu;
    s2 = new stu;
    s3 = new stu;
    s4 = new stu;
    s5 = new stu;
    s6 = new stu;
    s7 = new stu;

    s1->fen = 10;
    s2->fen = 20;
    s3->fen = 30;
    s4->fen = 40;
    s5->fen = 50;
    s6->fen = 60;
    s7->fen = 70;

    s1->next = s2;
    s2->next = s3;
    s3->next = s4;
    s4->next = s5;
    s5->next = s6;
    s6->next = s7;
    s7->next = NULL;


    cout<<s1->fen<<"  "<<s1->next<<endl;
    cout<<s2->fen<<"  "<<s2->next<<endl;
    cout<<s3->fen<<"  "<<s3->next<<endl;
    cout<<s4->fen<<"  "<<s4->next<<endl;
    cout<<s5->fen<<"  "<<s5->next<<endl;
    cout<<s6->fen<<"  "<<s6->next<<endl;
    cout<<s7->fen<<"  ";//<<s7->next<<endl;

  //  system("pause");

    return 0;
}
