//linear search 
//INPUT- 4 1 2 3 4 3
//OUTPUT - 3


#include <stdio.h>
int main()
{
  int array[100], search, c, n;

  printf("Enter number of elements in the array, array elements and the key");
  scanf("%d", &n);

  
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

 
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      //printf("%d is present at location %d", search, c+1);
      printf("%d",c+1);
      break;
    }
  }
  if (c == n)
    printf("%d is not present in the array", );

  return 0;
}
