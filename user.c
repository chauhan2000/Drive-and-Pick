#include <stdio.h>


void login()
{






}
void writetofile(string username)
{
FILE *ptr;
char c;
string file = &username".txt";
ptr = fopen("file","w");
fprintf(ptr,"password=%s\n",password);
if (ptr == NULL)
{
printf ("File does not exists");
return;
}






}




void registerpass()
{
printf ("Please enter the password:");
scanf("%s",&password);
printf("Please renter your password:");
scanf ("%s",&password2);
    if (password == password2){
        writetofile(username);
        exit(1);
    }
    else
    {
        printf ("Sorry invalid");
        registerpass();
    }}

}





void register()
{
printf("Please enter your username");
scanf("%s",&username);
printf("%s",username);
printf("Are You Confirm \n\n[1]yes \n\n[2]no");
switch (n)
if (n = 1)
{
registerpass();
}
else
 {
        printf("Sorry invalid input, Please try again");
        register();
}







int main()
{
    int ch;
printf("Hello, Would you like to log in or register\n[1] Login\n[2] Register\n[3] Exit");
scanf("%d",&ch);
	switch (ch)
{
case 1:  
	login();
break;
case 2:
	register();
break;
case 3:
	exit();
break;
}	
	return 0;
}