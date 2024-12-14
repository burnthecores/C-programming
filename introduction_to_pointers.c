/* Introduction to pointers:
1. we must understand how various data types or variables are stired in computer's memory?
2. Memory in comtext of program excecution is RAM. typically each BYTE of the memory has an ADDRESS(ex: Byte address)
3. Memory allocation is dependent on DATA TYPE & COMPILER
4. COMPUTER has an internal structure called LUT(Look Up Table), where it stores the Variable,its Data type and its Address
5. Can we know the address and operate upon the address of the Program? Yes using Pointers in C/C++
POINTER: Variable that stores the address of another variable
*/

#include <stdio.h>

int main()
{
 int a;
 int *p;
 char c;
 char *p0;
 double d;
 double *p1;

 a=10;
 p=&a;

 printf("%d\n", p);
 printf("%d\n", *p); // *p - value at the address pointed by p
 printf("%d\n", &a);

 *p = 12; // DEREFERENCING (using the pointer to modify the value )
 printf("%d\n", a);

 int b=20;
 printf("%d\n", b);
 printf("%d\n", &b);
 *p= b; // Will the address in p change to point to b?? NO
 //p = &b; //this will make the pointer p point to b
 printf(" Address stored in p is %d\n", p);
 printf(" Value at p %d\n", *p);
}
