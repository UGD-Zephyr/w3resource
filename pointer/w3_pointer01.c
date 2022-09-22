/* Programmer: Per Stoor
 * Date: 2022-08-30
 * Last changed: 2022-08-30
 * Type of program: pointer exercises.
 * */

#include <stdio.h>
#include <stdlib.h>

void introduction_function();

int main(int argc, char *argv[]){

	int m;
	int n;
	int o;
	int *z;
		
		m = 10;
		z = &m;

		introduction_function();

		printf("Here is m=%d, n and o are two integer variable and *z is an integer\n\n", m);
		printf("z stores the address of m = %x\n\n", z);
		printf("*z stores the value of m = %d\n\n", *z);
		printf("&m is the address of m = %x\n\n", &m);
		printf("&n stores the address of n = %x\n\n", &n);
		printf("&o stores the address of o = %x\n\n", &o);
		printf("&z stores the address of z = %x\n\n", &z);

return 0;
}

void introduction_function(){

	system("clear");
	printf("Pointer: Show the basic declaration of pointer:\n");
	printf("----------------------------\n");

}
