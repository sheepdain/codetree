#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int Am, Ae, Bm, Be;
    cin >> Am >> Ae;
    cin >> Bm >> Be;

    if (Am>Bm && Ae>Be){
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}