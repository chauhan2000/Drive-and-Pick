#include <stdio.h>
#include <string.h>
int main()
{ int i; 
char name[20], password[20], ch;
 
printf("Enter your username");
scanf("%s", &name);
printf("Enter your password");
for (i = 0; i < 8; i++)
	{
            ch = getchar();
            password[i+1] = ch;
            ch = '*' ;
            printf("%c", ch);
	}
        password[i] = '\0';
	
printf("Username is %s",name);	
}