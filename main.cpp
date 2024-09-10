#include <iostream>
#include "encryption.h"
#include <string>

using namespace std;

int main(){
    string filename;
    char mode;

    cout << "Enter the name of the file: ";
    getline(cin >> std::ws, filename); //read all and ignores all the white spaces from the filename string

    cout << "Encrypt or Decrypt? (e/d): ";
    cin >> mode;

    if(mode == 'e' || mode == 'E'){
        if (encryptFile(filename, true)){
            cout << "Encryption successful!" << endl;
        } else {
            cerr << "Error: Encryption failed!" << endl;
        }
    } else if (mode == 'd' || mode == 'D'){
        if (encryptFile(filename, false)){
            cout << "Decryption successful!" << endl;
        } else {
            cerr << "Error: Decryption failed!" << endl;
        }
    } else {
        cerr << "Error: Invalid mode!. Use 'e' or 'd'." << endl;
    }

    return 0;
}