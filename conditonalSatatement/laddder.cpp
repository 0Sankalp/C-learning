#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    if (day == 1) {
        cout << "Monday" << endl;
    }
    else if (day == 2) {
        cout << "Tuesday" << endl;
    }
    else if (day == 3) {
        cout << "Wednesday" << endl;
    }
    else if (day == 4) {
        cout << "Thursday" << endl;
    }
    else if (day == 5) {
        cout << "Friday" << endl;
    }
    else if (day == 6) {
        cout << "Saturday" << endl;
    }
    else if (day == 7) {
        cout << "Sunday" << endl;
    }
    else {
        cout << "Invalid input! Please enter 1-7." << endl;
    }

    return 0;
}

/*
Enter day number (1-7): 5
Friday*/