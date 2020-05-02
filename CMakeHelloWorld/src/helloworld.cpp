#include <stdio.h>
#include <cstdlib>
#include "hellofunction.h"

int main(int argc, char** argv){

	printf("Yup, another hello world....\n");
	printf("%d input values were given\n",argc-1);
	//first argv is the name of the program;
	for(int i=1; i<argc; ++i){
		printf("	%s\n",argv[i]);
	}

	//convert to integers
	if(argc < 4){
		printf("not enough input parameters for next demonstration\n");
		return 0;
	}
	int value1 = std::atoi(argv[1]);
	int value2 = std::atoi(argv[2]);
	int* value3 = new int(std::atoi(argv[3]));

	int value1returned = hellofunction(value1,value2,value3);

	printf("After hellofunction, value 1 is %d\n",value1);

        printf("After hellofunction, value 2 is %d\n",value2);

        printf("After hellofunction, value 3 was a pointer to location %p where now value %d is located.\n",value3,*value3);

	printf("The hellofunction returned %d\n",value1returned);

	return 0;
}
