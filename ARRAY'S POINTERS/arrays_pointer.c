#include <stdio.h>

int main(){
    int array[4] = {10, 20, 30, 14};
    int i = 0;

    int arrayLength = sizeof(array) / sizeof(array[0]); // Here we get the full size of array in bytes and then divide it by size of the single element
    //or
    // int arrayLength = *(&array + 1) - array; 
    //not 
    // int arrayLength = sizeof(array) !!! THIS RETURN SIZE OF ARRAY IN BYTES
    // while(i < arrayLength){
    //     printf("%i, %p\n", array[i], &array[i]);
    //     i++;
    // }

    // Create an int variable
    // int myInt; //ints are usually size of 4 bytes

    // Get the memory size of an int
    //       v  - memory size operand
    // printf("%lu bytes", sizeof(myInt));

    // Get the memory address of the myNumbers array
    // printf("%p\n", array);

    // Get the memory address of the first array element
    // printf("%p\n", &array[0]);
    // THEY ARE THE SAME

    //             V V           V - & retuns memory adress of the element, + 1 increments adress to the next, * - get the value that stored by the adress
    // printf("%d\n", *(&array[1] + 1)); // array & array[0] - return same adress, call of array returns memory adress without & operator!

    int j;
    for (j = 0; j < 4; j++){
        printf("%d\n", *(array + j)); // array here represented by it's memory adress
    }

     return 0;
}