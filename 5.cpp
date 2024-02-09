#include<iostream>

using namespace std;
class book{
    int book_no;
    char booktitle[20];
    float price,copynumber,total;
    float total_cost(int cp_num){
       return cp_num*price;
       
    }
public:
    void input(){
        cout<<"enter book_no:";
        cin>>book_no;
        cout<<"enter book titel:";
        cin>>booktitle;
        cout<<"enter book price:";
        cin>>price;
        
        

    }
    void purchase(){
        cout<<"enter input number of copies:";
        cin>>copynumber;
        total=total_cost(copynumber);
        cout<<"total cost to paid you by : "<<total;
        
    }

};
int main(){
    book b;
    b.input();
    b.purchase(); 
}