#include<iostream>
using namespace std;

int main(){
    int n, k, advanced = 0;
    int score_k;
    int a[55];

    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    score_k = a[k-1];

    if (score_k <= 0) for(advanced = 0; a[advanced] > 0; advanced++);
    else for(advanced = k - 1; advanced < n && a[advanced] == score_k; advanced++);
    
    cout << advanced;
}