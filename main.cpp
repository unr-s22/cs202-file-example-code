#include <iostream>
#include <fstream>
#include <sstream>


int main() {
    std::fstream mystream("input-file.txt", std::ios::in); // this could also be accomplished with ifstream
    std::ofstream output("output-file.txt");

    // read the file line by line
    std::string line;
    while(std::getline(mystream, line)){
        std::cout << line << std::endl;
        output << line << std::endl;
    }
    output << "End of the file" << std::endl;
    output.close();

    // this code rewinds the stream to the beginning
    mystream.clear();  // why is this needed?
    mystream.seekg(0);

    // print one word at a time
    std::string word;
    while(mystream >> word){
        std::cout << word << std::endl;
    }

    return 0;
}
