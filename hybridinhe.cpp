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
};
class derived2 {
        protected:
        int n;   
        public:
        void setN(){
            cout<<"Enter N: ";
            cin>>n;
        }    
};
class ABC: public derived1 , public derived2{
    public:
    void Addition(){
        cout<<"Addition is : "<<a+b+n<<endl;
    }
};
int main(){
    ABC a;
    a.setA();
    a.setB();
    a.setN();
    a.Addition();
}