#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, minpos = -1, maxpos = -1;
  int d;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> d;
    if (d == 1) minpos= i;
    if (d == n) maxpos = i;
  }

  int sol = 0;
  for (int i = 0; i < n; i++) {
    if (i == maxpos) continue;
    sol = max(sol, abs(maxpos - i));
  }

  for (int j = 0; j < n; j++) {
    if (j == minpos) continue;
    sol = max(sol, abs(minpos - j));
  }

  cout << sol << endl;

  return 0;
}