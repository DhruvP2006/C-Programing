#include<stdio.h>
#include<string.h>

int main(){
  int name[100], grade[100], nameCpy[100];
  printf("Enter the Name of the Student: ");
  gets(name);
  printf("Enter the Grade of the Student: ");
  gets(grade);
  printf("The Length of the Student`s Name is: %s\nThe Length of the Student`s Grade is: %s", strlen(name), strlen(grade));
  strcpy(nameCpy, name);
  printf("Student s Name copied into another String: %s", nameCpy);
  strcat(name, " - - Excellent Student");
  printf("%s", name);
  return 0;
}
