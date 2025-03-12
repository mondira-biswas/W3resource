#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int uppercase = 0, lowercase = 0;
    for(int i=0;s[i] !='\0';i++)
    {
        if(isupper(s[i]))
        {
            uppercase++;
        }
        else
        {
            lowercase++;
        }
    }
    if(uppercase>lowercase)
    {
        for(int i=0;s[i] !='\0';i++)
        s[i] = toupper(s[i]);
    }
    else
    {
        for(int i=0;s[i] !='\0';i++)
        s[i] = tolower(s[i]);
    }
    printf("%s\n",s);
    return 0;

}