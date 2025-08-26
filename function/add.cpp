#include <iostream>>
using namespace std;

float add(float X, float Y)
{
    float Z;
    Z=X+Y;
    return Z;
}
 int main()
 {
    float X=2.3,Y=7.9,Z;
    Z=add(X,Y);
    cout<<Z<<endl;
    return 0;
 }