#include <stdio.h>
#include <string.h>
#include<conio.h>
#include<stdlib.h>
#define BUFFER_SIZE 1000
int indexOf(FILE *fptr, const char *word, int *line, int *col);

int main(void)
{ int i; 
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
   printf("\nYou have entered %s as password.",password); 
    getch(); 
 

    FILE *fptr;
    char path[100];

    char word[50];

    int line, col;


    /* Input file path */
    printf("Enter file path: ");
    scanf("%s", path);

    /* Input word to search in file */
    printf(" to search in file: ",name);


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
    indexOf(fptr, name, &line, &col);

    if (line != -1)
        printf("'%s' found at line: %d, col: %d\n", name, line + 1, col + 1);
    else
        printf("'%s' does not exists.", name);
    

    // Close file
    fclose(fptr);

    return 0;




}
int indexOf(FILE *fptr, const char *name, int *line, int *col)
{
    char str[BUFFER_SIZE];
    char *pos;

    *line = -1;
    *col  = -1;

    while ((fgets(str, BUFFER_SIZE, fptr)) != NULL)
    {
        *line += 1;

        // Find first occurrence of word in str
        pos = strstr(str, name);

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