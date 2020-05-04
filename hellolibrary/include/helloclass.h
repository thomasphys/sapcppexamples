#ifndef _hellolib_
#define _hellolib_

#include <stdio.h>

class hello
{
	public:

	hello(char* _hellomessage);
	void sayhello();

	private:

	char* hellomessage;
	
};

#endif
