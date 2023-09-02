#include<iostream>

using namespace std;
class report
{
    private:
    int adno,i,total=0;
    char name[20];
    float marks[5],averg;

    float get_avg()
    {
        averg=total/5;
    }
    public:
    void readinfo()
    {
        cout<<"enter a admin no is :";
        cin>>adno;
        cout<<"enter a name :";
        cin>>name;

        for(i=0;i<5;i++){

            switch(i)
            {
            case 0:
             cout<<"enter english mark:";
             break;

             case 1:
             cout<<"enter science mark:";
             break;

            case 2:
             cout<<"enter maths mark:";
             break;

            case 3:
             cout<<"enter hindi mark:";
             break;

            case 4:
             cout<<"enter stat mark:";
             break;

            default:
             cout<<"enter valid input:";
             break;
        }

        cin>>marks[i];

        total=total+marks[i];

    }

        get_avg();
        displayinfo();
    }
    void displayinfo()
    {
        cout<<endl<<"admin no"<<adno;
        cout<<endl<<"name"<<name;

        for(i=0;i<5;i++)
        {
            switch(i)
            {
                case 0:
             cout<<endl<<" english:";
             break;

             case 1:
             cout<<endl<<" science:";
             break;

            case 2:
             cout<<endl<<"maths :";
             break;

            case 3:
             cout<<endl<<" hindi :";
             break;

            case 4:
             cout<<endl<<"stat :";
             break;

            
            }

            cout<<marks[i];

        }

            cout<<endl<<"total mark is :"<<total;
            cout<<endl<<"average mark is :["<<averg<<"]";
            
    }
};

int main()
{
    report student;
    student.readinfo();
}