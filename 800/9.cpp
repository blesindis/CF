#include<iostream>
#include<string>
using namespace std;

int main(){
    int num[4] = {0};
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i = i + 2)
        num[s[i] - '0']++;
    for (int i = 1, count = 0; i <= 3; i++)
        for (int j = 0; j < num[i]; j++){
            if (count == 0)
                cout << i;
            else
                cout << "+" << i;
            count++;
        }
}   