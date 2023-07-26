#include "main.h"

/**
 * my_exit - function to work like exit
 * @user_command: test mode
 * Return: 0
 */

int my_exit(char *user_command)
{
	char *try[] = {"./a", NULL};

	free(user_command);
	execv(try[0], try);
	return (0);
}
