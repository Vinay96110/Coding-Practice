#include <iostream>
using namespace std;


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
    return 0;

}