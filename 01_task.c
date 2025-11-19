#include <stdio.h>
#include <string.h>
int main()
{
    char pass[30];
    int length;
    int* ptr=&length;
    int isupper = 0, isdigit = 0, isspecial = 0;
    
    printf("Enter your password: ");
    fgets(pass, 30, stdin);
    length = strlen(pass);

    if (*pass < length)
    {
        puts("Your password length is short!");
    }
    else
    {

        for (int i = 0; pass[i] != '\0'; i++)
        {

            if (pass[i] >= 'A' && pass[i] <= 'Z')
                isupper = 1;

            else if (pass[i] >= '0' && pass[i] <= '9')
                isdigit = 1;

            else if (pass[i] == '!' || pass[i] == '@' ||
                     pass[i] == '#' || pass[i] == '$' || pass[i] == '%')
                isspecial = 1;
        }
        if(isdigit&&isspecial&&isspecial)
        {
            printf("\n\nYour password is strong\n");
        }
        else
        printf("your password is weak");
    }

    return 0;
}