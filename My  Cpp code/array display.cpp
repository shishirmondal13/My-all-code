#include<iostream>
using namespace std;
int main()
{
   int num[3];
   int i;
   cout<<"Enter three number:"<<endl;
   {
      for( i=0;i<3;i++)
      {
         cin>>num[i];
      }

   }
   {
      for(i=0;i<3;i++)
      {
        cout<<"Numbers are:"<<num[i]<<endl;
      }
   }



}

