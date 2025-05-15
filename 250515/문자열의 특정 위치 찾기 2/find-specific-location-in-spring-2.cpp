#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string arr[5]={"apple","banana","grape","blueberry","orange"};
    int i,j;
    int cnt=0;
    char a;
    cin >>a;
    for (i=0;i<5;i++){
        for (j=2;j<4;j++){
            if (arr[i][j]==a){
                cout<<arr[i]<<"\n";
                cnt+=1;
                break;
            }
        }
    }
    cout<<cnt;


    return 0;
}