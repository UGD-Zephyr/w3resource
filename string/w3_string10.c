/* Programmer: Per Stoor
 * Date: 2022-03-08
 * Last changed: 2022-03-25
 * Type of program: W3 website, string exercises. find maximum occurring character in a string
 *
 * The below program is copied from https://www.w3resource.com/c-programming-exercises/string/c-string-exercise-10.php
 * I can't understand how this works so I'm just trying to understand.
 * 
 * */

#include <stdio.h>
#define STRING_LENGHT 50
#define CHARACTER_MAX 255

int main (int argc, char *argv[]){

char user_inputted_string[STRING_LENGTH];
int character_frequency[CHARACTER_MAX];
int loop_counter1;
int max;
int ascii;

	printf("Enter string: ");
	fgets(user_inputted_string, STRING_LENGTH, stdin);

	/*
	 * For-loop to set all character frequencies to zero (0)
	 * */
	for (loop_counter1 = 0; loop_counter1 < CHARACTER_MAX; loop_counter1++){
		character_frequency[loop_counter1] = 0; 
	}

	loop_counter1 = 0;
	while (user_inputted_string[loop_counter1] != '\0'){
		ascii = user_inputted_string[loop_counter1];
		character_frequency[ascii] += 1;
		loop_counter1++;
	}
	
return 0;
}
