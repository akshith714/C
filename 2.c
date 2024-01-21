#include <stdio.h>
void main()
{
   int a,b,*x,*y;
   printf("Enter a and b value:");   
   scanf("%d %d", &a, &b);
   *x = &a;
   *y = &b;
   printf("Press enter to result______\n");
   printf("\t 5d is stored at %u \n\n\t%d is stored at %u",a,*x,b,*y);
   return 0;
   
}