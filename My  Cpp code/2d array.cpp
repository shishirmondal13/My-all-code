#include<iostream>
using namespace std;
int main()
{
   int A[2][3]={
                  {30,40,50},
                  {60,70,80}

                     };

    for(int row=0;row<2;row++)
    {
       for(int col=0;col<3;col++)
       {
        cout<<A[row][col]<<"  ";
       }
       cout<<endl;
    }

}
