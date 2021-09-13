
#include <iostream>
#include "stacktemp.h"
using namespace std;


bool areBracketsMatched(string exp)
{
    sta<char>st;
    char x;
    int i=0;


    while(exp[i]!='\0')
    {
        if (exp[i] == '(' || exp[i] == '['
            || exp[i] == '{')
        {

            st.push(exp[i]);

        }


        if (st.isUnderflow())
            return false;

        switch (exp[i]) {
        case ')':


            x = st.tp();
            st.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':


            x = st.tp();
            st.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':


            x = st.tp();
            st.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
        i++;

    }



    return (st.isUnderflow());
}


int main()
{
    string expr = "({9+5}+6)";


    if (areBracketsMatched(expr))
        cout << "Matched";
    else
        cout << "Not Matched";
    return 0;
}
