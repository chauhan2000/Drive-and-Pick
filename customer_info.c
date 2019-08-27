#include <stdio.h>
int main() {
  // creating a FILE variable
  FILE *fptr;

  // integer variable
  long long int Phone_No; // This for large no.

  // character variable
  char name[40];

  // open the file in write mode
  fptr = fopen("customer", "a");

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


  // write data in file
  fprintf(fptr, "%s %lld", name, Phone_No);

  // close connection
  fclose(fptr);


  return 0;
}
