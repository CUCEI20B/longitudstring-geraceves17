#include <iostream>

using namespace std;

int main() {
    string cadena;
    
    //cin>> cadena;
    getline(cin, cadena);
    cout << cadena.size() << endl;

    return 0;
}
