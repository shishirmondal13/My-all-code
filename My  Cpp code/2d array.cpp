#include<iostream>
using namespace std;
int main()
{
   int A[3][4]={
                  {30,40,50,70},
                  {60,70,80,90},{40,50,20,30}

                     };

    for(int row=0;row<3;row++)
    {
       for(int col=0;col<4;col++)
       {
        cout<<A[row][col]<<"  ";
       }
       cout<<endl;
    }

}
