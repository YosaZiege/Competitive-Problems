#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream file("input.txt");

    if (!file.is_open()) {
        std::cerr << "Error: could not open file.\n";
        return 1;
    }

    std::string line;
    long long sum = 0;

    while (std::getline(file, line)) {
        int firstMaxVal = -1, firstMaxPos = -1;
        int secondMaxVal = -1, secondMaxPos = -1;

        for (int i = 0; i < (int)line.size(); i++) {
            int digit = line[i] - '0';

            if (digit > firstMaxVal) {
                // shift the old first max to second
                secondMaxVal = firstMaxVal;
                secondMaxPos = firstMaxPos;

                firstMaxVal = digit;
                firstMaxPos = i;
            } else if (digit > secondMaxVal) {
                secondMaxVal = digit;
                secondMaxPos = i;
            }
        }

        int value;
        if (firstMaxPos < secondMaxPos) {
            value = firstMaxVal * 10 + secondMaxVal;
        } else {
            value = secondMaxVal * 10 + firstMaxVal;
        }

        sum += value;
        std::cout << "Line: " << line 
                  << " -> " << value << "\n";
    }

    std::cout << "Total sum: " << sum << "\n";
}

