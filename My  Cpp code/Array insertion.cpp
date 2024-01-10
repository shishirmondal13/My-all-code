#include<iostream>
using namespace std;
int main()
{
	int a[5] = {1,2,3,4,5};
	int position,num,i;

	cout<<"enter the position and number "<<endl;
	cin>>position>>num;

	for (int i =5; i >= position-1; i--)
	{
		a[i+1]=a[i];
	}

	a[position-1]=num;

	cout<<"This is the new array after insert the new number"<<endl;
	for (int i = 0; i <6; i=i+1)
	{
		cout<<a[i]<<endl;
	}


	return 0;
}
