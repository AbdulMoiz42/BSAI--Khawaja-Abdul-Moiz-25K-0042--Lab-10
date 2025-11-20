#include<stdio.h>
int main()
{
	//pointer
	FILE *fptr;
	
	//file create(file open)
	fptr = fopen("demo.txt","w");
	fputs("\n Hello this is our first class of file handling",fptr);
	fclose(fptr);
	
	fptr = fopen("demo.txt","r");
	
	
	
     if(fptr==NULL)
     {
     	printf("Error in a file/ or 404");
     	return 0;
	 }
	 char c;
	 int vowels=0;
	 int Consonants=0;
	 while((c=fgetc(fptr)) !=EOF)
	 {
	 	if(c>='A'&&c<='Z'||c>='a'&&c<='z')
	 	{
		 
	 	 if(c=='a'||c=='A'||c=='E'||c=='e'||c=='I'||c=='i'||c=='o'||c=='O'||c=='u'||c=='U'){
	 	 	vowels++;

	 
	 }else
	 {
	 	Consonants++;
	 	
	 	
	 }
	 }
}
   printf("vowels:%d\n",vowels);
   printf("consonants:%d\n",Consonants);
   
	printf("File created Successfully");

	fclose(fptr);
	
	
	
	
	return 0;
}

