#include <iostream>
using namespace std;

int sum(int a){
    if (a > 0)
    {
        return a + sum(a-1);
    }
    else
    {
        return 0;
    }
}

int faktorial(int a){
    if (a > 1)
    {
        return a * faktorial(a-1);
    }
    else
    {
        return 1;
    }
}

int main(){
    int result = sum(5);
    int hasil = faktorial(4);
    cout << result << endl << hasil;
    return 0;
}