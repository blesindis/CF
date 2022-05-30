#include<iostream>
#include<string>
using namespace std;

int main(){
    string s, t;
    bool correct = true;

    cin >> s >> t;
    if (s.size() != t.size())
        correct = false;
    else{
        for (int i = 0; i < s.size(); i++){
            if (s[i] != t[t.size()-i-1]){
                correct = false;
                break;
            }
        }
    }

    cout << (correct ? "YES" : "NO") << endl;

    return 0;
}