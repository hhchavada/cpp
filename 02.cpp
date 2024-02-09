#include<iostream>

using namespace std;
class batsman{
    public:
    int bcode;
    char bname[20];
    int innings,notout,runs,calculate;
    float batavg;

    float calcavg(){

        return  batavg=runs/(innings-notout);
    }

    
   batsman(){
        cout<<"enter batsman code: ";
        cin>>bcode;
        cout<<"enter batsman name: ";
        cin>>bname;
        cout<<"enter batsman innings: ";
        cin>>innings;
        cout<<"enter batsman notout innings: ";
        cin>>notout;
        cout<<"enter batsman runs: ";
        cin>>runs;
        calculate=calcavg();
    }  
    void displaydata(){
        cout<<" batsman code: "<<bcode<<endl;
        cout<<" batsman name: "<<bname<<endl;
        cout<<" batsman innings: "<<innings<<endl;
        cout<<" batsman runs: "<<runs<<endl;
        cout<<" batsman notout innings: "<<notout<<endl;
        cout<<" batsman batting average: "<<calculate<<endl;
    }
};
int main()
{
    batsman b;
    
    b.displaydata();  

}