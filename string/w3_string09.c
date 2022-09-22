/* Programmer: Per Stoor
 * Date: 2022-03-02
 * Last changed: 2022-03-08
 * Type of program: String exercise W3 site nr. 9 find total number of vowels and consonants in a string.
 *
 * Vowels are correct, consonants still count too high...
 *
 * */

#include <stdio.h>
#define STRING_LENGTH 50

int main (int argc, char *argv[]){

int vowel_counter1;
int consonant_counter1;
int loop_counter1;
char user_inputted_string[STRING_LENGTH];

	printf("Enter string:");
	fgets(user_inputted_string, STRING_LENGTH, stdin);

	vowel_counter1 = 0;
	consonant_counter1 = 0;

	for (loop_counter1 = 0; user_inputted_string[loop_counter1] != '\0'; loop_counter1++){

		if (	user_inputted_string[loop_counter1] == 65 || 
			user_inputted_string[loop_counter1] == 69 ||
			user_inputted_string[loop_counter1] == 73 ||
			user_inputted_string[loop_counter1] == 79 ||
			user_inputted_string[loop_counter1] == 85 ||
			user_inputted_string[loop_counter1] == 97 ||
			user_inputted_string[loop_counter1] == 101||
			user_inputted_string[loop_counter1] == 105||
			user_inputted_string[loop_counter1] == 111||
			user_inputted_string[loop_counter1] == 117) {

			vowel_counter1++;
			//printf("Vowel: %c\n", user_inputted_string[loop_counter1]);
		}
		// This else if statements still needs work...
		else if (	user_inputted_string[loop_counter1] == 66 || 
				user_inputted_string[loop_counter1] == 67 ||
				user_inputted_string[loop_counter1] == 68 ||
				user_inputted_string[loop_counter1] == 70 ||
				user_inputted_string[loop_counter1] == 71 ||
				user_inputted_string[loop_counter1] == 72 ||
				user_inputted_string[loop_counter1] == 74 ||
				user_inputted_string[loop_counter1] == 75 ||
				user_inputted_string[loop_counter1] == 76 ||
				user_inputted_string[loop_counter1] == 77 ||
				user_inputted_string[loop_counter1] == 78 ||
				user_inputted_string[loop_counter1] == 80 ||
				user_inputted_string[loop_counter1] == 81 ||
				user_inputted_string[loop_counter1] == 82 ||
				user_inputted_string[loop_counter1] == 83 ||
				user_inputted_string[loop_counter1] == 84 ||
				user_inputted_string[loop_counter1] == 86 ||
				user_inputted_string[loop_counter1] == 87 ||
				user_inputted_string[loop_counter1] == 88 ||
				user_inputted_string[loop_counter1] == 89 ||
				user_inputted_string[loop_counter1] == 90 ||
				user_inputted_string[loop_counter1] == 98 || 
				user_inputted_string[loop_counter1] == 99 ||
				user_inputted_string[loop_counter1] == 100 ||
				user_inputted_string[loop_counter1] == 102 ||
				user_inputted_string[loop_counter1] == 103 ||
				user_inputted_string[loop_counter1] == 104 ||
				user_inputted_string[loop_counter1] == 106 ||
				user_inputted_string[loop_counter1] == 107 ||
				user_inputted_string[loop_counter1] == 108 ||
				user_inputted_string[loop_counter1] == 109 ||
				user_inputted_string[loop_counter1] == 110 ||
				user_inputted_string[loop_counter1] == 112 ||
				user_inputted_string[loop_counter1] == 113 ||
				user_inputted_string[loop_counter1] == 114 ||
				user_inputted_string[loop_counter1] == 115 ||
				user_inputted_string[loop_counter1] == 116 ||
				user_inputted_string[loop_counter1] == 118 ||
				user_inputted_string[loop_counter1] == 119 ||
				user_inputted_string[loop_counter1] == 120 ||
				user_inputted_string[loop_counter1] == 121 ||
				user_inputted_string[loop_counter1] == 122 ||




				user_inputted_string[loop_counter1] == 117) {

				consonant_counter1++;
				//printf("Consonant: %c\n", user_inputted_string[loop_counter1]);
		}

	}

	printf("Amount of vowels: %d\n", vowel_counter1);
	printf("Amount of consonants: %d\n", consonant_counter1);

return 0;
}
