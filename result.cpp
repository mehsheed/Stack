
#include <iostream>
using namespace std;

class Result{

public :
    string name;
    double marks1,marks2,marks3;

    void result()
    {

        double avg = (this->marks1+this->marks2+this->marks3)/3;
        if (avg >= 10 && avg<=20)
        {
            cout<<this->name+"'s "+"Grade : A";


        }
        if (avg >= 5 && avg<=9)
        {
            cout<<this->name+"'s "+"Grade : B";


        }
        if (avg < 5)
        {
            cout<<this->name+"'s "+"Grade : C";


        }

    }

};
int main()
{

    Result s1;
    s1.name="Mehsheed";

    s1.marks1 = 15.5;
    s1.marks2 = 15;
    s1.marks3 = 15;
    s1.result();
}
