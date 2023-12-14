//
// Created by mo018152 on 12/14/2023.
//

#include <iostream>
#include <fstream>

int main(){
    std::ifstream file("C:\\Users\\mo018152\\Desktop\\name.txt");  //Open a file named sample.txt

    if(!file){
        std::cerr << "File couldn't be opened." << std::endl;
        return  1; //Exit with an error code.
    }

    std::string line;
    while(getline(file,line)) {
        std::cout << line << std::endl; //Display each line
    }

    file.close(); //Close the file after reading
    return 0; //Successful exit
}
