#include<iostream>
#include<conio.h>
using namespace std;

class student
{
   public:
      int id;
      double result;
};

 int main()
 {
    student alim;
    alim.id=192423;
    alim.result=4.22;
    cout<<"Id is:"<<alim.id<<" "<<"Result is:"<<alim.result<<endl;
    student karim;
    karim.id=192454;
    karim.result=4.28;
   cout<<"Id is:"<<karim.id<<" "<<"Result is:"<<karim.result;
 }
