To get user input, you can use the scanf() function:

The scanf() function takes two arguments: the format specifier of the variable (%d in the example above) and the reference operator (&myNum), which stores the memory address of the variable.

Note: When working with strings in scanf(), you must specify the size of the string/array (we used a very high number, 30 in our example, but atleast then we are certain it will store enough characters for the first name), and you don't have to use the reference operator (&).

However, the scanf() function has some limitations: it considers space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words). For example:

Example
    char fullName[30];

    printf("Type your full name: \n");
    scanf("%s", &fullName);

    printf("Hello %s", fullName);

    // Type your full name: John Doe
    // Hello John
From the example above, you would expect the program to print "John Doe", but it only prints "John".

That's why, when working with strings, we often use the fgets() function to read a line of text. Note that you must include the following arguments: the name of the string variable, sizeof(string_name), and stdin:

    char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);

    // Type your full name: John Doe
    // Hello John Doe