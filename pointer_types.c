// pointer types, void pointer, pointer artithmetic

/* 1. pointer variables are strongly typed i.e  varaibles of specific datatypes need
specific dataype pointer

2. there is a generic pointer called "void pointer"
 */

#include<stdio.h>

int main()
{ 
  int a= 1025;
  int *p;
  p= &a;
  
  printf("Size of Integer is %d bytes \n", sizeof(int));
  printf("Address = %d, Value = %d \n", p, *p);
  printf("Address = %d, Value = %d \n", p+1, *(p+1));
  
  char *p0;
  p0 = (char*)p ; //typecasting
  printf("Size of char is %d bytes \n", sizeof(char));
  printf("Address = %d, Value= %d \n", p0, *p0); //address should be same but value will be different from above
  printf("Address = %d, Value= %d \n", p0+1, *(p0+1)); // here the value should be 4, the answer lies in the Binary representation of 1025

} 