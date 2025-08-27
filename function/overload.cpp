/* Function overloading is a feature that allows you to 
define multiiple function within the same name but with diff parameter*/

#include <iostream>
using namespace std;

int sum(int x,int y) 
{
    return x+y;
}
float sum (float x,float y)
{
    return x+y;
}
int sum(int x, int y,int z)
{
    return x+y+z;

}
int main()
{
    cout<<sum(10,3)<<endl;
    cout<<sum(12.5f,3.4f)<<endl;
    cout<<sum(10,20,3)<<endl;

    return 0;
}

/*output
13
15.9
33
*/