/* Programmer: Per Stoor
 * Date: 2021-09-10
 * Last Changed: 2021-09-10
 * Type of program: String practice.
 * */

#include <stdio.h>
#define STRING_MAX_LENGTH 30

int main (int argc, char *argv[]){

char user_inputted_string[STRING_MAX_LENGTH];

	printf("Enter string: ");
	fgets (user_inputted_string, STRING_MAX_LENGTH, stdin);

	printf("The string you entered is: %s", user_inputted_string);

return 0;
}

/*
 * There is no need for the second char array and sscanf in this case.
 * We are simply reading a string and fgets will be enough. 
 *
 * I am trying to avoid using scanf() ever again...
 *
 *
 * */
