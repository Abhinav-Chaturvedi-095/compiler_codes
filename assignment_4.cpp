#include<iostream>
using namespace std;
int main()
{
	int a[30];
	int min=10000,temp=0,i,lev,n,noofc,z;
	cout<< "please enter how many number: ";
	cin>>n;
	for(i=0;i<n;i++)
	a[i]=0;
	cout<<"enter value of root: ";
	cin>>a[0];
	for(i=1;i<=n/2;i++)
	{
		cout<<"please enter no of child of parent with value "<<a[i-1]<<":";
		cin>>noofc;
		for(int j=1;j<=noofc;j++)
		{
			z=(i)*2+j-2;
			cout<<"please enter value of child: ";
			cin>>a[z];
		}
	}
	for(i=n-1;i>=n/2;i--)
	{
		temp=0;
		for(int j=i+1;j>=1;j=j/2)
			temp=temp+a[j-1];
		if(temp<min)
		min=temp;
		cout<<"temp min is: "<<temp<<"\n";
	}
	cout<<"min is: "<<min;
	// getch();
}
