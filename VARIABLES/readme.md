In many other programming languages (like Python, Java, and C++), you would normally use a print function to display the value of a variable. 
However, this is not possible in C:

    int myNum = 15;
    printf(myNum);  // Nothing happens;

To output variables in C, you must get familiar with something called "format specifiers".

int myNum = 15;
printf("%d", myNum); //where "%d" 