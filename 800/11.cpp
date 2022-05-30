#include<iostream>
#include<string>
using namespace std;

int main(){
    int a[26] = {0};
    int num = 0;
    string line;

    cin >> line;
    for (int i = 0; i < line.size(); i++){
        num = a[line[i] - 'a'] == 0 ? num + 1 : num;
        a[line[i] - 'a']++;
    }

    if (num % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
}