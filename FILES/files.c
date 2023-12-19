#include <stdio.h>

int main()
{
    FILE *fptr;
    // CREATE
    // create a file          v - mode write
    //  fptr = fopen("file.txt", "w");

    // Close the file
    // fclose(fptr);

    // //WRITE
    // // Open a file in writing mode
    // fptr = fopen("file.txt", "w");

    // //Write to a file
    // fprintf(fptr, "Ty hto takiy??");
    // //Note: If you write to a file that already exists, the old content is deleted, and the new content is inserted. This is important to know, as you might accidentally erase existing content.

    // // Close the file
    // fclose(fptr);

    // APPEND                  v - append mode
    //  fptr = fopen("file.txt", "a"); //Note: Just like with the w mode; if the file does not exist, the a mode will create a new file with the "appended" content.

    // fprintf(fptr, "\nYa ryzha mapva");

    // fclose(fptr);

    // READ                    v - read mode
    fptr = fopen("file.txt", "r");

    char contentOfTheFile[100]; // We need to create a string that should be big enough to store the content of the file.

    fgets(contentOfTheFile, 100, fptr); // In order to read the content of filename.txt, we can use the fgets() function.
    // The first parameter specifies where to store the file content, which will be in the myString array we just created.
    //  The second parameter specifies the maximum size of data to read, which should match the size of myString (100).
    //  The third parameter requires a file pointer that is used to read the file (fptr in our example).

    printf("%s", contentOfTheFile); // prints only the first line of content

    if(fptr != NULL){ //check that the file does exist
        // Read the content and print it
        while (fgets(contentOfTheFile, 100, fptr))
        { // prints all content
            printf("%s", contentOfTheFile);
        }
    }

    fclose(fptr);

    //GOOD PRACTICE

    // Open a file in read mode
    fptr = fopen("loremipsum.txt", "r");

    // Print some text if the file does not exist
    if(fptr == NULL) {
    printf("\n Not able to open the loremipsum.txt.");
    }

    // Close the file
    fclose(fptr);

    return 0;
}