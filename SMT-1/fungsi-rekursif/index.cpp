#include <iostream>
using namespace std;

int sum(int a){
    if (a == 0)
        return 0;
    
    return a + sum(a-1);
}

int faktorial(int a){
    if (a == 0)
        return 1;
    
    return a * faktorial(a-1);
}

int main(){
    int result = sum(5);
    int hasil = faktorial(4);
    cout << result << endl << hasil;
    return 0;
}