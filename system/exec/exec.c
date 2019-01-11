
#include<stdlib.h>
#include<stdio.h>

int main(){
	printf("this will show up\n");
	execl("./system",NULL);
	printf("this won't show up\n");
	return 0;
}
