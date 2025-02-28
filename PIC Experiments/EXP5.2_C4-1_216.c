#include<stdio.h>
#include<string.h>

int main(){
  char name1[100], grade[100], nameCpy[100], name2[100], subString[100];
  printf("Enter the Name of the Student: ");
  gets(name1);
  printf("Enter the Grade of the Student: ");
  gets(grade);
  printf("The Length of the Student`s Name is: %d\nThe Length of the Student`s Grade is: %d", strlen(name1), strlen(grade));
  strcpy(nameCpy, name1);
  printf("\nStudent`s Name copied into another String: %s", nameCpy);
  strcat(nameCpy, " - Excellent Student");
  printf("\n%s", nameCpy);
  printf("\nEnter Second Name to be Compared with the First Name: ");
  gets(name2);
  int result = strcmp(name2, name1);
  if(result>0){
        printf("%s is lexicographically greater than %s\n", name1, name2);
      } else if (result < 0) {
        printf("%s is lexicographically greater than %s\n", name2, name1);
      } else {
        printf("Both names are the same.\n");
      }
      
printf("Enter a Substring to be searched in the first name: ");
gets(subString);
subString[strcspn(subString, "\n")] = 0;

char *pos1 = strstr(name1, subString);
if(pos1){
  printf("The first occurance of %s is at positon %d\n", subString, (pos1-name1)+1);
} else{
  printf("Substring not Found in the Name.\n");
}

printf("Enter a Substring to be searched in the grade: ");
gets(subString);
subString[strcspn(subString, "\n")] = 0;

char *pos2 = strstr(grade, subString);
if(pos2){
  printf("The first occurance of %s is at positon %d\n", subString, (pos2-grade)+1);
} else{
  printf("Substring not Found in the Name.\n");
}

char *token = strtok(grade, " ");
while(token != NULL){
  printf("%s\n", token);
  token = strtok(NULL, " ");
}
return 0;
}
