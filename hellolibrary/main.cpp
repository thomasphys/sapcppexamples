#include <iostream>
#include "helloclass.h"

int main(int argc, char** argv){

	hello myhello = hello("#freebritney");
	myhello.publicmessage = "#AlwaysMoneyInTheBananaStand";
	myhello.sayhello();
	std::cout << myhello.publicmessage << std::endl;
	myhello.SetHelloMessage("#gonecrazy");
	myhello.sayhello();

	hello* pointerhello = new hello("#imaduck");
	pointerhello->publicmessage = "#uaduck";
	pointerhello->sayhello();
	std::cout << pointerhello->publicmessage << std::endl;
	pointerhello->SetHelloMessage("#weallducks");
	pointerhello->sayhello();

	delete pointerhello;

	pointerhello = &myhello;
	pointerhello->sayhello();

	return 0;
}