#include<stdio.h>

int main()
{
  int x=5;
  int *p; //pointer
  p= &x; // p points to x
  *p=6; //dereferencing

  int **q; //pointer to pointer
  q= &p; // q points to p

  int ***r;
  r=&q;

  printf("%d\n", *p); // value at the address stored in p
  printf("%d\n", *q); // value at the address stored in q
  printf("%d\n", **q); 
  printf("%d\n", **r);
  printf("%d\n", ***r);

  ***r= 10;
  printf("x = %d \n", x);

  **q= *p+2;
  printf("x=%d \n", x);
}