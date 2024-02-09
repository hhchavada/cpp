#include<iostream>
using namespace std;
class base{
    public: 
    int a,n;
    void setA(){
       cout<<"enter n number: ";
       cin>>n;
    }
};
    int fact(){


	if(n==1)
		return 1;
	else
		return n*fact(n-1);
    
    }   
    

class derived: public base
{
    public: 
    void getA(){
        cout<<"factorial is : "<<a<<endl;
    }
};
int main(){
    derived d;
    d.setA();
    d.getA();
    
}