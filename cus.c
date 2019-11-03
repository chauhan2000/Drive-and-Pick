#include <stdio.h>
#include<conio.h>
int main() {
  // creating a FILE variable
  FILE *fptr;

  // integer variable
  long long int Phone_No; // This for large no.

  // character variable
  char name[40];
  char veh[10];
  char so[25];
  char us[15];
  char password[10];
  

  // open the file in write mode
  fptr = fopen("customer.txt", "a");

  if (fptr != NULL) {
    printf("File created successfully!\n");
  }
  else {
    printf("Failed to create the file.\n");
    return -1;
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
  fprintf(fptr, "%s %lld", name, Phone_No);
  fprintf(fptr, "%s %s", veh, so);
  fprintf(fptr, "%s %s", us, password);

  // close connection
  fclose(fptr);


  return 0;
}