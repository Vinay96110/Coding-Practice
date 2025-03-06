#include <iostream>
using namespace std;



int main()
{
    char ch[30];
    cout << "enter string:"<<endl;
    cin >>ch;

    cout<<"Lenght is:" <<lenght_of_string(ch);

    // reverse_string(ch,lenght_of_string(ch));
    // cout << endl<<ch;

    cout <<endl;
    cout<<palindrome(ch,lenght_of_string(ch));




    return 0;

}