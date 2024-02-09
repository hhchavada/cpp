#include<iostream>

using namespace std;

class Test
{

    public:
     
    void Volume(int l)
   {
      cout<<"volume of cube : "<<l*l*l<<endl;   
   }

    void Volume (int l,int w,int h)
   {
      cout<<"Volume of Rectangular Solid or Cuboid : "<<l*w*h<<endl; 
   }

    void Volume(double r)
   {
      cout<<"Volume  of Sphere : "<<((4/3)*3.14*r*r*r)<<endl; 
   }

    void Volume(double b, double h)
   {
     cout<<"Volume of Pyramid : "<<0.33*b*h<<endl;   
   }

    void Volume(double r,int h)
   {
     cout<<"Volume of Cylinder : "<<3.14*r*r*h<<endl;  
   }

};


int main()
{
    Test t;
    
    t.Volume(10);
    t.Volume(10,20,30);
    t.Volume(10.1);
    t.Volume(10.1,20.2);
    t.Volume(10.1,20);
}
