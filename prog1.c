#include <stdio.h>

int main()
{
    char name[20];

    printf("Enter your name: ");
    scanf("%s",&name);

    for(int i = 0; name[i] != '\0'; i++)
    {
        printf("\n %c",name[i]);
    }
    return 0;
}