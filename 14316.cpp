#include<iostream>
using namespace std;
int main()
{
  int i,n,j;
  
	cout<<"enter a value : ";
	cin>>n;	  
	
	i=1;

	while(i<=n){
		if(i%2==0)
		{
			j=i*i;
			cout<<j;
		}
		else
		{
			cout<<i;
		}
	  
	  
	  i++;	
	}

	
	
}