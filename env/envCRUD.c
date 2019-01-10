
#include <stdlib.h>
#include <stdio.h>

int main(){
	// int putenv(const char* String);
	// int setenv(const char* name,const char* value ,int overwrite); 1=ecraser 0= non
	// char * getenv(const char* name);
	// void unsetenv(const char* name);
	
	printf("%s\n",getenv("HOME"));
	
	return 0;
}
