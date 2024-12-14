#include<stdio.h>

int sum_of_elements(int A[], int size) //this function takes integer Array as an argument
{
    int i, sum=0;
    for(i=0; i< size; i++)
    {
        sum= sum + A[i];
    }
    
    return sum;

}

int main()
{
    int a[]= {5,6,7,13,26};
    int size= sizeof(a)/ sizeof(a[0]);
    int total= sum_of_elements(a, size);
    printf("Sum of elements in the array %d", total);
    
}

