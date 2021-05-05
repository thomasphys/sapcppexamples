#include <stdio.h>
#include "CSVVector.h" //include our csv vector.
#include <vector>

int main(int argc, char** argv){

	//make sure we at lease have a input file name.
	if(argc <2){
		printf("Please give a file to read\n");
		return 0;
	}

	//pass file name to our function and get vector of doubles.
	std::vector<double> values = GetVectorDouble(argv[1]);

	//compute mean.
	double mean = 0.;
	for(int i=0; i<values.size(); ++i){
		mean+=values[i];
	}
	mean /= (double)values.size();
	
	//print stuff.
	printf("File %s was read, it contained %d values with a mean of %f.\n",argv[1],(int)values.size(),mean);

	//If no output file is given, then end now.
	if(argc < 3){ 
		printf("No output file given.\n");
		return 0;
	}

	//We have an output file, so create duplicate file. 
	SaveVectorDouble(argv[2],values);

	return 0;
}
