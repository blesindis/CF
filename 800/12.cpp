#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, min_num = 0;
    string s;

    cin >> n >> s;
    char cur = s[0];
    for (int i = 0; i < n - 1; i++){
        char nxt = s[i + 1];
        if (cur == nxt) min_num++;        
        else cur = nxt;
    }    

    cout << min_num;
    return 0;
}