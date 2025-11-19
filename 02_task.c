#include <stdio.h>
#include <string.h>
int main()
{
    char email[100];
    char domain[100];
    int found = 0;
    puts("Welcome to domain finder from email");

    printf("Enter your email: ");
    fgets(email, 100, stdin);
    char ch = '@';
    
    for (int i = 0; email[i] != '\0'; i++)
    {
        if (email[i]==ch)
        {
            
            strcpy(domain,email+i+1);
            found=1;
            break;
        }
        
    }
    if (found)
        printf("Email: %sDomain: %s", email, domain);
    else
        printf("Invalid email!");

    

    return 0;
}