/* Programmer: Per Stoor
 * Date: 2021-09-10
 * Last Changed: 2021-09-10
 * Type of program: String practice.
 * */

#include <stdio.h>

#define STRING_MAX_LENGTH 30

int main (int argc, char *argv[]){

int loop_counter1;
char user_inputted_string[STRING_MAX_LENGTH];

	printf("Write some text: ");
	fgets(user_inputted_string, STRING_MAX_LENGTH, stdin);
	
	/*
	loop_counter1 = 0;
	while (user_inputted_string[loop_counter1] != '\0'){
		printf("%c ", user_inputted_string[loop_counter1]);
		loop_counter1++;
	}	
	*/

	for (loop_counter1 = 0; user_inputted_string[loop_counter1] != '\0'; loop_counter1++){
	
		printf("%c ", user_inputted_string[loop_counter1]);
	}

return 0;
}

/*
 * Do I HAVE TO USE a while-loop? is it possible to do this with a for-loop?
 *
 * Update: You CAN DO IT with a for-loop! xD
 * */
