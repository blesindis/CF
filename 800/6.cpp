#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, x=0;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if (s.find('+') != -1)
            x++;
        else
            x--;
    }
    cout << x;
}