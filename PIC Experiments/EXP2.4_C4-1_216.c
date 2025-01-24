#include<stdio.h>

int main( )
{
char ch ;
printf ( "Enter any of the alphabet a, b, or c " ) ;
scanf ( "%c", &ch ) ;
switch ( ch ){
case 'a' :
case 'A' :
printf ( "a as in ashar" ) ;
break ;
case 'b' :
case 'B' :
printf ( "b as in brain" ) ;
break ;
case 'c' :
case 'C' :
printf ( "c as in cookie" ) ;
break ;
default :
printf ( "wish you knew what are alphabets" ) ;
}}
