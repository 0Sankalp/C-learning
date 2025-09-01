// using or ||

#include  <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter age";
    cin>>age;

    if(age,12 || age>50)
    {
        cout<<"Adult";
    }
    else{
        cout<<"Not adult";
    }
    return 0;
}

/*
enter age45
Adult
*/