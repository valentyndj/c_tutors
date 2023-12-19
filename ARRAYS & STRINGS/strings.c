#include <stdio.h>


int main() {
  //SAME SINTAX AS FOR AN ARRAY, BUT
  //V char-type      V double quotes V   only, single quotes are for chars
  char greetings[] = "Hello World!";

  //       v - string formatter
  printf("%s\n", greetings);

  // Since strings are actually arrays in C, you can access a string by referring to its index number inside square brackets [].

  //      v - char formatter
  printf("%c\n", greetings[0]);

  //Loop and modify works as always for strings

  //Another Way Of Creating Strings                                                       
  //  Why do we include the \0 character at the end? This is known as the "null terminating character", and must be included when creating strings using this //    method. It tells C that this is the end of the string.                                    v - ?
  char anotherGreetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  printf("%s", anotherGreetings);

  return 0; //!!! <--- Always add this
} 
