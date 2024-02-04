#include<iostream>
using namespace std;
int main()
{
   int a[100]={40,70,80,45,90};
   int position,i;
   cout<<"Enter position:"<<endl;
   cin>>position;
   for(i=position-1;i<5;i=i+1)
   {
      a[i]=a[i+1];
   }
   cout<<"New numbers are:"<<endl;
   for(i=0;i<4;i=i+1)
   {
      cout<<a[i]<<endl;
   }
}
