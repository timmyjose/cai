#include <iostream>

using namespace std;

const int N = 3;
int a[][3] = { {1, 1, 1}, {1, 1, 1}, {1, 1, 1} };

int main() {
  int d;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> d;
      if (d % 2 == 0) continue;

      a[i][j] ^= 1;
      if (i-1 >= 0) a[i-1][j] ^= 1;
      if (i+1 < N) a[i+1][j] ^= 1;
      if (j-1 >= 0) a[i][j-1] ^= 1;
      if (j+1 < N) a[i][j+1] ^= 1;
      //if (i-1 >= 0 && j-1 >= 0) a[i-1][j-1] ^= 1;
      //if (i-1 >= 0 && j+1 < N) a[i-1][j+1] ^= 1;
      //if (i+1 < N && j+1 < N) a[i+1][j+1] ^= 1;
      //if (i+1 < N && j-1 >= 0) a[i+1][j-1] ^= 1;
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++)
      cout << a[i][j];
    cout << endl;
  }

  return 0;
}