#include <stdlib.h>

int main(){
	char* argv[]={"cp","system","system1",NULL};
	char* envp[]={"PATH=/bin",NULL};
	execve("/bin/cp",argv,envp);
	return 0;
}
