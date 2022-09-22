/* Programmer: Per Stoor
 * Date: 2022-09-01
 * Last changed: 2022-09-01
 * Type of program: Pointer exercise nr.3
 * */

#include <stdio.h>
#include <stdlib.h>

void introduction_function();
void at_operator_function(int integer_variable, float long_variable, char character_variable);
void at_and_star_operator_function(int integer_variable, float long_variable, char character_variable);
void pointer_variable_function(int *integer_variable, float *long_variable, char *character_variable);
void pointer_operator_function(int *integer_variable, float *long_variable, char *character_variable);

int main(int argc, char *argv[]){

	int m;
	int *m_pointer;
	float fx;
	float *fx_pointer;
	char cht;
	char *cht_pointer;

		m = 300;
		m_pointer = &m;

		fx = 300.60006;
		fx_pointer = &fx;

		cht = 'z';
		cht_pointer = &cht;

		introduction_function();
		at_operator_function(m, fx, cht);
		at_and_star_operator_function(m, fx, cht);
		pointer_variable_function(m_pointer, fx_pointer, cht_pointer);
		pointer_operator_function(m_pointer, fx_pointer, cht_pointer);

return 0;
}

void introduction_function(){
	system("clear");
	printf("Pointer: Demonstrate the use of & and * operator:\n");
	printf("-----------------------------------------------------\n\n");
}
void at_operator_function(int integer_variable, float long_variable, char character_variable){
	printf("Using & operator:\n");
	printf("--------------------\n");
	printf("Address of m	=		%x\n", &integer_variable);
	printf("Address of fx	=		%x\n", &long_variable);
	printf("Address of cht	=		%x\n", &character_variable);
	printf("\n");
}
void at_and_star_operator_function(int integer_variable, float long_variable, char character_variable){
	printf("Using & and * operator:\n");
	printf("--------------------\n");
	printf("Value at address of m	=	%d\n", *(&integer_variable));
	printf("Value at address of fx	=	%f\n", *(&long_variable));
	printf("Value at address of cht	=	%c\n", *(&character_variable));
	printf("\n");
}

void pointer_variable_function(int *integer_variable, float *long_variable, char *character_variable){
	printf("Using only pointer variable:\n");
	printf("--------------------\n");
	printf("Address of m	=		%x\n", &integer_variable);
	printf("Address of fx	=		%x\n", &long_variable);
	printf("Address of cht	=		%x\n", &character_variable);
	printf("\n");
}

void pointer_operator_function(int *integer_variable, float *long_variable, char *character_variable){
	printf("Using only pointer operator:\n");
	printf("--------------------\n");
	printf("Value at address of m	=	%d\n", *integer_variable);
	printf("Value at address of fx	=	%f\n", *long_variable);
	printf("Value at address of cht	=	%c\n", *character_variable);
	printf("\n");
}
