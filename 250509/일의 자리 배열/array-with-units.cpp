#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10]={0};
    int a,b,i,num,p;
    cin >>a>>b;
    arr[0]=a;
    arr[1]=b;
    for (i=2;i<10;i++){
        arr[i]=(arr[i-1]+arr[i-2])%10;
    }
    for (i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}