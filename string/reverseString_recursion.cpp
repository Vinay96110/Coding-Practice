#include <iostream>
using namespace std;

void reverseString(char str [])
{
    if(*str != '\0')
    {
        reverseString(str +1);
        cout << *str <<endl;
    }
}


int main()
{
    char str[] = "Vinay Shirol";
    reverseString(str);
}