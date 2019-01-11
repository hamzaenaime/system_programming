#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(){
	fork();
	printf("hello world\n");
	wait(0); // means wait until fork() == 0 (processus child terminate)
	return 0;
}
