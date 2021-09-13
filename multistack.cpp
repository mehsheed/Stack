
#include <iostream>

#define Size 100
using namespace std;
class multist
{
    int a[Size];
    int top1,top2;


public:
    multist()
    {


        top1=-1;
        top2=Size;

    }



    bool overflow()
    {
        if(top1+1==top2)
            return true;
        else
            return false;
    }


    int pop1()
    {
        if(top1==-1)
        {
            cout<< "Stack is empty"<<endl;
            return NULL;
        }
        else
            return a[top1--];


    }
    int pop2()
    {
        if(top2==Size)
        {
            cout<< "Stack is empty"<<endl;
            return NULL;
        }
        else
            return a[top2++];


    }


    void push1(int ele)
    {
        if(!overflow())
        {
            a[++top1] = ele;
            return;

        }

            cout<<"Overflow"<<endl;





    }
    void push2(int ele)
    {
        if(!overflow())
        {
            a[--top2] = ele;
            return;

        }

            cout<<"Overflow"<<endl;



    }






};

int main()
{

    multist mt;
    mt.push1(1);
    mt.push2(2);
    cout<<mt.pop1();
    cout<<mt.pop2();
    cout<<mt.pop2();






}
