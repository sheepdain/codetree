#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,i;
    cin >>a>>b;
    int total=0;
    for (i=a;i<=b;i++){
        if (i%2==0){
            total+=i;
        }
    }
    cout << total;
    return 0;
}