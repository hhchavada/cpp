#include<iostream>
using namespace std;
class Test{
    int age;
    public: 
    Test(int x){
        age=x;
    }
    Test(Test &n){
        age=n.age;
    }
    int getage(){
        return age;
        
    }
};
int main()
{
    Test rrr(10);
    cout<<"Age is : "<<rrr.getage()<<endl;

    Test abc(rrr);
    cout<<"New age is : "<<abc.getage()<<endl;
}