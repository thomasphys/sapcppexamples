#include <iostream>
#include <stdlib.h>

int main(int argc, char** argv){

	if(argc < 2){
		std::cout << "No arguments given becuse first argument is program name." << std::endl;
		return 0;
	}

	int nprints = atoi(argv[1]); //change char* into an integer

	for(int i=0; i<nprints; ++i){
		if(i<nprints-1){
			std::cout << "Print me baby one more time." << std::endl;
		}else{
			std::cout << "Last print." << std::endl;
		}
	}

	return 0;
}
