#include <iostream>
using namespace std;

class Rectangle
{
    public:
    int lenght;
    int breadth;

    int area()
    {
        return lenght*breadth;
    }
    int perimeter()
    {
        return 2*(lenght+breadth);
    }
};
int main()
{
    Rectangle*ptr=new Rectangle;
    ptr->lenght=10;
    ptr->breadth=20;
    
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;

}

// output  200
  //60