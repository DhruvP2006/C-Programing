#include<stdio.h>

int main(){
  //  int marks1 = 97;
  //  int marks2 = 98; 
  //  int marks3 = 89;
   
   int marks[3];
   printf("Enter Physics Marks: ");
   scanf("%d", &marks[0]);
   printf("Enter Chemistry Marks: ");
   scanf("%d", &marks[1]);
   printf("Enter Maths Marks: ");
   scanf("%d", &marks[2]);

   printf("Marks of Physics = %d, Marks of Chemistry = %d, Marks of Maths = %d", marks[0], marks[1], marks[2]);
   return 0;


}