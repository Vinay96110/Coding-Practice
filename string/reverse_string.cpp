#include <iostream>
using namespace std;

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

    reverse_string(ch,lenght_of_string(ch));
    cout << endl<<ch;




    return 0;

}