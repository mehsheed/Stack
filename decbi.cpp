//Converting decimal number to binary using stack
#include <iostream>
#include "stacktemp.h"
using namespace std;

void dec_to_bin(int number) {
   sta<int> st;
   while(number > 0) {
      int rem = number % 2;
      number = number / 2;
      st.push(rem);
   }
   while(!st.isUnderflow()) {
      int ele;
      ele = st.tp();
      st.pop();
      cout << ele;
   }
}
main() {
   int num=5;

   dec_to_bin(num);
}
