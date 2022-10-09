/* Programmer: Per Stoor
 * Date: 2022-10-09
 * Last changed: 2022-10-09
 * Type of program: Delete a specific line from a file.
 */

#include <stdio.h> 
#include <stdlib.h> 

#define STRING_LENGTH 10 
#define FILE_PATH "/mnt/c/wsl_programming/c/w3resource/file_handling/file_handling08_test.txt"

int main(int argc, char *argv[]){ 

    int loop_counter1;
    int line_number;
    int number_buffer;
    int amount_of_lines;
    char string_buffer[STRING_LENGTH];
    char file_character;
    FILE *file_pointer_read;
    FILE *file_pointer_write;

        file_pointer_read = fopen(FILE_PATH, "r");
            if(file_pointer_read == NULL){
                printf("Error opening file.\n");
                exit(EXIT_FAILURE);
            }

            amount_of_lines = 0;
            while((file_character = fgetc(file_pointer_read)) != EOF){
                if(file_character == '\n'){
                    amount_of_lines++;
                }
            }

        file_pointer_write = fopen(FILE_PATH, "w");
            if(file_pointer_write == NULL){
                printf("Error opening file.\n");
                exit(EXIT_FAILURE);
            }

        printf("Enter line number to delete: ");
        fgets(string_buffer, STRING_LENGTH, stdin);
        sscanf(string_buffer, "%d", &number_buffer);
        line_number = number_buffer;

            for(loop_counter1 = 1; loop_counter1 <= amount_of_lines; loop_counter1++){
                if(line_number == amount_of_lines){
                    amount_of_lines--;
                }
                if(loop_counter1 == line_number){
                    loop_counter1++;
                }
                fprintf(file_pointer_write, "test line %d\n", loop_counter1);
            }

        fclose(file_pointer_read);
        fclose(file_pointer_write);

return 0;
} 
