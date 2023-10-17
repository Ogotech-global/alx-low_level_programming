#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

char generateRandomChar() {
	/* Generate a random character from '!' to '~' in ASCII */
    return (char) ('!' + rand() % 94);
}

int main(void)

	{
	srand(time(0)); /* Seed the random number generator */

	char password[PASSWORD_LENGTH + 1];/* +1 for null terminator*/

    /* Generate random characters for the password */
	for (int i = 0; i < PASSWORD_LENGTH; i++) 
	{
	password[i] = generateRandomChar();
	}

	password[PASSWORD_LENGTH] = '\0'; // Add null terminator

	printf("%s\n", password);

	return 0;
}

