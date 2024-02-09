#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    void setA(){
        cout<<"enter a : ";
        cin>>a;
    }
};
class Derived : public base
{
    public:
    void getA(){
        cout<<"value of a is : "<<a<<endl; 
    }
};
int main(){
    Derived d;
    d.setA();
    d.getA();
}