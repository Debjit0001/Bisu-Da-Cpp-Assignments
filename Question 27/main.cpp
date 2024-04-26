// 27. Copy the contents of one text file to another file, after removing all whitespaces.

#include <iostream>
#include <fstream>
using namespace std;

class FileHandler {
public:
    // Function to copy contents of one file to another after removing whitespaces
    void copyFileWithoutWhitespace(const string& sourceFileName, const string& destinationFileName) {
        ifstream sourceFile("src.txt");
        ofstream destinationFile("dest.txt");

        if (!sourceFile.is_open()) {
            cerr << "Error: Unable to open source file." << endl;
            return;
        }
        if (!destinationFile.is_open()) {
            cerr << "Error: Unable to open destination file." << endl;
            return;
        }

        char ch;
        while (sourceFile.get(ch)) {
            if (!isspace(ch)) {
                destinationFile << ch;
            }
        }

        sourceFile.close();
        destinationFile.close();

        cout << "Contents copied from " << sourceFileName << " to " << destinationFileName << " after removing whitespaces." << endl;
    }
};

int main() {
    FileHandler fileHandler;
    fileHandler.copyFileWithoutWhitespace("source.txt", "destination.txt");
    return 0;
}
