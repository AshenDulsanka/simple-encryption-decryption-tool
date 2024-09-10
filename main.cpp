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
        
    }

    return 0;
}