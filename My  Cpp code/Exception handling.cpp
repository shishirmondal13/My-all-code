#include<iostream>
using namespace std;
int main()
{
   while(1){
   try{
   int x,y;
   cout<<"enter x: "<<endl;
   cin>>x;
   cout<<"enter y:"<<endl;
   cin>>y;
   if(y==0)
   {
      throw -1;
   }
   double result= (double)x/y;
   cout<<"result is:"<<result;
   }
   catch(...)
   {
      cout<<"you can not choose 0"<<endl;
      cout<<"please input another number";
   }
   }
}
