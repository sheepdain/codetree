#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a, b;
    cin >> a >> b;
    int a_l=a.length();
    int b_l=b.length();
    if (a_l>b_l){
        cout << a <<" "<<a_l;
    } else if (b_l>a_l){
        cout << b <<" "<<b_l;
    } else{
        cout << "same";
    }

    return 0;
}