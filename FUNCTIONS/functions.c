#include <stdio.h>
#include <math.h> // adds math functions

// FUNCTION DECLARATION  forr code optimization, it is recommended to separate the declaration and the definition of the function.
int add(int, int);

// v - void means that the function has't return value
void printChar(char);

int factorial(int);

int main() { //function to execute code
    printf("%d\n", add(4, 5));
    printf("%d", factorial(3));
    printf("%d", floor(sqrt(factorial(pow(6, 6))))); //sqrt provided by <math.h>, ceil - rounds upwards, floor - downwards
    return 0;
}

// FUNCTION DEFINITION goes under main for better readability
int add(int a, int b){
    int sum = a + b;
    return sum;
}

void printChar(char a){
    printf("%c\n", a);
}

//C supports RECURSION
int factorial(int a){
    if(a == 1){
        return 1;
    } else {
        return a + factorial(a - 1);
    }
}