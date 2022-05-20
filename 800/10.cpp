#include<iostream>
using namespace std;

int main(){
    int isfirst = 1;
    char c;
    while (cin >> c){
        if (isfirst){
            cout << char(toupper(c));
            isfirst = 0;
        }else
            cout << c;
    }

    return 0;
}