#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    int num_lucky = 0;
    
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '4' || s[i] == '7')
            num_lucky++;
    
    string s_num = to_string(num_lucky);
    bool nearly_lucky = true;
    for (int i = 0; i < s_num.size(); i++)
        if (s_num[i] != '4' && s_num[i] != '7'){
            nearly_lucky = false;
            break;
        }
    
    cout << (nearly_lucky ? "YES" : "NO") << endl;

    return 0;
}