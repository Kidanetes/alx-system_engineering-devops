#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int infinite_while(void);

/**
 * main - entry point
 *
 * Return: 0(success)
 */
int main(void)
{
	pid_t pid;
	int i = 0;

	while (i < 5)
	{
		pid = fork();
		if (pid == 0)
			sleep(10);
		else if (pid > 0)
		{
			printf("Zombie process created, PID: %d\n", pid);
			i++;
		}
		else
			exit(0);
	}

	infinite_while();
	return (0);

}
/**
 * infinite_while - infinite while
 *
 * Return: (0)
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
