#include<iostream>
using namespace std;
class Base{
        protected:
        int a;   
        public:
        void setA(){
            cout<<"Enter A: ";
            cin>>a;
        }    
};
class derived1 :public Base{
        protected:
        int b;   
        public:
        void setB(){
            cout<<"Enter B: ";
            cin>>b;
        }    
        void product(){
        cout<<"product of a and b is "<<a*b<<endl;
    }
};
class derived2 :public Base{
        protected:
        int n;   
        public:
        void setB(){
            cout<<"Enter N : ";
            cin>>n;
        }    
        void Add(){
        cout<<"Addition of a and n is "<<a+n<<endl;
    }
};
int main(){
    derived1 d1;
    d1.setA();
    d1.setB();
    d1.product();

    derived2 d2;
    d2.setA();
    d2.setB();
    d2.Add();
}