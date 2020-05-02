#ifndef _hello_function_
#define _hello_function_

#include <stdio.h>

int hellofunction(int value1, int &value2, int *value3){
	
	printf("input value 1 is %d, now setting it to %d\n",value1,value1+5);

	value1 += 5;//equal to value = value+5;

	printf("input value 2 is %d, now setting it to %d\n",value2,value2+value1);
	value2 += value1;

	printf("input value 3 was a pointer to location %p where value %d is located. Changing it to %d\n",value3,*value3,*value3+value2);
	*value3 += value2;

	return value1;
}

#endif
