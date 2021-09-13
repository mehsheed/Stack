#include <iostream>
#include "stacktemp.h"
using namespace std;

bool checkPalindrome(string s)
{
    int length=0;
    int i=0;


    while(s[i]!='\0')
    {
        length++;
        i++;
    }
    int mid = length / 2;



    sta<char> st;




    for (i = 0; i < mid; i++) {
        st.push(s[i]);
    }


    if (length % 2 != 0) {
        i++;
    }

    char ele;

    while (s[i] != '\0')
    {
         ele = st.tp();
         st.pop();


    if (ele != s[i])
        return false;
        i++;
    }

return true;
}


int main()
{
    string s = "MALAYALAM";

    if (checkPalindrome(s)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}
