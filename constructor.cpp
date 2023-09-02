#include<iostream>

using namespace std;
class test{
    public:
    test(){
        cout<<"defult constructor is called"<<endl;
    }
    test(int a){
        cout<<"parameterized constructor is called"<<endl;
        cout<<"value of a is:"<<a<<endl;
    }
};
int main(){
    test   rrr(100),a;
}