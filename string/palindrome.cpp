#include <iostream>
using namespace std;

bool palindrome(char ch[], int size)
{
    int s = 0;
    int e = size-1;

    while(s<e)
    {
        if(ch[s++] != ch[e--])
        return 0;

    }
    return 1;
}


void reverse_string(char ch[],int size)
{
    int start =0;
    int end = size-1;

    while (start<end)
    {
        swap(ch[start++], ch[end--]);
    }
}


int lenght_of_string(char ch[])
{
    int cnt =0;
    for (int i=0;ch[i]!='\0';i++)
    {
        cnt++;
     //   cout <<"i"<<endl;
    }
    return cnt;
}

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