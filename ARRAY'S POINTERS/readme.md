How Are Pointers Related to Arrays
Ok, so what's the relationship between pointers and arrays? Well, in C, the name of an array, is actually a pointer to the first element of the array.

Confused? Let's try to understand this better, and use our "memory address example" above again.

The memory address of the first element is the same as the name of the array:

Example
int myNumbers[4] = {25, 50, 75, 100};

// Get the memory address of the myNumbers array
printf("%p\n", myNumbers);

// Get the memory address of the first array element
printf("%p\n", &myNumbers[0]);
Result:

0x7ffe70f9d8f0
0x7ffe70f9d8f0