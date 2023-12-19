#include <stdio.h>
#include <string.h> //adds string functions

// Create a structure called structure
struct structure { //is almost an object
    int age;
    char fName[30];
};
    

int main(){
    // Create a structure variable 
    // struct structure student;

    // Assign values to the structure variable of 
    // student.age = 18;
    // student.fName = 'Ryzha Mavpa'; YOU CAN"T ASSIGN STRING DIRECTLY TO THE STRUCTURE dosn't work error: assignment to expression with array type

    //ASSIGN STRING TO THE STRUCTURE PROPERTY
    // strcpy(student.fName, "Ryzha Mavpa");
    
    //OR ASSIGN ALL AT ONCE
    struct structure student = {18, "Ryzha Mavpa"}; // ! OUR CHOICE


    //COPY STRUCTURE
    struct structure secondStudent = student;
    //MODIFY
    secondStudent.age = 17; 
    strcpy(secondStudent.fName, "Devyat' chi Visim");

    printf("%s is %d yeas old\n", student.fName, student.age);
    printf("%s is %d yeas old", secondStudent.fName, secondStudent.age);
    
    return 0;
}
// Create a structure called myStructure
