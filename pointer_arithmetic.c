#include<stdio.h>

int main()
{
  int a = 10;
  int *p;
  p= &a;

  printf(" Address stored in p is %d \n", p); // ex: 2002
  printf(" Size of integer data type is %d in bytes \n", sizeof(int)); // this should be 4 bytes
  printf(" Address of p+1 is %d \n", p+1); // this should be 2006
  printf(" Address of p+1 is %d \n", p+2); // this should be 2010
  /* if you want to know the value at
   the address pointed by p+1
   */

  printf(" value at address p+1 is %d\n", *(p+1)); //since we have not assigned anything the output should be Garbage value 
  printf(" value at address p+2 is %d\n", *(p+2));
}