#include <iostream>
using namespace std;

int main()
{
    float a,b,c,d,r1,r2;
    cout<<"Enter a,b and c"<<endl;
    cin>>a>>b>>c;
    
    d=b*b-4*a*c;;
    if(d==0)
    {
        cout<<"roots are equal and real";
        cout<<endl<<(-b/(2*a));
    }
    else if (d>0)
    {
        cout<<"root are real and unequal";
        cout<<endl<<(-b+sqrt(d))/(2*a);
        cout<<endl<<(-b-sqrt(d))/(2*a);

    }
    else{
        cout<<"Imignary";
    }
    return 0;
}
/*
#include <iostream>
#include <cmath>   // for sqrt
using namespace std;

int main()
{
    float a, b, c, d, r1, r2;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;
    
    d = b*b - 4*a*c;

    if (d == 0)
    {
        cout << "Roots are real and equal" << endl;
        r1 = -b / (2*a);
        cout << "Root: " << r1;
    }
    else if (d > 0)
    {
        cout << "Roots are real and unequal" << endl;
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        cout << "Root1: " << r1 << endl;
        cout << "Root2: " << r2 << endl;
    }
    else
    {
        cout << "Roots are imaginary (complex)" << endl;
        float realPart = -b / (2*a);
        float imagPart = sqrt(-d) / (2*a);
        cout << "Root1: " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root2: " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
*/