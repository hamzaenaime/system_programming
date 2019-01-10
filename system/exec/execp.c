#include<stdlib.h>

int main(){
	execlp("ls","ls","*.c",NULL);
	return 0;
}
