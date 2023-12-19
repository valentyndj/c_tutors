An enum is a special type that represents a group of constants (unchangeable values).

To create an enum, use the enum keyword, followed by the name of the enum, and separate the enum items with a comma:

enum Level {
  LOW,
  MEDIUM,
  HIGH
};

Note that the last item does not need a comma.

It is not required to use uppercase, but often considered as good practice.

Enum is short for "enumerations", which means "specifically listed".

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//Why And When To Use Enums?
// Enums are used to give names to constants, which makes the code easier to read and maintain.

// Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.