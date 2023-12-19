#include <stdio.h>

enum Names   
{
    DIMA,
    SASHA,
    VALIK
};

//Change Values
enum Ranks {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
};

int main(){ //An enum is a special type that represents a group of constants (unchangeable values).
    //To access enum variable inside functiom required
    enum Names mavpa; //The assigned value must be one of the items inside the enum (DIMA, SASHA or VALIK):
    mavpa = SASHA;
    // By default, the first item (DIMA) has the value 0, the second (SASHA) has the value 1, etc.
    // If you now try to print mavpa, it will output 1, which represents SASHA:


    // Print the enum variable
    printf("%d\n", mavpa);

    enum Ranks mavpaRank;
    mavpaRank = HIGH;
    printf("%d", mavpaRank);

    return 0;
}

//Why And When To Use Enums?
// Enums are used to give names to constants, which makes the code easier to read and maintain.

// Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.