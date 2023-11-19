#include<iostream>
using namespace std;
class student
{
public:
  const int admisson_fee,exam_fee;

   student(int x,int y)
   : admisson_fee(x),exam_fee(y)
   {
      cout<<admisson_fee<<endl<<exam_fee;
   }
};
int main()
{
   student a1(5000,300);
}
