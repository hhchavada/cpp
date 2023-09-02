#include<iostream>

using namespace std;
class test{
    public:
    int testcode,nocandidate,centerreqd,calcnt;
    char descripition[100];
    int calcntr(){
       return centerreqd=(nocandidate/100+1);
    }

    test(){
        cout<<"enter value of testcode:";
        cin>>testcode;
        cout<<"enter descripition:";
        cin>>descripition;
        cout<<"enter value of nocandidate:";
        cin>>nocandidate;
        cout<<"enter value of centerreqd:";
        cin>>centerreqd;
        calcnt=calcntr();
        

    }
    void dispteat(){
        cout<<"testcode: "<<testcode<<endl;
        cout<<" describition: "<<descripition<<endl;
        cout<<" nocandidate: "<<nocandidate<<endl;
        cout<<" calcnt: "<<calcnt<<endl;
        cout<<" centerreqd: "<<centerreqd<<endl;
        
    }

};
int main(){
test t;
    
    t.dispteat(); 
}