#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // ofstream tesFile("test.txt");
    // tesFile << "hello arun ini file pertama saya";

    // tesFile.close();

    string text;
    ifstream filetxt("test.txt");
    ifstream filexml("tes.xml");
    ifstream filecpp("index.cpp");

    while (getline(filetxt, text))
    {
        cout << text << endl;
    }
    while (getline(filexml, text))
    {
        cout << text << endl;
    }
    while (getline(filecpp, text))
    {
        cout << text << endl;
    }

    filetxt.close();
    filexml.close();
    filecpp.close();
}