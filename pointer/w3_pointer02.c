/* Programmer: Per Stoor
 * Date: 2022-09-01
 * Last changed: 2022-09-01
 * Type of program: Pointer exercise 2.
 * */

#include <stdio.h>
#include <stdlib.h>

void introduction_function();

int main(int argc, char *argv[]){

	int m;
	int *ab;

		m = 29; 
		introduction_function();
		printf("address of m:	%x\n", &m);
		printf("value of m:	%d\n\n", m);

		ab = &m;
		printf("Now ab is assigned with the address of m.\n");
		printf("Address of pointer ab:	%x\n", ab);
		printf("Contents of pointer ab:	%d\n\n", *ab);

		m = 34;
		printf("The value of m assigned to 34 now.\n");
		printf("Address of pointer ab:	%x\n", ab);
		printf("Contents of pointer ab:	%d\n\n", *ab);

		*ab = 7;
		printf("The pointer variable ab is assigned with the value 7 now.\n");
		printf("address of m:	%x\n", &m);
		printf("value of m:	%d\n\n", m);

return 0;
}

void introduction_function(){

	system("clear");
	printf("How to handle the pointers in the program:\n");
	printf("-----------------------------------------\n");
}
