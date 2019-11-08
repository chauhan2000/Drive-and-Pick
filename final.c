#include <stdio.h>
#include <string.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#define BUFFER_SIZE 1000
int indexOf(FILE *fptr, const char *word, int *line, int *col);
int nom,noo,noi,nop,amount,count;

void signup()

{
FILE *ptr;

  // integer variable
  long long int Phone_No; // This for large no.

  // character variable
  char name[40];
  char veh[10];
  char so[25];
  char us[15];
  char password[10];
  

  // open the file in write mode
  ptr = fopen("customer.txt", "a");

  if (ptr != NULL) {
    printf("File created successfully!\n");
  }
  else {
    printf("Failed to create the file.\n");
  }

  // get student detail
  printf("Welcome! Please Enter your information\n");
  printf("Enter your name: \n");
  scanf("%s",&name);
  printf("Enter Phone no: \n");
  scanf("%lld",&Phone_No);
 printf("Enter Vehcile no: \n");
  scanf("%s",&veh);
printf("Enter source: \n");
  scanf("%s",&so);
printf("\n --------------------------- ");
printf("\n ENTER USERNAME: \n");
  scanf("%s",&us);
printf("\n ENTER PASSWORD: \n"); 
scanf("%s",&password);



  // write data in file
  fprintf(ptr, "%s %lld", name, Phone_No);
  fprintf(ptr, "%s %s", veh, so);
  fprintf(ptr, "%s %s", us, password);
  fprintf(ptr, "\n");

  // close connection
  fclose(ptr);



}
//=====================================================================//=====================================================================
void login()

{

int i; 
char name[20], password[20], ch;
 
printf("Enter your username");
scanf("%s", &name);
printf("password:\n"); 
    int p=0; 
    do{ 
        password[p]=getch(); 
        if(password[p]!='\r'){ 
            printf("*"); 
        } 
        p++; 
    }while(password[p-1]!='\r'); 
    password[p-1]='\0'; 
    printf("Username : %s",name);
   printf("\n Password :",password); 
    getch(); 
 

    FILE *fptr;
    char path[100];

    char word[50];

    int line, col;


    /* Input file path */
    printf("Enter file path: ");
    scanf("%s", path);

    /* Input word to search in file */
    printf(" to search in file: ",password);


    /* Try to open file */
    fptr = fopen(path, "r");

    /* Exit if file not opened successfully */
    if (fptr == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check you have read/write previleges.\n");

        exit(EXIT_FAILURE);
    }


    // Find index of word in fptr
    indexOf(fptr, password, &line, &col);

       if (line != -1)
        printf("'%s' found at line: %d, col: %d\n", password, line + 1, col + 1);
    else
        printf("'%s' does not exists.", password);
    
        
    // Close file
    fclose(fptr);




}
int indexOf(FILE *fptr, const char *password, int *line, int *col)
{
    char str[BUFFER_SIZE];
    char *pos;

    *line = -1;
    *col  = -1;

    while ((fgets(str, BUFFER_SIZE, fptr)) != NULL)
    {
        *line += 1;

        // Find first occurrence of word in str
            pos = strstr(str, password);

        if (pos != NULL)
        {
            // First index of word in str is 
            // Memory address of pos - memory
            // address of str.
            *col = (pos - str);
            break;
        }
    }


    // If word is not found then set line to -1
    if (*col == -1)
        *line = -1;

    return *col;


}


//printf("=======================================================");

int showstatus()
{
    FILE *str;
    str = fopen("customer.txt", "a");
    if (str != NULL) {
    printf("Order Written!\n Thankyou,Visit Again\n");
  }
  else {
    printf("Failed to create the file.\n");
  }
    printf("\n quantity of maggi=%d",nom);
    printf("\n quantity of omlete=%d",noo);
    printf("\n quantity of idli=%d",noi);
    printf("\n quantity of paratha=%d",nop);
    printf("\n quantity of total food ordered=%d",nom+noo+noi+nop);
    printf("\n total amount gain=%d",amount);
    fprintf(str, "\tmaggi" "\t%d" "\tomellete""\t%d" "\tidli""\t%d" "\tparatha""\t%d" "\tquantity""\t%d" "\ttotal""\t%d",  nom, noo, noi, nop, nom+noo+noi+nop, amount);
    fprintf(str, "\n");

  // close connection
  fclose(str);
}

int maggi()
{
    printf("\n foodorder received");
   nom++;
    amount = amount+ 50;

count++;
}

int omlete()
{
    printf("\n foodorder received");
    noo++;
    amount = amount+ 30;
    count++;
}

int idli()
{
    printf("\n foodorder received");
    noi++;
    amount = amount+ 35;
    count++;
}

int paratha()
{
    printf("\n foodorder received");
    nop++;
    amount = amount+ 40;
    count++;
}

int reset()
{
int q;
printf("enter the choice you want to decrease");
scanf("%d",&q);     
switch(q)
{
case 8:
	nom=--nom;
	amount=amount-50;
	break;
case 9:
	noo=--noo;
	amount = amount+ 30;
	break;     
case 10:
	noi=--noi;
	amount = amount+ 35;
	break;     
case 11:
	nop=--nop;
	amount = amount+ 40;
	break;          
case 13:
	count=--count;
	break;
default:
	printf("bye bye");
	break;
}
}

void order()
{
int j,i;
while(1)
{
//Choose food item from Menu
    printf(" \n CHOOSE: ");
    printf("\n Sno.      Itemlist  ");
    printf("\n 1         maggi     ");
    printf("\n 2         omlete    ");
    printf("\n 3         idli      ");
    printf("\n 4         paratha   ");
    //printf("Other Options");
    printf("\n 5         showstatus");
    printf("\n 6         reset");
    printf("\n 7         exit");

printf("\nenter your choice");
scanf("%d",&j);
    switch(j)
    {
        case 1:
            maggi();
            break;
        case 2:
            omlete();
            break;
        case 3:
            idli();
            break;
        case 4:
            paratha();
            break;
        case 5:
            showstatus();
            break;
        case 6:
            reset();
            break;
	case 7:
	    exit(0);
        default:
            printf("\n Invalid choice");
   	    break;
    }
    }
    //return 0;
}

int main()
{
    int ch,y;
while(1)
{
for(y=0;y<=166;y++)
{
printf("*");
}

for(y=0;y<=13;y++)
{
printf("****");
sleep(1);
printf("Welcome");
}
printf("****");
for(y=0;y<=166;y++)
{
printf("*");
}
printf("**********");
printf("\n\n\n\n\t\t\t\t\t\t\t\t\t Hello, Hope You are Doing Great");
printf("\n\n\t\t\t\t\t\t\t\t Would you like to log in or register yourself");
printf("\n\n\t\t\t\t\t\t\t If you are new Customer Then first register yourself else signup");
sleep(2);
printf("\n[1] Login\n");
sleep(2);
printf("[2] Register");
sleep(2);
printf("\n[3] Order");
sleep(2);
printf("\n[5] Exit\n");
scanf("%d",&ch);
	switch (ch)
{
case 1:  
	login();
	order();
break;
case 2:
	signup();
	order();
break;
//case 3:
	//order();
case 4:
	default:
	printf("exit");
	break;
case 5:
	exit(0);
printf("Bye BYe HAve A GreAT DAY");
}
}	

	return 0;
}
