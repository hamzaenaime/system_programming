#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>

int main(int argc , char *argv[]){
	
	int fd=open(argv[1],O_WRONLY,S_IRWXU);
	while(eof(fd)){
		char c;
		printf("%c",read(fd,&c,sizeof(char)));
	}
	close(fd);
	return 0;
}
