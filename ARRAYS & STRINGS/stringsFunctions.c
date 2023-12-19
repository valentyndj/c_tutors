#include <stdio.h>
#include <string.h> // <- header file required to use sting functions

int main() {

  // length of the str
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  // printf("strlen - %d, sizeof = %d", strlen(alphabet), sizeof(alphabet));
  //               26           27   - beacause sizeof returns counts /0 as well;

  char sentence[50] = "";
  char mom[] = "Mom";
  char loveYou[] = "Love you, ";

  // Concatenate str2 to str1 (result is stored in str1)
  strcat(sentence, loveYou);
  strcat(sentence, mom);
  printf("%s\n", sentence);

  // To copy the value of one string to another, you can use the strcpy() function
  char senteceCopy[] = "";
  strcpy(senteceCopy, sentence);
  printf("%s AGAIN \n", senteceCopy);


// Compare Strings
// To compare two strings, you can use the strcmp() function.
// It returns 0 if the two strings are equal, otherwise a value that is not 0:

  char str1[] = "Hello";
  char str2[] = "Hello";
  char str3[] = "Hi";

  // Compare str1 and str2, and print the result
  printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

  // Compare str1 and str3, and print the result
  printf("%d\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)

  return 0; //!!! <--- Always add this
} 
