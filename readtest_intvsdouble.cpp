// need to know what the type of the value is to read it correctly
#include <iostream>
#include <fstream>

int main() {
    int id;
    double grade; // if indicate as int grade, it will read the integer part of the double value 
    // and ignore the decimal part, resulting in an incorrect value being read into the variable.
    // and the array after it, can be incorrectly read as well, because the reading process will be disrupted by the incorrect value of grade, leading to a mismatch in the expected format of the input data.
    int numbers[10];

    std::ifstream inFile("output.txt");
    if (!inFile) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    inFile >> id;
    inFile >> grade;

    for (int i = 0; i < 10; ++i) {
        inFile >> numbers[i];
    }

    inFile.close();

    std::cout << "ID: " << id << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Numbers: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}