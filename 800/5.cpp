#include<iostream>
using namespace std;

int main(){
    int m, n, m_res, n_res; 
    int num;

    cin >> m >> n;
    m_res = m % 2;
    n_res = n % 2;
    num = (m - m_res) * (n - n_res) / 2;
    num += m_res * n / 2 + n_res * m / 2;

    cout << num;

    return 0;
}