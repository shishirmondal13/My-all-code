#include<iostream>
using namespace std;

int main()

{
    char str1[30] = "My name is";
    char str2[30] = " shishir mondal";
    int i,j,lenth;
    lenth = 10;

    for(i=lenth, j=0; str2[j]!='\0'; i++, j++)
    {
        str1[i] = str2[j];

    }
    str1[i] = '\0';
    cout<<"What is your name?"<<str1;
    return 0;
}


