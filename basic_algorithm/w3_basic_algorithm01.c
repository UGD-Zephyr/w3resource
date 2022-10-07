/* Programmer: Per Stoor
 * Date: 2022-10-07
 * Last changed: 2022-10-07
 * Type of program: compute the sum of the two given integer values. 
 * If the two values are the same, then return triple their sum.
 */

#include <stdio.h> 
#include <stdlib.h> 

#define STRING_LENGTH 10

int sum_function(int function_sum_value1, int function_sum_value2);

int main(int argc, char *argv[]){ 

    int sum_value1;
    int sum_value2;
    int sum;
    int integer_buffer;
    char string_buffer[STRING_LENGTH];

        printf("Enter first number: ");
        fgets(string_buffer, STRING_LENGTH, stdin);
        sscanf(string_buffer, "%d", &integer_buffer);
        sum_value1 = integer_buffer;

        printf("Enter second number: ");
        fgets(string_buffer, STRING_LENGTH, stdin);
        sscanf(string_buffer, "%d", &integer_buffer);
        sum_value2 = integer_buffer;

        sum = sum_function(sum_value1, sum_value2);

        printf("The sum is: %d\n", sum);

return 0;
} 

int sum_function(int sum_value1, int sum_value2){
    
    if(sum_value1 != sum_value2){
        
        return (sum_value1 + sum_value2);
    }
    else{

        return ((sum_value1 + sum_value2) * 3 ); 
    }
}
