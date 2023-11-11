#include<iostream>
using namespace std;

class student
{
public:
     int id;
     double gpa;
     void display()
     {
        cout<<id<<" "<<gpa;
     }
};
int main()
{
   student alim,avro;
   alim.id=104;
   alim.gpa=3.67;
   alim.display();
   avro.id=105;
   cout<<endl;
   avro.gpa=3.78;
   avro.display();

}
