#include <stdio.h>
#include<math.h>

int main() {
  int day;
  printf("Enter day() : ");
  scanf("%s", &day);
  switch(day){
    case 'm':
    printf("Monday\n");
    break;
    case 't':
    printf("Tuesday\n");
    break;
    case 'w':
    printf("Wednesday\n");
    break;
    case 'T':
    printf("Thursday\n");
    break;
    case 'f':
    printf("Friday\n");
    break;
    case 's':
    printf("Saturday\n");
    break;
    case 'S':
    printf("Tuesday\n");
    break;
    default:
    printf("Not a valid Day\n");
    break;
  }
  return 0;
}

