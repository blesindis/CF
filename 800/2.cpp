#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    int n;

    cin >> n;
    while(n--){
        cin >> s;
        if (s.length() <= 10)
            cout << s;
        else{
            string abbr;
            abbr = s[0] + to_string(s.length() - 2) + s[s.length() - 1];
            cout << abbr;
        }
        cout << endl;
    }
}