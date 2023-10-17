#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * generateRandomChar - Generates a random printable ASCII character
 *
 * Return: A random printable ASCII character
 */
char generateRandomChar(void)
{
    return (char) ('!' + rand() % 94);
}

/**
 * main - Generates a random password
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    srand((unsigned int) time(NULL));

    char password[PASSWORD_LENGTH + 1];  /* +1 for null terminator */
    int i;

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = generateRandomChar();
    }

    password[PASSWORD_LENGTH] = '\0';  /* Add null terminator */

    printf("%s\n", password);

    return 0;
}

