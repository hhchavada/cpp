#include<iostream>
using namespace std;
int main()
{
	int  price[5],qty[5],amt,disc,discamt,gst,billamt,i;
	

     for(i=0;i<5;i++)
	{
		cout<<"value price : ",i;
		cin>>price[i];
	}

	for(i=0;i<5;i++)
	{
		cout<<"value qty : ",i;
		cin>>qty[i];
	}
	

	
	printf("price\tqty\tamt\tdisc\tdiscamt\tgst\tbillamt");
	for(i=0;i<5;i++)
	{
		amt=price[i]*qty[i];
		disc=amt*10/100;
		discamt=amt-disc;
		gst=discamt*18/100;
		billamt=discamt+gst;


		cout<<"\n"<<price[i]<<"\t"<<qty[i]<<"\t"<<amt<<"\t"<<disc<<"\t"<<discamt<<"\t"<<gst<<"\t"<<billamt;
	}	
}
