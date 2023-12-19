#include <stdio.h>


int main() {
  //v         v - v          v SYNTAX FOR ARRAY
  int myArray[] = {25, 10, 25};
  printf("%d\n", myArray[0]);


  //You can set a size of the array
  int mySetSizeArray[4];
  mySetSizeArray[0] = 1;
  mySetSizeArray[1] = 1;
  mySetSizeArray[2] = 2;
  mySetSizeArray[3] = 3;
  mySetSizeArray[4] = 4; //Still works, so i don't understand why such construction needed
                         //Guide says "Using this method, you should know the size of the array, in order for the program to store enough memory."
  
  printf("First %d, and last %d", mySetSizeArray[0], mySetSizeArray[4]);
  return 0; //!!! <--- Always add this
} 
