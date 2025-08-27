// adding maximaum of three numberes

#include <iostream>
using namespace std;

int maxima(int a,int b, int c)
{
    if (a>b &&a>c)
    return a;
    else if (b>c)
    return b;
    else return c;
}

int main()
{
    int x=10,y=15,z=5;
    int r = maxima(x,y,z);
    cout<<"maxima ="<<r<<endl;
    return 0;
}