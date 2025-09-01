// we are using and condtional statement

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter age"<<endl;
    cin>>age;
     if (age>=12 && age<=50)
     {
        cout<<"Young";
     }
     else{
        cout<<"Not Young";
     }
     return 0;
}
/*
Enter age
50
Young
*/