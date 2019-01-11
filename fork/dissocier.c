#include<stdlib.h>
#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>

int main(){
	int f1 = fork();
	if(f1==0){
		int f2=fork();
		if(f2==0){
			printf("grandchild :\n pid=%d && ppid=%d\n\n",getpid(),getppid());
		}else {
			printf("child : \npid=%d && ppid=%d\n\n",getpid(),getppid());
			wait(0);
		}
		//exit(0);
	}else{
		printf("parent : \npid=%d && ppid=%d\n\n",getpid(),getppid());
		wait(0);
	}
	return 0;
}
