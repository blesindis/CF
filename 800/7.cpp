#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int matrix[6][6];
    int pos_i, pos_j;

    for(int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++){
            cin >> matrix[i][j];
            if (matrix[i][j] == 1){
                pos_i = i;
                pos_j = j;
            }
        }

    cout << abs(pos_i - 3) + abs(pos_j - 3) << endl;
    return 0;
}