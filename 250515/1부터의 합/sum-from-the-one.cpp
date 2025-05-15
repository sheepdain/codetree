#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,i;
    cin >> n;
    int ssum=0;
    for (i=1;i<=100;i++){
        ssum+=i;
        if (ssum>=n){
            cout <<i;
            break;
        }
    }
    return 0;
}