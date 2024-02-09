 //friend function
#include<iostream>
using namespace std;
class Test{
    int a,b;
    friend Test sum(Test , Test);
    public:
    void setdata(int x,int y){
        a=x , b=y;
    }
    int getproduct(){
        return a*b;
    }
};
Test sum(Test x,Test y){
    Test t;
    t.a=x.a + y.a;
    t.b=x.b + y.b;
    return t;
}
int main(){
    Test t,x,z;
    t.setdata(11,2);
    cout<<"prouduct is : "<<t.getproduct()<<endl;
    x.setdata(20,6);
    cout<<"prouduct is : "<<x.getproduct()<<endl;
    z=sum(t,x);
    cout<<"prouduct is : "<<z.getproduct()<<endl;
   
}