#include "encryption.h"
#include <fstream>
#include <cctype>

using namespace std;

bool encryptFile(const string& filename, bool encrypt){
    ifstream inFile(filename); // Open file for reading
    if (!inFile){
        return false;
    }

    // read the file content
    string content((istreambuf_iterator<char>(inFile)), {});
    inFile.close();

    // encrypt the content
    if (performCeaserCipher(content, encrypt)){
        
    }
}