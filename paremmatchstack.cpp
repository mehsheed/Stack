#include <iostream>
using namespace std;
#include "paramsttemp.h"

/*
class Stack{

    char exp[100];
    int top;
public:
    Stack () {top=-1;}
    void push(char c)
    {
        top++;
        exp[top] = c;

    }
    void pop()
    {

        cout<<exp[top--];

    }




};*/

int main()
{
    sta<char>st;
    char exp[100];
    cout<<"Enter expression";
    cin>>exp;
    int i = 0;
    while(exp[i]!='\0')
    {
        if(exp[i]== '(')
        {
            st.push ('(');

        }
        if(exp[i]==')')
        {
            st.pop();
            cout<<exp[i];

        }
        i++;


    }
    if(st.isUnderflow())
    {
        cout<<"All parenthesis are matched";

    }
    else{
        cout<<"Parenthesis are not matched ";
    }

}
