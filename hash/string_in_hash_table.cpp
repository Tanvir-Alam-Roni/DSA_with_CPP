#include <iostream>
using namespace std;

int main() {
    
    /*
        1. Create a hash table compatible to store strings
        2. Input strings
        3. Find index to store that string in the hash table
        4. Store the string in the index
    */
    
    // Hash table
    char* hash_table[5] = {NULL, NULL, NULL, NULL, NULL};
    
    // String
    char name[] = "Tanvir";
    
    // Hash code
    int hash_code = 0;
    int i=0;
    while(name[i] != '\0') {
        hash_code += (int) *(name+i);
        i++;
    }
    hash_code %= 5;
    cout << "Hash code for '" << name << "' is: " << hash_code << endl;
    
    // Store the string in hash_table with index=hash_code
    hash_table[hash_code] = name;
    
    // Check if it is there!
    cout << *(hash_table+hash_code) << endl;
    
    return 0;
}