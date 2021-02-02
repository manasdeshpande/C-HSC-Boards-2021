//Print the sum of first 100 natural numbers
#include <iostream>
using namespace std;
int main()
{
    int sum = 0, digit = 1;  //Dynamic Initialisation
    while(digit<=100)
    {
        sum+=digit;
        digit++;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}