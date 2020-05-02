#include <vector>
#include <string>
#include <cassert>
#include <fstream>
#include <sstream>
#include <iostream>

std::vector<double> GetVectorDouble(char* filename){
    	std::ifstream in;
        in.open(filename, std::ifstream::in);
    	// Check if object is valid
    	if(!in){
        	std::cerr << "Cannot open the File : "<<filename<<std::endl;

        	return std::vector<double>(0,0.0);
    	}
	std::string str;
    	std::getline(in, str);

    	std::replace(str.begin(),str.end(),',',' ');

    	std::vector<double> array;
    	std::stringstream ss(str);
    	double temp;
    	while (ss >> temp){
      		array.push_back(temp);
    	}
    	return array;
}

