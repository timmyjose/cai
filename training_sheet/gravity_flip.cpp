#include <iostream>
#include <vector>
#include <algorithm>

void sort(std::vector<int>& v) {
  for (int i = 1; i < v.size(); i++) {
    int key = v[i];
    int j = i - 1;
    while (j >=0 && v[j] > key) {
      v[j+1] = v[j];
      j--;
    }
    v[j+1] = key;
  }
}

int main() {
  int n, d;
  std::vector<int> v;

  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> d;
    v.push_back(d);
  }

  sort(v);

  for (auto e : v) 
    std::cout << e << " ";
  std::cout << "\n";

  return 0;
}