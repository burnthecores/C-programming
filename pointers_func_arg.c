/* Pointers as functional arguments - Call by reference*/
/*
#include<stdio.h>

void increment(int a) // this variable a local variable to increment function
{
    a=a+1;
    printf("Address of variable a in increment = %d\n", &a);

}

int main()
{ 
    int a; //this is a local variable to main function
    a=10;
    increment(a); //call by value
    //printf("a= %d\n", a);
    printf("Address of variable a in main = %d\n", &a);
    // we can see in the out addresses of 'a' are differnt in two functions
    //the life of a local variable is till the fuction is being executed in the stack

} */


#include<stdio.h>

void increment( int *p) 
{
    *p = *p+1; // dereferencing and performing operations
}

int main()
{
    int a;
    a= 10;
    increment(&a); // call by reference
    printf("a= %d \n", a);

}