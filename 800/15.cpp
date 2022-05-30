#include<iostream>
using namespace std;;

int main(){
    int c, res;
    cin >> c;
    res = c % 5 == 0 ? 0 : 1;
    cout << c / 5 + res << endl;

    return 0;
}