#include <iostream>
#include <fstream>

int main() {
    int id = 101;
    double grade = 95.5;
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::ofstream outFile("output.txt");
    if (!outFile) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }

    outFile << "ID: " << id << std::endl;
    outFile << "Grade: " << grade << std::endl;
    outFile << "Numbers: ";
    for (int i = 0; i < 10; ++i) {
        outFile << numbers[i] << " ";
    }

    outFile.close();
    return 0;
}