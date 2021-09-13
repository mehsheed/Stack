#include <iostream>
using namespace std;


class stack{

    char exp[100];
    int top;
public:
    Stack () {top=-1;}
    void push(char c)
    {
        top++;
        exp[top = c];

    }
    void pop()
    {

        cout<<ch[top--];

    }




};

int main()
{
    Stack st;
    char exp[100];
    cout<<"Enter expression";
    cin>>sxp;
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

        }
        i++;


    }

}
