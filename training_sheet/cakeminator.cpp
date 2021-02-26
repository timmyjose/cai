#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int r, c;
  string s;
  vector<string> v;

  cin >> r >> c;
  for (int i = 0; i < r; i++) {
    cin >> s;
    v.push_back(s);
  }

  int t = 0;
  for (int i = 0; i < r; i++) {
    if (v[i].find("S") != string::npos)
      continue;

    for (int j = 0; j < c; j++) {
      if (v[i][j] == '.') {
        t++;
        v[i][j] = ',';
      }
    }
  }

  for (int i = 0; i < c; i++) {
    bool f = false;
    for (int j = 0; j < r; j++) {
      if (v[j][i] == 'S') {
        f = true;
        break;
      }
    }

    if (f) continue;

    for (int j = 0; j < r; j++) {
      if (v[j][i] == '.') {
        t++;
        v[j][i]= ',';
      }
    }
  }

  cout << t << endl;

  return 0;
}