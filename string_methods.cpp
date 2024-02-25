#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    
    size_t found = str.find("World");
    if (found != string::npos) {
        cout << "Substring 'World' found at position: " << found << endl;
    }
    
    string sub = str.substr(0, 5); 
    cout << "Substring: " << sub << endl;
    
    str.replace(7, 5, "C++"); 
    cout << "Modified string: " << str << endl;
    
    str.insert(5, "there, "); 
    cout << "Inserted string: " << str << endl;
    
    str.erase(0, 7); 
    cout << "Erased string: " << str << endl;
    
    return 0;
}
