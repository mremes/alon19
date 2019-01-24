#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

#define MAX_N 1000001
#define MAX_PRIMES 283146

int primes[MAX_PRIMES];
bool b[MAX_N];

int main() {
  int n, j = 1, k = 1, pi = -1, i, fst, snd;
  unordered_set<int> notprimes;

  cin >> n;
  for (int i = 1; i <= n; i++) b[i] = true;

  // Sieve of Eratosthenes
  while (++j <= n * 2) {
    k = 2;
    if (j != 2 && notprimes.find(j) != notprimes.end()) continue;
    while (j * k <= n * 2) notprimes.insert(j * k++);
    primes[++pi] = j;
  }

  int bres[n];
  
  for (i = n, j = n; i > 0; i--) {
    fst = i;
    do {
      snd = primes[pi] - fst;
      if (b[snd] && snd <= n) {
        bres[j--] = snd;
        b[snd] = false;
        break;
      } else {
        pi--;
      }
    } while (pi >= 0);
  }

  for (int i = n; i > 0; i--) cout << i << " ";
  cout << endl;
  for (int i = n; i > 0; i--) cout << bres[i] << " ";

  cout << endl;
}
