#include "helloclass.h"
#include <stdio.h>

hello::hello(char* _hellomessage){
	hellomessage = _hellomessage;
}

hello::~hello(){
}
	
void hello::sayhello(){
	printf("%s\n",hellomessage);
}

