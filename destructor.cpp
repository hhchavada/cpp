#include<iostream>
using namespace std;
class Test{
    public: 
    Test(){
        cout<<"Defualt constructer is called."<<endl;
    }
    ~Test(){
        cout<<"Destructer is called."<<endl;
    }
    Test(int x){
        cout<<"parameterized constructor is call."<<endl;
        cout<<"Value of a is : "<<x<<endl;
    }
};
int main()
{
 Test t(1);

}