#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    int num_lower = 0;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++){
        if (islower(s[i]))
            num_lower++;
    }

    if (num_lower >= s.size() - s.size() / 2)
        for(int i = 0; i < s.size(); i++)
            s[i] = tolower(s[i]);
    else 
        for (int i = 0; i < s.size(); i++)
            s[i] = toupper(s[i]);

    cout << s << endl;
    
    return 0;
}