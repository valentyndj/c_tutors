#include <stdio.h>

int main(){ 
    //Memory Address
    int myAge = 43;
    //           V - & is a memorry adress operator
    // printf("%p", &myAge);

    //Creating Pointers 
    // V - is an operator that indicates that the variable is a pointer variable. 
    int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge
    // A pointer is a variable that stores the memory address of another variable as its value.

    //A pointer HAS to match the type of the variable you're working with (int in our example).
    printf("Memory pointer - %p\n", ptr);


    //READING from points 
    //             v  - to read value stored at the memoru point use * - DIFFERENCE OPERATOR !!!!!!!!!!!!!!!!!!!!!!
    printf("Value inside the memory at it the pointer - %d\n", *ptr);

    return 0;
}

//Notes on Pointers
// Pointers are one of the things that make C stand out from other programming languages, like Python and Java.
// They are important in C, because they allow us to manipulate the data in the computer's memory. This can reduce the code and improve the performance. If you are familiar with data structures like lists, trees and graphs, you should know that pointers are especially useful for implementing those. And sometimes you even have to use pointers, for example when working with files.
// But be careful; pointers must be handled with care, since it is possible to damage data stored in other memory addresses.