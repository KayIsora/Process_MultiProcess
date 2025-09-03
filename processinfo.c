#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	printf("My Process ID: %d\n", getpid());
	printf("My Parent Process ID: %d\n", getppid());
	printf("Double check of pid's by executing 'ps -ef'\n");
	system("ps -ef | grep processinfo");
	return 0;
}