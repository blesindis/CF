#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    string b;
    int i = 0;
    
    cin >> a >> b;
    for (i = 0; i < a.length(); i++){
        if (tolower(a[i]) < tolower(b[i])){
            cout << -1;
            return 0;
        }else if (tolower(a[i]) > tolower(b[i])){
            cout << 1;
            return 0;
        }
    }

    cout << 0;

    return 0;
}