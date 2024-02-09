#include<iostream>
using namespace std;
class test{
    public: 
    test(){
        cout<<"defualt constructor is called"<<endl;

    }
    test (int x){
        cout<<"paramterized constructr is called"<<endl;
        cout<<"value of a is : "<<x<<endl;
    }
};
int main(){
    test aaa(100),a;
}