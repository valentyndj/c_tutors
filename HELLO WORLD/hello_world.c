#include <stdio.h> //<--library - it ley us work with input/output functions (printf() in this basket as well)
                   // header librarys add functionality to our code

// 1.                    v         v  - quotations marks matters! 
int notMain() { printf("By world!"); return 0;} // <-- will work!  

int main()
{
    printf("Hello World!\n"); // \n adds new line to the ouptut
    notMain(); // 2. As well as the order - you need to declare fn before fn call
    return 0;
}
 
              