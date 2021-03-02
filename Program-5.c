//INPUT - 4 1 2 3 4
//OUTPUT - Sum of elements=10


#include <stdio.h>
 
#include <stdio.h>
 
int main()
{
   int a[10],i,sum=0,n;
   printf("Enter number of elements in array and the array elements");
   scanf("%d", &n);
   printf("enter the elements of the array");
   for (i = 0; i < n; i++)
   {
     scanf("%d", &a[i]);
   }
  // printf("Enter %d elements\n", n);
 
   for (i = 0; i < n; i++)
   {
      sum=sum+a[i]; 
   }
 printf("Sum of elements=%d",sum);
 
  return 0;
}
