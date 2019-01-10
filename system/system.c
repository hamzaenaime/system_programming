#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int sys = system("ls");
	printf("returned value from system is : %d\n",sys);
	return 0;
}
