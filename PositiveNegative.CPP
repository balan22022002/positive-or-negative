#include <stdio.h>
#include <conio.h>
int main ()
{
clrscr();
int n;
printf("\n Enter the number ");
scanf("%d",&n);
if(n<0)
printf("\n The number is negative.");
else if(n>0)
printf("\n The number is positive.");
else
printf("\n The number is equal to zero.");
system ("PAUSE");
return 0;
}