#include<iostream>
using namespace std;
int main()
{
	int a[5] = {10,20,30,40,50};
	int position,i;

	cout<<"enter the position:"<<endl;
	cin>>position;


	for (int i =position-1; i<5;i=i+1)
	{
		a[i]=a[i+1];

	}

	cout<<"This is the new array after insert the new number"<<endl;
	for (int i = 0; i <4; i=i+1)
	{
		cout<<a[i]<<endl;
	}


	return 0;
}
