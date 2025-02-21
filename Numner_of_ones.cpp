#include <iostream>
using namespace std;

int main()
{
    int n, digit, sum, i =0;
    cout << "Enter Number "<<endl;
    cin >> n;

    while (n != 0)
    {
        digit = n & 1;
        if(digit)
        i++;
        cout << "digits are" << digit <<endl;
        n = n>>1;
    }
 
    cout << "number of ones:" << i <<endl;
    return 0;
}