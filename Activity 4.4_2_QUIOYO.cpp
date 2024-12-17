#include <iostream>
using namespace std;
int main(){
char ch;
char ch2;
cout << "Enter a character: ";
cin >> ch;
cout << "Character: "<< ch << endl;
//Lowercase
if (islower (ch)) {
cout << ch << " is a lowercase letter.\n";
} else {
cout << ch << " is not a lowercase letter.\n";
}
//Uppercase
if (isupper(ch)){
cout << ch << "is a uppercase letter.\n";
} else {
cout << ch << "is not a uppercase letter.\n";
}
//Convert uppercase
cout << "Converted to uppercase:" << (ch) << endl;
//Convert Lowercase
cout << "Converted to lowercase:" <<ch << endl;
return 0;
}
