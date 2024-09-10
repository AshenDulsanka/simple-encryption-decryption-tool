# simple-encryption-decryption-tool

This program implements a simple Caesar cipher encryption and decryption method for text files. It shifts each alphabetic character in the file by 13 positions forward (for encryption) or backward (for decryption) in the alphabet. And currently working on adding SHA-256 and MD5.

## Getting Started

### Prerequisites

- C++ compiler (g++ recommended)
- Git (for cloning the repository)

### Installation

1. Clone the repository:
   ```
   git clone https://github.com/AshenDulsanka/simple-encryption-decryption-tool
   cd simple-encryption-decryption-tool
   ```

2. Compile the program:
   ```
   g++ main.cpp encryption.cpp -o run
   ```
   Note: You can replace `run` with any name you prefer for the executable.

## Usage

1. Ensure that the file you want to encrypt or decrypt is in the same directory as the executable.

2. Run the program:
   ```
   ./run
   ```

3. Follow the prompts:
   - Enter the name of the file you want to encrypt or decrypt.
   - Choose the mode: 'e' for encrypt or 'd' for decrypt.

4. The program will create a new file with the prefix "encrypted_" or "decrypted_" based on the chosen mode.

## Example

```
Enter the name of the file: message.txt
Encrypt or Decrypt? (e/d): e
Encryption successful!
```

This will create a new file named `encrypted_message.txt` in the same directory.

## Notes

- The program only encrypts alphabetic characters (A-Z, a-z). Other characters remain unchanged.
- The shift value is fixed at 13 for this implementation.
- Make sure you have write permissions in the directory where you're running the program.

## Purpose

This project was created for me to learn c++ and how to implement cryptography methods.

## License

This project is licensed under the MIT License - see the <a href="LICENSE">LICENSE</a> file for details.

## Contributing

If you want to contribute to this project, feel free to open an issue or submit a pull request.