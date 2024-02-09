#include<iostream>
using namespace std;
int main()
{
  int i,n,j,a=1;
	cout<<"enter a value : ";
	cin>>n;
    
	
	i=1;

	while(i<=n){
	  j=a*i;
	  cout<<j;
	  a=a*2;
	  i++;	
	}

	
	
}