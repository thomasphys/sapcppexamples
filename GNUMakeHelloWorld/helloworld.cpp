#include <stdio.h>

int main(int argc, char** argv){

	printf("Yup, another hello world....\n");
	printf("%d input values were given\n",argc-1);
	//first argv is the name of the program;
	for(int i=1; i<argc; ++i){
		printf("	%s\n",argv[i]);
	}
	return 0;
}
