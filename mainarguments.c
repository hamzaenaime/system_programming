#include <stdio.h>


int main(int argc,char * argv[],char * envp[]){
	printf("my name is %s and i've %d arguments which are : \n",argv[0],argc-1);
	int i;
	for(i=1;i<argc;i++){
		printf("%s\n",argv[i]);
	}
	printf("\nthis is what's inside envp table \n");
	for(i=0;i<argc;i++){
		printf("%s\n",envp[i]);
	}	
	return 0;
}

