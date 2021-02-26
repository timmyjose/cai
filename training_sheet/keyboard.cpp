#include <iostream>
#include <vector>

using namespace std;

char findChar(const vector<char>& v, char c, char direction) {
  for (int i = 0; i < v.size(); i++) {
    if (c == v[i]) {
      return direction == 'R' ? v[i-1] : v[i+1];
    }
  }

  return '\0';
}

int main() {
  char c;
  string inp;
  string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
  vector<char> v;

  for (char c : s)
    v.push_back(c);

  cin >> c >> inp;
  for (char d : inp)
    cout << findChar(v, d, c);
  cout << endl;

  return 0;
}