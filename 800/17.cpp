#include<iostream>
using namespace std;

int t_sub(int n){
    if(n % 10 == 0)
        return n / 10;
    else
        return n - 1;
}

int main(){
    int n, k;
    cin >> n >> k;
    while(k--)
        n = t_sub(n);

    cout << n;

    return 0;
}