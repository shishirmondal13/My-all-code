#include<iostream>
#include<conio.h>
using namespace std;

class student
{
     public:
        int id;    // Member of Class
        double gpa; // Member of class
        void display() // Function of the classj
        {
            cout<<id<<" "<<gpa<<endl;
        }
        // To set value into variable id and GPA
        void setValue(int x,double y)
        {
            id=x;
            gpa=y;
        }
} ;

int main()
{

    student Alim,Karim;
//    Alim.id=101;
//    Alim.gpa=3.44;
    Alim.setValue(101,3.50);
    Alim.display();

    //student Karim;
//    Karim.id=102;
//    Karim.gpa=3.63;
    Karim.setValue(102, 3.60);
    Karim.display();

    getch();
}
