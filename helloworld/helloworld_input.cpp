#include <iostream> //for cout
#include <stdlib.h> // for atoi

//argc is the number of inputs that were provided to the program
//please note that the first input is the name of the program itself.
//argv is an array of the char* that are the inputs. 
//We must convert them into the desired types.
int main(int argc, char** argv){
	//Check that we have at least one additional input.
	if(argc < 2){
		std::cout << "No arguments given becuse first argument is program name." << std::endl;
		return 0;
	}
	//Convert that input into an int. 
	int nprints = atoi(argv[1]); //change char* into an integer

	//for loop, oh boy!
	for(int i=0; i<nprints; ++i){
		if(i<nprints-1){
			std::cout << "Print me baby one more time." << std::endl;
		}else{
			std::cout << "Last print." << std::endl;
		}
	}

	return 0;
}
