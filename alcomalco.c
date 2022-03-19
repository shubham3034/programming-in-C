#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr, i;
  ptr=(void *)malloc(3*sizeof(void));
  printf("SHUBHAM\n");
  for (i = 0; i < 3; i++)
  {
    printf("enter the value no %d of this array\n", i);
    scanf("%d", &ptr[i]);
  }
  for (i = 0; i < 3; i++)
  {
    printf("the value at  %d of this array = %d \n", i, ptr[i]);
  }
  free(ptr);
}
