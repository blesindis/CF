#include <iostream>
using namespace std;

int main(){
    int n;
    int solved = 0;
    int a[3];
    
    cin >> n;
    while(n--){
        cin >> a[0] >> a[1] >> a[2];
        int sum = a[0] + a[1] + a[2];
        solved = sum >= 2 ? solved + 1 : solved;
    }
    cout << solved;
    
}