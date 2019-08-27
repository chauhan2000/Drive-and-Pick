#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void main()
{
char name[20];
char phoneno[10];
char address[50];
char filename[15];
FILE *fptr;
char c;
fptr = fopen("customer.rec","w");
if (fptr == NULL)
{
printf ("File does not exists");
return;
}
printf("Enter your name");
scanf("%s", name);
fprintf(fptr,"name=%s\n",name);
printf("Enter your phone number");
scanf("%s", phoneno);
fprintf(fptr,"phoneno=%s\n",phoneno);
printf("Enter your address");
scanf("%s", address);
fprintf(fptr,"address=%s\n",address);
printf("Enter the filename to be opened \n");
    scanf("%s", filename);
    /*  open the file for reading */
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
c = fgetc(fptr);
while (c!= EOF);
{
printf("%c",c);
c =fgetc(fptr);
}
fclose(fptr);
return 0;
}