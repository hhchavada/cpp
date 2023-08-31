#include<iostream>
using namespace std;
int main()
{
 int a[5][5],b[5][5],total[5][5];
 int i,j;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    cout<<"enter value 1: ";
			cin>>a[i][j];
		}

	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    cout<<"enter value 2 ";
			cin>>b[i][j];
		}

	}
	

		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			    cout<<a[i][j];
			
			}
		    cout<<"\t";
			for(j=0;j<3;j++)
			{
			    cout<<b[i][j];
		}
		
		    cout<<"\t";
			for(j=0;j<3;j++)
			{
			total[i][j]=a[i][j]+b[i][j];
			    cout<<total[i][j];
			}
		    cout<<"\n";
		}
}