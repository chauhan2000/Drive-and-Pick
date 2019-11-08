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

int deleteT()
{
     nom=0;
     noo=0;
     noi=0;
     nop=0;
     amount=0;
     count=0;
}


int main()
{
int ch,i;


while(ch<=7)
{
//Choose food item from Menu
    printf("CHOOSE: ");
    printf("\n Sno.      Itemlist  ");
    printf("\n 1         maggi     ");
    printf("\n 2         omlete    ");
    printf("\n 3         idli      ");
    printf("\n 4         paratha   ");
    //printf("Other Options");
    printf("\n 5         showstatus");
    printf("\n 6         deleteT");
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
            deleteT();
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