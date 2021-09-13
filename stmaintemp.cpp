#include <iostream>
#include "stacktemp.h"
using namespace std;




int main() {
    sta <char>os;
    int ch;
    int val;
   cout<<"1) Push in Stack"<<endl;
   cout<<"2) Pop from Stack"<<endl;
   cout<<"3) Display Stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            os.push(val);
            cin.clear();

            break;
         }
         case 2: {
            os.pop();

            break;
         }
         case 3: {
            os.display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Enter no between 1-4 "<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
