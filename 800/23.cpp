#include<iostream>
#include<string>
using namespace std;

bool is_distinct(string s){
    int a[26] = {0};
    for (int i = 0; i < s.size(); i++){
        if (a[s[i] - '0']++ != 0) return false;
    }
    return true;
}

int main(){
    int year, m_year;
    
    cin >> year;
    m_year = year + 1;
    while(true){
        if (is_distinct(to_string(m_year))){
            cout << m_year << endl;
            break;
        }
        m_year++;
    }

    return 0;
}