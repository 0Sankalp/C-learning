#include <iostream>
using namespace std;

int main()
{
    float m1,m2,m3,Total,Avg;
    cout<<"Enter marks of 3 subject:"<<endl;
    cin>>m1>>m2>>m3;
    Total=m1+m2+m3;
    Avg=Total/3;
    if(Avg>=90)  {
       cout<<"A"<<endl;  
    }
    else if(Avg>=70 && Avg<90) {
        cout<<"B"<<endl;
    }
    else{
        cout<<"C"<<endl;
    }
        
           return 0;
    }
 


