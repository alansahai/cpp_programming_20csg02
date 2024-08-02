#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>

void cleanSpaces(const std::string& inputFileName, const std::string& outputFileName) {
    std::ifstream inputFile(inputFileName);
    std::ofstream outputFile(outputFileName);

    if (!inputFile.is_open() || !outputFile.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return;
    }

    std::stringstream buffer;
    buffer << inputFile.rdbuf();  // Read the whole file into the buffer

    std::string content = buffer.str();
    std::string cleanedContent;

    bool inWhitespace = false;
    for (char ch : content) {
        if (isspace(static_cast<unsigned char>(ch))) {
            if (!inWhitespace) {
                cleanedContent += ' ';
                inWhitespace = true;
            }
        } else {
            cleanedContent += ch;
            inWhitespace = false;
        }
    }

    outputFile << cleanedContent;

    inputFile.close();
    outputFile.close();
}

int main() {
    std::string inputFileName = "D:\B.E. CSE 23-27\1ST YEAR - SEMESTER 2\20CSG02 - PROGRAMMING IN C++ LABORATORY\Program Files\009\input.txt";
    std::string outputFileName = "D:\B.E. CSE 23-27\1ST YEAR - SEMESTER 2\20CSG02 - PROGRAMMING IN C++ LABORATORY\Program Files\009\output.txt";

    cleanSpaces(inputFileName, outputFileName);

    std::cout << "Processing complete. Check the output file: " << outputFileName << std::endl;

    return 0;
}
