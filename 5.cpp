#include<iostream>

using namespace std;
class book{
    int book_no;
    char booktitle[20];
    float price,copy_num,total;
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
        cout<<"how many copy do you want:";
        cin>>copy_num;
       total=total_cost(copy_num);
        cout<<endl<<"total cost of paid by use is:"<<total;
        
    }

};
int main(){
book b;
    b.input();
    b.purchase(); 
}