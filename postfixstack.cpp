#include <iostream>
#include "stacktemp.h"
using namespace std;

int postfixEvaluation(string s)
{
    sta<int>st;
    int x = st.tp();
    int i=0;

    while(s[i]!='\0')
    {
        if(s[i]>='0' && s[i]<='9')
        {
            st.push(s[i]-'0');


        }
        else{

            int op2 = st.tp();
            st.pop();
            int op1=st.tp();
            st.pop();

            switch (s[i])
            {
              case '+':
                st.push(op1+op2);
                break;
              case '-':
                st.push(op1-op2);
                break;
              case '*':
                st.push(op1*op2);
                break;
              case '/':
                st.push(op1/op2);
                break;




            }



        }
        i++;


    }
    return st.tp();



}

int main ()
{
    cout<<postfixEvaluation("46+2/5*7+")<<endl;

}

