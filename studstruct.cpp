#include <iostream>
using namespace std;

struct student

{
    string name;
    int regNo;


};

int main()

{
    student s1;

    s1.name = 'Mehsheed';
    s1.regNo = 201627097;

    student s2;

    s1.name = 'Ravi';
    s1.regNo = 201627091;

    student s3;

    s1.name = 'Ramu';
    s1.regNo = 201627092;
    student *sr;


    student a[100] = {s1,s2,s3};

    for(int i=0;i<=2;i++)
    {
        sr = &a[i];
        cout<<&sr.name;


    }







}

