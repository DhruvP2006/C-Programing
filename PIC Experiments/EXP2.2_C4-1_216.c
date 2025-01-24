#include<stdio.h>

int main(){
  printf("Enter Marks of 5 Subjects: ");
  int sub1, sub2, sub3, sub4, sub5;
  scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
  int average = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
  switch (average/10){
    case 10:
    case 9:
      printf("Grade: A");
      break;
    case 8:
    printf("Grade: B");
      break;
    case 7:
    printf("Grade: C");
      break;  
    case 6:
    printf("Grade: D");
      break;
    case 5:
    printf("Grade: E");
      break;
    default:
    printf("Grade: F");
      break;
  }
  return 0;
}