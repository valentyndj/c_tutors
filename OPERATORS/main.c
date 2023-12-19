#include <stdio.h>
#include <stdbool.h> //Booleans are not buit in and needed to be imported 

//ALL AS IN JS EXCEPT

//Sizeof Operator - retuns memory size (in bytes)
int main(){ 
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    // printf("%lu\n", sizeof(myInt)); //    4
    // printf("%lu\n", sizeof(myFloat)); //  4
    // printf("%lu\n", sizeof(myDouble)); // 8
    // printf("%lu\n", sizeof(myChar)); //   1


    bool isProgrammingFun = true;
    bool isFishTasty = false;


    //      vv - %d beacuse bools represented as integers 1||0
    printf("%d", isProgrammingFun);   // Returns 1 (true)
    printf("%d", isFishTasty);        // Returns 0 (false)
    return 0;
}

// Note that we use the %lu format specifer to print the result, instead of %d. It is because the compiler expects the sizeof operator to return 
// a long unsigned int (%lu), instead of int (%d). On some computers it might work with %d, but it is safer to use %lu.