#include<iostream>
using namespace std;

class test{
    public:
    int testcode,nocandidate,centerreqd,calcnt;
    char description[100];
    int calcntr(){
        return (nocandidate/100+1);
    }

    
    test(){
        cout<<"enter testcode: ";
        cin>>testcode;
        cout<<"enter description: ";
        cin>>description;
        cout<<"enter number of candidate: ";
        cin>>nocandidate;
        cout<<"enter number of center: ";
        cin>>centerreqd;
        calcnt=calcntr();
    }

    void disptest(){
        cout<<"your testcode number is: "<<testcode<<endl;
        cout<<"your description is: "<<description<<endl;
        cout<<"Candidate number is: "<<nocandidate<<endl;
        cout<<"your calcntr is: "<<calcnt<<endl;
        cout<<"your center number is: "<<centerreqd<<endl;
        
    }
};
int main()
{
    test t;
    
    t.disptest();
}