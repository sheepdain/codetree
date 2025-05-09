#include <iostream>
#include <vector> 
using namespace std;

int main() {
    // Please write your code here.
    int n, i;
    cin >>n;
    vector<int> arr(n);

    for (i=0; i<n; i++){
        cin >> arr[i];
        cout << arr[i]*arr[i];
        cout << " ";
    }
    
    return 0;
}