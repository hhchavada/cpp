#include<iostream>
using namespace std;
int main()
{
	int a[5],b[5],i;
     for(i=0;i<5;i++)
	{
		cout<<"value a ",i;
		cin>>a[i];
	}

	for(i=0;i<5;i++)
	{
		cout<<"value b  ",i;
		cin>>b[i];
	}
	
	for(i=0;i<5;i++)
	{
	
	cout<<"\n"<<a[i]<<"\t"<<b[i];
	}
}
