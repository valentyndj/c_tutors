#include <stdio.h>
// int - stores whole numbers without decimals
// float - stores numbers with deciamls
// char - stores single characters ('a', 'B') - char surrounded with single 'guoutes'
// double -	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
// There are as well array and string
int number = 1;
float leftover = 12.55;
char myLetter = 'D';


int main() { 
//   printf(number); //dosnt work !!!
//                                 vv   - format specifier, required to output vars
  // printf("I was alaws a number: %d", number); 
  // printf(" in class"); 

  // printf("\nMy number is %f and my letter is %c", leftover, myLetter);

  //Type Conversion
  int x = 5;
  int y = 2;
  float sum = 5 / 2;

  printf("\n 5/2 with 'implicit' type conversion: %f", sum); // Outputs 2

  float expilicitSpecifiedType = (float) 5 / 2; 

  printf("\n 5/2 with 'explicit' type conversion: %f", expilicitSpecifiedType); // Outputs 2.5

  return 0; //!!! <--- Always add this
} 
