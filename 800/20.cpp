#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, t;
    string q;
    cin >> n >> t >> q;

    while (t--){
        for (int i = 0; i < q.size() - 1; i++){
            if (q[i] == 'B' && q[i+1] == 'G'){
                q[i] = 'G';
                q[i + 1] = 'B';
                i++;
            }
        }
    }

    cout << q;

    return 0;
}