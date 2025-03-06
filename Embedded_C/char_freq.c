#include<stdio.h>
#include <string.h>

int Frequency_Return(char ch[], char  ch1)
{
    int len = strlen(ch)-1;
    int start =0;int i =0;
    char str[len];

    while(ch[i] != '\0')
    {
       if(ch1 == ch[i])
       {
        start++;
        printf("%c\n",ch[i]);
        
       }
       i++;
    }

    // while(start<=len)
    // {
    //     if((ch1 == ch[start]) || (ch1 == ch[len]))
    //     {
    //         i++;           
    //     }
    
    //     // if(start == len)
    //     // {
    //     //     if((ch1 == ch[start]) && (ch1 == ch[len]))
    //     //     i++;
    //     // }
    //     printf("start:%c\n end:%c\n\n",ch[start],ch[len]);
    //     start++;
    //     len--;
    // }

    printf("%d\n",start);
    return start;
}

int main()
{
    char *ptr = "Vinnnnay";
    printf("Frequency: %d\n",Frequency_Return(ptr,'n'));
    

}