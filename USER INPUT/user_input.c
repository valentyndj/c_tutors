#include <stdio.h>

int main() {
  int num;

  //GET SINGLE INPUT
  // printf("Type a number: \n");

  // //To get user input, you can use the scanf() function:
  // scanf("%d", &num);

  // printf("Your number is: %d", num);
  

  //GET MULTIPLE INPUTS

  // // Create an int and a char variable
  // int myNum;
  // char myChar;

  // // Ask the user to type a number AND a character
  // printf("Type a number AND a character and press enter: \n");

  // // Get and save the number AND character the user types
  // //     v   v   MAGIC IS HERE
  // scanf("%d %c", &myNum, &myChar);

  // // Print the number
  // printf("Your number is: %d\n", myNum);

  // // Print the character
  // printf("Your character is: %c\n", myChar);



  //GET STRINGS 
  char fullName[30];

  printf("Type your full name: \n");
  fgets(fullName, sizeof(fullName), stdin);

  printf("Hello %s", fullName);

  return 0; //!!! <--- Always add this
} 
