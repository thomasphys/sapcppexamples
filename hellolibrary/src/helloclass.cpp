#include "helloclass.h"
#include <stdio.h>

//Define the constructor for hello class
hello::hello(char* _hellomessage){
	hellomessage = _hellomessage;
}

//Define the deconstructor for hello class
//This one is just empty.
hello::~hello(){
}
	
//print hello message.
void hello::sayhello(){
	printf("%s\n",hellomessage);
}

