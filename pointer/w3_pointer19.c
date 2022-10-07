/* Programmer: Per Stoor
 * Date: 2022-10-07
 * Last changed: 2022-10-07
 * Type of program: show a pointer to union.
 */

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

#define STRING_LENGTH 50

typedef union restaurant{

    struct {

        char fish_choice1[STRING_LENGTH];

    } fish_menu;

    struct {

        char meat_choice1[STRING_LENGTH];

    } meat_menu;

} restaurant;

int main(int argc, char *argv[]){ 

    int number_buffer;
    char string_buffer[STRING_LENGTH];
    char fish_choice[STRING_LENGTH] = {"Salmon"};
    char meat_choice[STRING_LENGTH] = {"Entrecote"};
    restaurant menu_type;

        number_buffer = 0;
        
        printf("1 or 2: ");
        fgets(string_buffer, STRING_LENGTH, stdin);
        sscanf(string_buffer, "%d", &number_buffer);
            if(number_buffer == 1){
                strcpy(menu_type.fish_menu.fish_choice1 , fish_choice);
                printf("Fish: %s\n", menu_type.fish_menu.fish_choice1); 
            }
            else if(number_buffer == 2){
                strcpy(menu_type.meat_menu.meat_choice1, meat_choice);
                printf("Meat %s\n", menu_type.meat_menu.meat_choice1);
            }
            else {
                printf("I should not be seen!");
                exit(EXIT_FAILURE);
            }
        

return 0;
} 
