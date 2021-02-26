#include <iostream>
#include <string>
#include <vector>

using namespace std;

void sort(vector<int>& v) {
  for (int i = 1; i < v.size(); i++) {
    int key = v[i];
    int j = i - 1;
    while (j >= 0 && v[j] > key) {
      v[j+1] = v[j];
      j--;
    }
    v[j+1] = key;
  }
}

int main() {
  string inp;
  vector<int> terms;

  cin >> inp;
  for (char c : inp) {
    if (c == '+') continue;
    terms.push_back(c - '0');
  }

  sort(terms);

  for (int i = 0; i < terms.size(); i++) {
    if (i > 0 && i < terms.size()) 
      cout << "+";
    cout << terms[i];
  }

  cout << endl;

  return 0;
}