#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
	printf("before fork\n");
	int f=fork();
	if(f==0){
		printf("child pid : %d\n",getpid());
	}else{
		printf("t_pid=%d\n\nparent pid : %d\n",f,getpid());
		wait(0);
	}
	return 0;
}
