#include <iostream>
#include <deque>

using namespace std;

int main() {
  int n, x;
  deque<int> q;
  int s = 0, d = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    q.push_back(x);
  }

  bool st = true;
  while (!q.empty()) {
    if (q.front() > q.back()) {
      if (st) {
        s += q.front();
        q.pop_front();
        st = false;
      } else {
        d += q.front();
        q.pop_front();
        st = true;
      }
    } else {
      if (st) {
        s += q.back();
        q.pop_back();
        st = false;
      } else {
        d += q.back();
        q.pop_back();
        st = true;
      }
    }
  }

  cout << s << " " << d << endl;

  return 0;
}