#include<iostream>

using namespace std;
class report{
    int     adno,i,total=0;
    char name[100];
    float mark[10],avarg;
    float get_avg(){
        avarg=total/5;
    }
    public:
    void readinfo()
    {
        cout<<"enter a admin no is: ";
        cin>>adno;
        cout<<"enter a name: ";
        cin>>name;

        for(i=0;i<5;i++)
        {
            switch(i)
            {
                case 0: 
                    cout<<"enter english mark : ";
                    break;
                case 1: 
                    cout<<"enter science mark : ";
                    break;
                case 2: 
                    cout<<"enter maths mark : ";
                    break;
                case 3: 
                    cout<<"enter hindi mark : ";
                    break;
                case 4: 
                    cout<<"enter stat mark : ";
                    break;
                default: 
                    cout<<"enter valid input : ";
                    break;
                    
            }
            cin>>mark[i];

            total=total+mark[i];
        }
        get_avg();
        displayinfo();
    }
    void displayinfo()
    {
        cout<<endl<<"admin no: "<<adno;
        cout<<endl<<"name: "<<name;

        for(i=0;i<5;i++)
        {
            switch(i)
            {
              case 1: 
                    cout<<endl<<" english : ";
                    break;
              case 2: 
                    cout<<endl<<" science : ";
                    break;
              case 3: 
                    cout<<endl<<" maths : ";
                    break;
              case 4: 
                    cout<<endl<<" hindi : ";
                    break;
              case 5: 
                    cout<<endl<<" stat : ";
                    break;
                      
            }
            cout<<mark[i];
        }
        cout<<endl<<"total mark is : "<<total;
        cout<<endl<<"avarg mark is : ["<<avarg<<"]";

    }
};

int main()
{
    report student;

    student.readinfo();
}