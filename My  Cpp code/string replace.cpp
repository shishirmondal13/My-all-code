#include<iostream>
using namespace std;
int main()
{
string str1 ="This is C language";
string str3= "java language";
cout <<"Before replacement, String is "<<str1<<'\n';
str1.replace(8,1,str3,0,4);
cout<<"After  replacement,String is "<<str1<<'\n';
return 0;
}
