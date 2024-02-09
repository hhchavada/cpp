#include<iostream>
using namespace std;
int main()
{
	int a[5],b[5],i,c;
     for(i=0;i<5;i++)
	{
		cout<<"value a : ",i;
		cin>>a[i];
	}

	for(i=0;i<5;i++)
	{
		cout<<"value b : ",i;
		cin>>b[i];
	}
	
	for(i=0;i<5;i++)
	{
	c=a[i]+b[i];
	cout<<"\n"<<a[i]<<"\t+\t"<<b[i]<<"\t=\t"<<c;
	}
}