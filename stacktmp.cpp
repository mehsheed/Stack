#include <iostream>
using namespace std;
#define Size 100
template  <class T>
class sta{

public :

T Stack[Size];
int top=-1;

bool isUnderflow()
{
    if(top<=-1)
        return true;
    return false;
}
bool isOverflow()
{
    if(top==Size-1)
    {
        return true;
    }
    return false;


}
void push(T val) {
   if(isOverflow())
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      Stack[top]=val;
   }
}
void pop() {
   if(isUnderflow())
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< Stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:"<<endl;
      for(int i=top; i>=0; i--)
      cout<<" | "<<Stack[i]<<" | "<<endl<<"  ---"<<endl;
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
};

int main() {
    sta <int>os;
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
