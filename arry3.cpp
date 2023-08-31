#include<iostream>
using namespace std;
int main()
{
	int  eng[5],hin[5],guj[5],total,pr,i;
	

     for(i=0;i<5;i++)
	{
		cout<<"value eng : ",i;
		cin>>eng[i];
	}

	for(i=0;i<5;i++)
	{
		cout<<"value hin : ",i;
		cin>>hin[i];
	}

	
     for(i=0;i<5;i++)
	{
		cout<<"value guj : ",i;
		cin>>guj[i];
	}

	
	cout<<"eng\thin\tguj\ttotal\tper\tgrade";
	for(i=0;i<5;i++)
	{
	total=eng[i]+hin[i]+guj[i];
	pr=total*100/300;
	cout<<"\n"<<eng[i]<<"\t"<<hin[i]<<"\t"<<guj[i]<<"\t"<<total<<"\t"<<pr;
	if(eng[i]<35 || guj[i]<35 || hin[i]<35){
		cout<<"\tfail";
	}
	else if(pr>=90){
	cout<<"\tA";
	}
	else if(pr>=70){
	cout<<"\tB";
	}
	else if(pr>=50){
	cout<<"\tC";
	}
	else if(pr>=35){
	cout<<"\tD";
	}
   }
}