#ifndef _hellolib_
#define _hellolib_

class hello
{
	public:
	hello(char* _hellomessage);
	~hello();
	void sayhello();
	void SetHelloMessage(char* _hellomessage){hellomessage = _hellomessage;}
	char* GetHelloMessage(){return hellomessage;}
	char* publicmessage;

	private:
	char* hellomessage;
};
#endif
