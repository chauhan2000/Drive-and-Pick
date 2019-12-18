#include <stdio.h>
#include <string.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#define BUFFER_SIZE 1000
#define INFINITY 9999
#define MAX 10
int indexOf(FILE *fptr, const char *word, int *line, int *col);
void dijkstra(int G[MAX][MAX],int n,int startnode);
int nom,noo,noi,nop,amount,count;
int dij(){
int G[MAX][MAX],i,j,n,u;
printf("Enter no. of vertices:");
scanf("%d",&n);
printf("\nEnter the cost matrix:\n");

for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&G[i][j]);

printf("\nEnter the starting node:");
scanf("%d",&u);
dijkstra(G,n,u);

return 0;}
void dijkstra(int G[MAX][MAX],int n,int startnode)
{
 
int cost[MAX][MAX],distance[MAX],pred[MAX];
int visited[MAX],count,mindistance,nextnode,i,j;

//pred[] stores the predecessor of each node
//count gives the number of nodes seen so far
//create the cost matrix
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(G[i][j]==0)
cost[i][j]=INFINITY;
else
cost[i][j]=G[i][j];

//initialize pred[],distance[] and visited[]
for(i=0;i<n;i++)
{
distance[i]=cost[startnode][i];
pred[i]=startnode;
visited[i]=0;
}

distance[startnode]=0;
visited[startnode]=1;
count=1;

while(count<n-1)
{
mindistance=INFINITY;

//nextnode gives the node at minimum distance
for(i=0;i<n;i++)
if(distance[i]<mindistance&&!visited[i])
{
mindistance=distance[i];
nextnode=i;
}

//check if a better path exists through nextnode
visited[nextnode]=1;
for(i=0;i<n;i++)
if(!visited[i])
if(mindistance+cost[nextnode][i]<distance[i])
{
distance[i]=mindistance+cost[nextnode][i];
pred[i]=nextnode;
}
count++;
}
 
//print the path and distance of each node
for(i=0;i<n;i++)
if(i!=startnode)
{
printf("\nDistance of node%d=%d",i,distance[i]);
printf("\nPath=%d",i);

j=i;
do
{
j=pred[j];
printf("<-%d",j);
}while(j!=startnode);
}
}
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
  fprintf(ptr, "name" "\t%s" "\tphone no" "\t%lld", name, Phone_No);
  fprintf(ptr, "\t");
  fprintf(ptr, "vehicle no" "\t%s" "\tsource" "\t%s", veh, so);
  fprintf(ptr, "\t");
  fprintf(ptr, "username" "\t%s" "\tsecurity" "\t%s", us, password);
  fprintf(ptr, "\n");

  // close connection
  fclose(ptr);



}
//==============================================================================================================================================
void Customer()
{
    int ch;
printf("\n[1] Login\n");
printf("[2] Register");
printf("\n[3] Exit\n");
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
case 3:
default:
printf("exit");
break;
case 4:
exit(0);
printf("Bye BYe HAve A GreAT DAY");
}
}
//=====================================================================//=====================================================================
void details()
{
printf("\n What would You like to see\n");
printf("\n[1] Orders\n");
printf("\n[2] Deposits\n");
printf("\n[1] Status\n");
    
}
void status()
{
printf("\n What would You like to see\n");
printf("\n[1] Orders\n");
printf("\n[2] Deposits\n");
printf("\n[1] Status\n");
    
}
void orders()
{
printf("\n What would You like to see\n");
printf("\n[1] Orders\n");
printf("\n[2] Deposits\n");
printf("\n[1] Status\n");
    
}
//============================================================================================================================================

void loginme()
{
char nameu;
printf("Hello Administrator,enter your password");
scanf("%s",&nameu);
if (nameu == "password")
{
show();
}
else if(nameu!= "password")
{
printf("Wrong password");
exit(0);
}

}


//============================================================================================================================================
 int Administrator()
{
    int z;
printf("\n Press 1 to login\n");
printf("\n[1] Login\n");
printf("\n[4] Exit\n");
scanf("%d",&z);
switch (z)
{
case 1:  
loginme();
break;
default:
exit(0);
}
}

int show()
{int o;
printf("\nWhat Would you like to see\n [1]Details \n[2]Status \n[3]No of orders");
scanf("%d",&o);
switch (o)
{
    case 1:
    details();
    break;
    case 2:
    status();
    break;
    case 3:
    orders();
    break;
    default:
    printf("exit");
}
}
//==============================================================================================================================================
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
 FILE *vptr;
 vptr = fopen("customer.txt", "a");
fprintf(vptr, "%s %s", name, password);
fprintf(vptr, "\n");

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
amount = amount- 30;
break;    
case 10:
noi=--noi;
amount = amount- 35;
break;    
case 11:
nop=--nop;
amount = amount- 40;
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
   dij();
            exit(0);
            break;
        default:
            printf("\n Invalid choice");
       break;
    }
    }
    //return 0;
}


int main()
{
    int w,y;
while(1)
{
for(y=0;y<=12;y++)
{
printf("*");
}

for(y=0;y<=5;y++)
{
printf("**");
//sleep(1);
printf("Welcome");
}
printf("**");
for(y=0;y<=10;y++)
{
printf("*");
}
printf("****");
printf("\n\n\n\n\t\t\t\t\t\t\t\t Hello, Hope You are Doing Great");
printf("\n\n\n\n\t\t\t\t\t\t\t\t\t Welcome to Drive & pick");
printf("\n\n\t\t\t\t\t\t\t\t Would you like to log in or register yourself");
printf("\n\n\t\t\t\t\t\t\t If you are new Customer Then first register yourself else signup");
printf("Who are you?\n[1]Adminstrator \n[2]Customer");
scanf("%d",&w);
switch(w)
{

case 1:
Administrator();
break;

case 2:
Customer();

default:
exit(0);

}

}
return 0;
}

