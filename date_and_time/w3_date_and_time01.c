/* Programmer: Per Stoor
 * Date: 2022-08-12
 * Last changed: 2022-08-12
 * Type of program: Printing the current date and time
 * with time.h header file.
 * */

#include <stdio.h>
#include <time.h>

int main (){

	char *time_string;
	time_t time_variable;

		time_variable = time(NULL);
		time_string = ctime(&time_variable);
		printf("time_variable = %s\n", time_string);

return 0;
}
