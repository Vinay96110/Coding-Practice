#include<stdio.h>
#include <string.h>

int Palindrome_Return(char ch[])
{
    int len = strlen(ch)-1;
    int start =0;int i =0;
    char str[len];


    while(start<=len)
    {
        if(ch[start] != ch[len])
        return 0;

        start++;
        len --;
    
    }

    return 1;
}

int main()
{
    char *ptr = "121";
    printf("Palindrome: %d\n",Palindrome_Return(ptr));
    

}