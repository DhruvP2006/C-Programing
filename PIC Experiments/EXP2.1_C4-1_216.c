#include<stdio.h>

int main(){
int currentYear, joinningYear, yearsServed, salary;
printf("Enter the year of joinning: ");
scanf("%d", &joinningYear);
printf("Enter the current year: ");
scanf("%d", &currentYear);
printf("Enter your salary: ");
scanf("%d", &salary);

yearsServed = currentYear - joinningYear;
if(yearsServed>=10){
  printf("Your Salary is: %d", salary+10000);
}
else{
  if(yearsServed<10 && yearsServed>=6){
  printf("Your Salary is: %d", salary+5000);
  }
  else{
    if(yearsServed<6 && yearsServed>=3){
  printf("Your Salary is: %d", salary+2500);
    }
    else{
      if(yearsServed<3){
  printf("Your Salary is: %d", salary+1000);
      }
    }
  }
}
return 0;
}