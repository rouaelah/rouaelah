#include <stdio.h>
#include <stdlib.h>



int main ()
{
    int a;
  printf ("\n Enter a number : ");
  scanf ("%d",&a);

  if (a >0){a=a;}else{a=0-a; }
  printf("\n The absolute value of a is : %d",a);
return 0;

}