#include<stdio.h>

int main()
{
    
    int A[]={5,6,7,11,13};
    /*
    printf("%d \n", A); //prints address of starting byte of array
    printf("%d \n", &A[0]); // address of specified byte
    printf("%d \n", A[0]); // value
    printf("%d \n", *A);   // value
    printf("%d \n", (A+1)); // address of 2nd byte in the arrya
    // address: &A[1] or (A+1)
    // value:   A[1]  or *(A+1) 

    int i;
    for (i=0; i<5;i++)
    {
        printf("Address = %d \n", &A[i]);
        printf("Address = %d \n", A+i);
        printf("Value  = %d \n", A[i]);
        printf("Value  = %d \n", *(A+i));

    } */
    int *p;
    p=A; //assigning array to a pointer
    printf(" %d \n", p);
    printf(" %d \n", *p);
    //A++; // Invalid
    p++; // valid
    printf(" %d \n", p);
    printf(" %d \n", *p);

}



