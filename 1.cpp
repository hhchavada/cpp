#include<iostream>
using namespace std;
class student{
    int adminno;
    char sname[20];
    float english,maths,science,total;
    float ctotal(){
         return maths+science+english;
    }

public:
void takedata(){
    cout<<"enter admin no: ";
    cin>>adminno;
    cout<<"enter student name: ";
    cin>>sname;
    cout<<"enter maths mark: ";
    cin>>maths;
    cout<<"enter science mark: ";
    cin>>science;
    cout<<"enter english mark: ";
    cin>>english;
    total=ctotal();

}
void showdata(){
    cout<<"student admin no:"<<adminno<<endl;
    cout<<"student name:"<<sname<<endl;
    cout<<"maths mark:"<<maths<<endl;
    cout<<"science mark:"<<science<<endl;
    cout<<"english mark:"<<english<<endl;
    cout<<"total mark:"<<total<<endl;
}

};
int main()
{
    student s;
    s.takedata();
    s.showdata();
}
