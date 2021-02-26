#include <iostream>

using namespace std;

void swap(int *px, int *py) {
  int t = *px;
  *px = *py;
  *py = t;
}

int main() {
  int a[3];

  cin >> a[0] >> a[1] >> a[2];

  if (a[0] > a[1])
    swap(a[0], a[1]);

  if (a[1] > a[2])
    swap(a[1], a[2]);

  if (a[0] > a[1]) 
    swap(a[0], a[1]);

  cout << a[1] - a[0] + a[2] - a[1] << endl;

  return 0;
}