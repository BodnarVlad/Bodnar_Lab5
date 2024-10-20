#include <iostream>
using namespace std;

int main() {
    const int r9d = 2;
    const int ctovp = 2;
    int matr1[r9d][ctovp], matr2[r9d][ctovp], sum[r9d][ctovp];
    cout << "1 matr: " << '\n';
    for (int i = 0; i < r9d; i++) {
        for (int j = 0; j < ctovp; j++) {
            cin >> matr1[i][j];
        }
    }
    cout << "2 matr: " << '\n';
    for (int i = 0; i < r9d; i++) {
        for (int j = 0; j < ctovp; j++) {
            cin >> matr2[i][j];
        }
    }
    for (int i = 0; i < r9d; i++) {
        for (int j = 0; j < ctovp; j++) {
            sum[i][j] = matr1[i][j] + matr2[i][j];
        }
    }
    cout << "Resultat: " << '\n';
    for (int i = 0; i < r9d; i++) {
        for (int j = 0; j < ctovp; j++) {
            cout << sum[i][j] << " ";
        }
    }
}
