#ifndef _hellolib_ //this makes sure it is not defined multiple times.
#define _hellolib_

//make the class
class hello
{
	//everything under public is directly accessible. 
	public:
	hello(char* _hellomessage);
	~hello();
	void sayhello();
	//Setter for private hellomessage variable.
	void SetHelloMessage(char* _hellomessage){hellomessage = _hellomessage;}
	//Getter for private hellomessage variable.
	char* GetHelloMessage(){return hellomessage;}
	//public variable.
	char* publicmessage;

	//everything under private is only accessed by functions in hello class.
	private:
	char* hellomessage;
};
#endif
