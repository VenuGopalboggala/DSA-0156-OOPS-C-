#include <iostream>
using namespace std;

void AddEnd4(int A[][4], int R, int C) {
    int sum = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (A[i][j] % 10 == 4) {
                sum += A[i][j];
            }
        }
    }
    cout << "Sum of all values ending with 4: " << sum << endl;
}

int main() {
    int A[2][4] = {{24, 16, 14, 0}, {19, 5, 46, 4}};
    int R = 2;
    int C = 4;

    AddEnd4(A, R, C);

    return 0;
}

