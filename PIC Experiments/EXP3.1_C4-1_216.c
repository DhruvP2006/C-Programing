#include<stdio.h>

int main(){
  int num, revNum, key;
  int digit = 0;
  printf("Enter a Number: ");
  scanf("%d", &num);
  key = num;
  int digitCount = 0;
  while(num){
    num = num/10;
    digitCount++;
  }

  num = key;

  while(digitCount>=0){
    digit += num%10;
    for(int i = digitCount-1; i>0; i--){
    digit *= 10;
    }
    revNum +=digit;
    digit=0;
    num /= 10;
    digitCount--;
  }

  if(key==revNum){
    printf("%d is a Palindrom Number", key);
  }
  else{
    printf("%d is not a Palindrom Number", key);
  }
  

  return 0;
}