#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  if (n < 4) {
    cout << "NO SOLUTION" << endl;
    return 0;
  } else if (n == 4) {
    cout << "3 4 3 4" << endl;
    cout << "3 1 1 2" << endl;
    cout << "4 4 3 2" << endl;
    cout << "2 2 1 1" << endl;
    return 0;
  }

  int i, j;
  for (i = 0; i < n - 2; i++) {
    int t = i + 2;
    for (j = 0; t < n; j++, t++) cout << t << " ";
    for (j = j - 1, t = 2; t != i + 2; j++, t++) cout << t << " ";
    cout << 1 << " ";
    cout << (i == 0 ? 1 : t - 1) << endl;
  }

  for (j = n - 1; j > 0; j--) cout << j << " ";
  cout << n - 1 << endl;
  for (j = 0; j < n; j++) cout << n << " ";
}
