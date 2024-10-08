#include "encryption.h"
#include <fstream>
#include <cctype>

using namespace std;

bool performCaesarCipher(string &content, bool encrypt)
{
    int shift = encrypt ? 13 : -13;

    for (char &ch : content)
    {
        if (isalpha(ch))
        {
            char base = isupper(ch) ? 'A' : 'a';
            ch = static_cast<char>((ch - base + shift + 26) % 26 + base);
        }
    }

    return true;
}

bool encryptFile(const string &filename, bool encrypt)
{
    ifstream inFile(filename); // Open file for reading
    if (!inFile)
    {
        return false;
    }

    // read the file content
    string content((istreambuf_iterator<char>(inFile)), {});
    inFile.close();

    // encrypt the content
    if (performCaesarCipher(content, encrypt))
    {
        // create the iutput file
        ofstream outFile(encrypt ? "encrypted_" + filename : "decrypted_" + filename);
        if (!outFile)
        {
            return false;
        }

        outFile << content;
        outFile.close();
        return true;
    }
}