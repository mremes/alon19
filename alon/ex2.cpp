#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  long n, i;
  cin >> n;

  if (n == 1) {
    cout << 1 << endl;
    return 0;
  } else if (n < 4) {
    cout << "NO SOLUTION" << endl;
    return 0;
  }

  for (i = 2; i <= n; i = i + 2) cout << i << " ";
  for (i = 1; i <= n; i = i + 2) cout << i << " ";
  cout << endl;
}
