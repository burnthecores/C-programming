/*Character arrays and pointers
 String : group of characters, and to store a string, size of  character array should be greater
 than size of string+1 (i.e the no. of characters in the string + null character'\0')
 eg: "Revanth", "Om namah Shivaya" */ 

 #include<stdio.h>
 #include<string.h>

 void print(char c[])
 {
    int i=0;
    while (c[i]!= '\0')
    {
        printf("%c", c[i]);
        i++;
    }
    printf("\n");


 }

 int main()
 {
   /* char c[15];
    c[0]= 'r';
    c[1]= 'a';
    c[2]= 'v';
    c[3]= 'i';
    c[4]= '\0';
    printf("%s", c); 
    /*c[4] there should be an error & if we dont mention null termination 
    then also it would give error, for size of c[] greater than or eqaul to 5, then output 
    would be correct 

    char c[20]= "Ravi"; // this notation always includes null termination, this has to happen in one line
    // char c[20]= {'R', 'a', 'v', 'i', '\0'}; this also works
    printf(" Size in bytes= %d \n", sizeof(c));
    int len = strlen(c);
    printf(" Length = %d \n", len);
    //2. Arrays and pointers are different types used in similar manner

    char c1[20]= "Hello";
    char *c2;
    c2= c1; //vaid
    // here we are assigning to c2 pointer the starting address of the charecter arrat c1 i.e address of 'H'
    printf(" %c \n", c2[1]);
    printf(" %c \n", *c2);
    printf(" %c \n", c2[0]);
    c2[0]= 'A';
    // c2[i] is nothing but *(c2 + i)
    printf(" %s \n", c1);
    printf(" %s \n", c2);
    printf(" %d \n", c2);

    // c1=c2 is NOT VALID 
    // C1 = C1+1 is NOT VALID
    // C2++ IS VALID

    // 3. ARRAYS are always passed as input to a FUNCTION BY REFERENCE 
    // i.e is the Base address of the Array is passed to a pointer variable

    */
    // 3. ARRAYS are always passed as input to a FUNCTION BY REFERENCE 
    // i.e is the Base address of the Array is passed to a pointer variable

    char c[20]= "Hello";
    print(c); // calling the print function defined above

 }

 