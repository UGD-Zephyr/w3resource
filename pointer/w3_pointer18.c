/* Programmer: Per Stoor
 * Date: 2022-10-03
 * Last changed: 2022-10-05
 * Type of program: show the usage of pointer to structure.
 */

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

#define STRING_LENGTH 30

typedef struct person{

    int person_age;
    char person_name[STRING_LENGTH];

} person;

int main(int argc, char *argv[]){ 

    char user_inputted_string[STRING_LENGTH];
    person person1;
    person *person_pointer;

        person_pointer = &person1;
        printf("Enter name: ");
        fgets(user_inputted_string, STRING_LENGTH, stdin);
        strcpy(person_pointer->person_name, user_inputted_string);

        printf("Enter age: ");
        fgets(user_inputted_string, STRING_LENGTH, stdin);
        sscanf(user_inputted_string, "%d", &person_pointer->person_age);

        printf("\n");
        printf("Inputted name:  %s", ((*person_pointer).person_name));
        printf("Inputted age:   %d\n", ((*person_pointer).person_age));

return 0;
} 
