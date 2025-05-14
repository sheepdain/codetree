#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n,i,j;
    cin >>n;
    vector<int> arr(n);

    for (i=0;i<n;i++){
        cin >> arr[i];
    }
    for (j=n-1;j>=0;j--){
        if (arr[j]%2==0){
            cout << arr[j] <<" ";
        }
    }
    return 0;
}