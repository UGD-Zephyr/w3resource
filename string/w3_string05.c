/* Programmer: Per Stoor
 * Date: 2021-09-13
 * Last changed: 2021-09-14
 * Type of program: Counting amount of words in user inputted strings.
 * */

#include <stdio.h>

#define STRING_LENGTH 50

int main (int argc, char *argv[]){

int loop_counter1;
int amount_of_words;
char user_inputted_string[STRING_LENGTH];

amount_of_words = 1;

	printf("Enter string: ");
	fgets(user_inputted_string, STRING_LENGTH, stdin);

	for (loop_counter1 = 0; user_inputted_string[loop_counter1] != '\0'; loop_counter1++){
		if (user_inputted_string[loop_counter1] == ' '){
			amount_of_words++;
		}
	}

	printf("Amount of words: %d\n", amount_of_words);


return 0;
}

/* Notes:
 *
 * - My own way needs two loops, one to count characters to give as an endpoint for the for-loop.
 *   the other while-loop way uses only one loop. Much more convenient!
 * 
 * - I need to understand what line 45 and 47 means. 
 * 
 *		if (user_inputted_string[loop_counter2] == ' ')
 *
 * 	I was only able to get this to work with single parenthesis ''.
 *	when using "" the compiler gave me can't compare pointer to integer warnings.
 *
 *
 * 
 * 		while (loop_counter2 <=user_inputted_string[loop_counter2]){
 *
 * 	What does this expression even mean?!!! And why does it work?
 *
 * 	I looked it up at home. It seems to keep the loop going because 
 * 	loop_counter2 will never be larger than the right side.
 *
 * */
