#include<iostream>
using namespace std;

int main(){
    int n, a, b, cur_p = 0, c = 0;
    
    cin >> n;
    while(n--){
        cin >> a >> b;
        cur_p += b - a;
        if (c < cur_p) c = cur_p;
    }

    cout << c << endl;

    return 0;
}