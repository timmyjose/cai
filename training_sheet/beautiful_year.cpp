#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  int y;

  cin >> y;

  int year = y+1;
  while (true) {
    int yy = year;
    unordered_set<int> s;

    for (int i = 0; i < 4; i++) {
      s.insert(yy % 10);
      yy /= 10;
    }

    if (s.size() == 4) {
      cout << year << endl;
      break;
    }

    year++;
  }

  return 0;
}