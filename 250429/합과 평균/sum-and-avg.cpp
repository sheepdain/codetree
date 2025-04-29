#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B;
    cin >> A >> B;
    double total = A+B;
    double avg = total/2;
    cout << total << " " ;
    cout << fixed;
    cout.precision(1);
    cout << avg;
    return 0;
}