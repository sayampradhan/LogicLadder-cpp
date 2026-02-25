#include<iostream>
#include<vector>

using namespace std;

void zigzag(int row, int col){
    vector<vector<int>> arr(row, vector<int>(col));

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    for (int k = 0; k < row + col - 1; k++) {
        if (k % 2 == 0) {
            int r = (k < row) ? k : row - 1;
            int c = (k < row) ? 0 : k - row + 1;
            while (r >= 0 && c < col) {
                cout << arr[r][c] << " ";
                r--;
                c++;
            }
        } else {
            int c = (k < col) ? k : col - 1;
            int r = (k < col) ? 0 : k - col + 1;
            while (c >= 0 && r < row) {
                cout << arr[r][c] << " ";
                r++;
                c--;
            }
        }
    }
    cout << endl;
}

int main(){
    int row, col;

    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter cols: ";
    cin >> col;

    zigzag(row, col);

    return 0;
}