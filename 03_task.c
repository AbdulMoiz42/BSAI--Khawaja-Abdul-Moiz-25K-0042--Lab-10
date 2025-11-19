#include<stdio.h>
#include<string.h>
int main()
{
    char text[100];
    int vowels=0;
    int consonants=0;
    int spaces=0;
    int digits=0;
    int length=0;

    printf("Enter the text:");
    fgets(text,100,stdin);

    length=strlen(text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i]=='A'||text[i]=='a'||text[i]=='E'||text[i]=='e'||text[i]=='I'||text[i]=='i'||text[i]=='O'||text[i]=='o'||text[i]=='U'||text[i]=='u')
        {
            vowels++;
        }
        else if ((text[i] >= 'A' && text[i] <= 'Z') ||
                 (text[i] >= 'a' && text[i] <= 'z'))
        {
            consonants++;
        }
        else if (text[i] >= '0' && text[i] <= '9')
        {
            digits++;
        }
        else if (text[i]==' ')
        {
            spaces++;
        }
        
    }
    printf("Statistics:\n");
    printf("Vowels:%d\nConsonants:%d\nDigits:%d\nSpaces:%d\nTotal Characters:%d",vowels,consonants,digits,spaces,length);
    

   
   return 0;
}