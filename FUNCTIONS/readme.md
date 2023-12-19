A function consist of two parts:

Declaration: the function's name, return type, and parameters (if any)
Definition: the body of the function (code to be executed)

void myFunction() { // declaration
  // the body of the function (definition)
}

For code optimization, it is recommended to separate the declaration and the definition of the function.

You will often see C programs that have function declaration above main(), and function definition below main(). This will make the code better organized and easier to read:

// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  printf("I just got executed!");
}