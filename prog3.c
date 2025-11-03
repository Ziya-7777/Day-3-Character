#include <stdio.h>

int main()
{
    char name[20];

    printf("Enter your name: ");
    scanf("%s",&name);

    for(int i = 0; name[i] != '\0'; i++)
    {
        if(name[i]>=65 && name[i]<=90)
        {
            name[i] = name[i] + 32;
        }
    }

    for(int i = 0; name[i] != '\0'; i++)
    {
        printf("%c",name[i]);
    }

    return 0;
}