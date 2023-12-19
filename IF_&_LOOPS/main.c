#include <stdio.h>
#include <stdbool.h>

int main(){
    int age = 0;
    const int permissionToVote = true ? 18 : 0; //this works as well

    // if(age>permissionToVote){
    //     printf("You can vote because you are adult");
    // } else if (age == permissionToVote) { 
    //     printf("%d? Congrat on your first vote", age);
    // }
    // else{
    //     printf("Wait another year");
    // }

    while (age < permissionToVote) // do/while & for works too, keywords 'break' and 'continue' as well
    {
        switch (age) //expression || var
        {
            case (18): //only constants (no expressions)
                printf("\n YOU ARE FULLY GROWN");
                break;
            case (10): 
                printf("\n Your first jubiley!");
                break;
            default:
                printf("\n %d years left untill you can vote", permissionToVote - age);
                break;
        }
        age++;
    }
    
    return 0;
}