
#include <iostream>
using namespace std;

void printBits(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}


unsigned int reverseBits(unsigned int num) {
    unsigned int reversed = 0;

    
    for (int i = 0; i < 32; i++) {
        
        reversed = (reversed << 1) | (num & 1);
        num >>= 1;
    }

    return reversed;
}

int main() {
    unsigned int value;

    
    cout << "Enter an unsigned integer: ";
    cin >> value;

    
    cout << "Bits before reversing:  ";
    printBits(value);

    unsigned int reversedValue = reverseBits(value);

   
    cout << "Bits after reversing:   ";
    printBits(reversedValue);

    return 0;
}
