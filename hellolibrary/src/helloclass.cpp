#include "helloclass.h"

hello::hello(char* _hellomessage){
	hellomessage = _hellomessage;
}
	
void hello::sayhello(){
	printf("%s\n",hellomessage);
}

