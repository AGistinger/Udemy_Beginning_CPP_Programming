// C++ Strings - Challenge/Cipher

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    //Declare alphabet
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRTUVWXYS"};
    //Declare key
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciar"};
    //Set variables for messages
    string message {};
    string encrypted_message {};
    string decrypted_message {};
    
    //Get Message
    cout << "Enter your secret message: ";
    getline(cin, message);
    
    cout << "\nEncrypting Message..." << endl;
    
    //Check each character in message for the position in the alphabet and return the position in the key
    for(char c : message) {
        //Using .find function to find the character in alphabet which will return the position number that
        //the character is in
        size_t position = alphabet.find(c);
        if(position != string::npos) {
            //Adding each char from key.at(position) to the encrypted message
            encrypted_message += key.at(position);
        }else{
            //Any characters that are not in the key are returned as is
            encrypted_message += c;
        }
    }
    cout << "\nEncrypted Message: " << encrypted_message << endl;
    
    cout << "\nDecrypting Message..." << endl;
    
    //Check each character in the encrypted message for the position in the key and return the position in the alphabet
    for(char c : encrypted_message) {
        size_t position = key.find(c);
        if(position != string::npos) {
            decrypted_message += alphabet.at(position);
        }else{
            decrypted_message += c;
        }
    }
    cout << "\nDecrypted message: " << decrypted_message << endl;
    
    cout << endl;
    return 0;
}

