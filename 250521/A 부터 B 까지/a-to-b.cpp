#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,num;
    cin >>a>>b;
    num=a;
    while (num<=b){
        cout <<num<<" ";
        if (num%2==1){
            num*=2;
        } else {
            num+=3;
        }
    }
    return 0;
}