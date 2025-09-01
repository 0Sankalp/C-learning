/*
Nested loop means putting one loop inside another loop
*/

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 no"<<endl;
    cin>>a>>b>>c;

    if(a>b && a>c)
    {
        cout<<"a";
    }
        else
        {
            if (b>c)
            {
                cout<<b;
            }
                else
                {
                cout<<c;
                }
            
            
        }
    return 0;
}

//Enter 3 no
//2 3 4
//4