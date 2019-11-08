#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int nom,noo,noi,nop,amount,count;

int showstatus()
{
    printf("\n quantity of maggi=%d",nom);
    printf("\n quantity of omlete=%d",noo);
    printf("\n quantity of idli=%d",noi);
    printf("\n quantity of paratha=%d",nop);
    printf("\n quantity of total food ordered=%d",nom+noo+noi+nop);
    printf("\n total amount gain=%d",amount);
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


int main()
{
int ch,i;


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
scanf("%d",&ch);
    switch(ch)
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
    return 0;
}
