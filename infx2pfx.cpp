#include <iostream>
#include "stacktemp.h"
using namespace std;


int prec (char c)
{

    if (c == '*' || c== '/' )
    {
        return 2;

    }
    else if(c== '+' || '-')
    {

        return 1;
    }
}

string infixtoPostfix(string s)
    {
        sta<char>st;
        string res;
        int i = 0;

        while(s[i]!='\0')
        {
            if(s[i]>='a'&& s[i]<='z'|| (s[i]>='A'&&s[i]<='Z')|| s[i]>='0'&&s[i]<='9')
            {
                res+=s[i];

            }
            else if(s[i]=='(') //When encounter a '('  push it into stack
             {
                st.push(s[i]);


            }
            else if (s[i]==')')    //When encounter a ')'
            {
                while (!st.isUnderflow() && st.tp()!='(') //if stack isn't empty and until the top element of stack's isn't a '(' add each character to result and pop
                {
                    res+=st.tp();
                    st.pop();



                }
                if(!st.isUnderflow()) //If stack isn't empty just pop
                {
                    st.pop();
                }


            }
            else
            {
                while(!st.isUnderflow() && prec(st.tp()) > prec(s[i])) //Until stack isn't empty and the current operator's precedence is lesser than the operator on top of stack keep adding elements to result and pop
                {
                    res+= st.tp();
                    st.pop();

                }
                st.push(s[i]); //Otherwise just push
            }
            i++;
        }
        while (!st.isUnderflow()) //If stack isn't empty just add each element to result and pop
        {
            res+=st.tp();
            st.pop();
        }
        return res;
    }

int main ()
{

    cout <<infixtoPostfix("A/(B+C)-D*E")<<endl;
}
