//WAP to display name of the day in a week, depending upon the number entered on the keyboard, Starting from Monday.
#include <iostream>
using namespace std;
int main()
{
    int day;

    cout << "Enter a number between 1 to 7 \n";
    cin >> day;
    switch(day)
    {
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Satday\n";
            break;
        case 7:
            cout << "Sunday\n";
            break;
        default:
            cout << "Invalid, Enter a number between 1 and 7\n";
            break;
    }
    return 0;
}