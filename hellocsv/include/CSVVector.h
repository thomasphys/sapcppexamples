#include <vector>
#include <string>
#include <cassert>
#include <fstream>
#include <sstream>
#include <iostream>

//Opens a CSV file, and puts values into an array.
std::vector<double> GetVectorDouble(char* filename){
    std::ifstream in;
    in.open(filename, std::ifstream::in);
    // Check if object is valid
    if(!in){
        std::cerr << "Cannot open the File : "<<filename<<std::endl;
        return std::vector<double>(0,0.0);
    }
	std::string str;
    std::vector<double> array;
    //While file has lines, get them.
    while(std::getline(in, str)){

        //replace commas with blank spaces.
    	std::replace(str.begin(),str.end(),',',' ');

        //use a string stream to take the individual strings 
        //and read them in as doubles.
    	std::stringstream ss(str);
    	double temp;
        //while there are number add them to vector.
    	while (ss >> temp){
      		array.push_back(temp);
    	}
    }
    //close file.
    in.close();
    //return our vector.
    return array;
}

//Save vector of doubles to csv file.
void SaveVectorDouble(char* filename, std::vector<double> values){
    //open output file.
    std::ofstream out;
    out.open(filename,std::ofstream::out);

    //loop over and put values into file
    //separated by comma.
    int vecsize = values.size();
    for(int i=0; i<vecsize; ++i){
        out << values[i] << ",";
    }
    //close file.
    out.close();
    
}

