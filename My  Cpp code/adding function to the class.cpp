#include<iostream>
#include<conio.h>
using namespace std;

class student
{
   public:
      int id;
      double result;
      void display()
      {
          cout<<"Id is:"<<id<<" "<<"Result is:"<<result<<endl;
      }

};

 int main()
 {
    student alim,karim;
    alim.id=192423;
    alim.result=4.22;
    alim.display();
    karim.id=192454;
    karim.result=4.28;
    karim.display();
 }

