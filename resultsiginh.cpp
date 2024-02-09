#include<iostream>
using namespace std;
class A{
  
    public:
    int english,hindi,gujrati;
    void setA(){
        cout<<"enter english mark : ";
        cin>>english;
        cout<<"enter hindi mark : ";
        cin>>hindi;
        cout<<"enter gujrati mark : ";
        cin>>gujrati;
    }
};
class B: public A
{
    public:
    int total,percentage;
    void getA(){
        cout<<"english mark : "<<english<<endl; 
        cout<<"hindi mark : "<<hindi<<endl; 
        cout<<"gujrati mark : "<<gujrati<<endl; 
        total=english+hindi+gujrati;
        cout<<"total mark : "<<total<<endl;
        percentage=total*100/300;
        cout<<"percentage : "<<percentage<<endl;

    }
};
int main(){
    B d;
    d.setA();
    d.getA();
}