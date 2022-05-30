#include<iostream>
using namespace std;

int main(){
    int n, a = 0;
    char c;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> c;
        if (c == 'A') a++;
    }

    if (a > n - a) cout << "Anton";
    else if (a < n - a) cout << "Danik";
    else cout << "Friendship";

    return 0;
}