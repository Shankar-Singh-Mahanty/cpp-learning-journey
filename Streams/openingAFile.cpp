#include<iostream>
#include<fstream>
using namespace std;

int main() {
    // Create an input file stream object
    ifstream inFile("example.txt");

    // Check if the file is open
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    // Read data from the file
    // string line;
    // while (getline(inFile, line)) {
    //     cout << line << endl;
    // }

    string line;
    int number;
    
    inFile >> line >> number;

    // Close the file
    inFile.close();

    cout << "Line: " << line << endl;
    cout << "Number: " << number << endl;

    // To check the end of the file
    if (inFile.eof()) {
        cout << "End of file reached." << endl;
    } else {
        cout << "File not completely read." << endl;
    }

    cout << "Data read from file successfully." << endl;
    return 0;
}

/*
EOF (End Of File) Concept in C++ Streams:
- The eof() flag is set only after an attempt is made to read past the end of the file.
- After reading the last valid data, eof() is still false until you try to read again and fail.
- Example:
    inFile >> line >> number; // Reads two values, but eof() is still false
    inFile >> dummy;          // This read fails, now eof() becomes true
- To check if the file is completely read, you should attempt another read or use a loop to process the file until EOF.
*/