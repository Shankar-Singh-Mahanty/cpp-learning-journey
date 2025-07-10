#include<iostream>
#include<fstream>
using namespace std;

int main() {
    // Create an output file stream object
    ofstream outFile("example.txt");

    // Check if the file is open
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    // Write some data to the file
    outFile << "Shankar" << endl;
    outFile << 2101020758 << endl;

    // Close the file
    outFile.close();

    cout << "Data written to file successfully." << endl;
    return 0;
}