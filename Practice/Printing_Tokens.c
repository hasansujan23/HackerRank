#include<stdio.h>
#include<string.h>
int main()
{
    char s[1005];
    int i=0;
    gets(s);
    for(i=0;i<strlen(s);i++){
        if(s[i]==' ')
            printf("\n");
        else
            printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}
