#include <iostream>
#include <iomanip>
#include <iomanip>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
    string x;
    ifstream inFile;

    inFile.open("hobbit.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

while (getline(inFile,x)) {
cout << x << endl ;
}

    inFile.close();
}
