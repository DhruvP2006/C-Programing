#include<stdio.h>

int main(){
  int vowel = 0, consonants = 0;
  char str[100];
  printf("Enter a string: ");
  gets(str);
  int i;
  for(i = 0; str[i]!='\0'; i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
      vowel++;
    }
    else{
      if((int)str[i]<65 && (int)str[i]>90 && (int)str[i]>96 && (int)str[i]<123){}
      else{
      consonants++;
    }}
}

printf("The Number of Vowels in the String is: %d", vowel);
printf("\nThe Number of Vowels in the String is: %d", consonants);
  return 0;
}
