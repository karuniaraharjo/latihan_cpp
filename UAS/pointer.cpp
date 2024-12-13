#include <iostream>
using namespace std;

int main(){
    int y = 20;
    int* ptr;
    ptr = &y;

    *ptr = 12;

    cout << "nilai y : " << y;
}