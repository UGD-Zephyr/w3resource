/* Programmer: Per Stoor.
 * Date: 2021-09-12
 * Last changed: 2021-09-12
 * Type of program: String practice.
 * */

#include <stdio.h>

#define MAX_STRING_LENGTH 30

int main (int argc, char *argv[]){

int loop_counter1;
int loop_counter2;
int amount_of_characters_in_string;
char user_inputted_string[MAX_STRING_LENGTH];
char reversed_string[MAX_STRING_LENGTH];

amount_of_characters_in_string = 0;

	printf("Enter string: ");
	fgets(user_inputted_string, MAX_STRING_LENGTH, stdin);

	loop_counter1 = 0;
	while(user_inputted_string[loop_counter1] != '\0'){
		amount_of_characters_in_string = loop_counter1;
		loop_counter1++;
	}

	for (	loop_counter2 = (amount_of_characters_in_string - 1); 
		loop_counter2 >= 0; 
		loop_counter2--){
	
		printf("%c", user_inputted_string[loop_counter2]);
	}
	
	printf("\n");
return 0;
}
