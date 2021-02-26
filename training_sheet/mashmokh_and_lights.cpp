#include <iostream>

const int MAX = 110;

using namespace std;

int main() {
  int n, m, b;
  int a[MAX] = {0};

  cin >> n >> m;
  for (int i = 0 ; i < m; i++) {
    cin >> b;

    for (int j = b-1; j < n; j++) {
      if (a[j] == 0)
        a[j] = b;
    }
  }

  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;

  return 0;
}