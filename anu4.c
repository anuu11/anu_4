#include<stdio.h>
void main()
{
char n;
printf("enter character");
scanf("%s",&n);


if((n>='a'&& n<='z')||(n>='A'&& n<='Z'))
printf("Alphabet");
else
printf("not alphabet");

}