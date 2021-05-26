#include <gmpxx.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

bool sfactor(mpz_class n, mpz_class p,
             std::map<mpz_class, std::vector<mpz_class>>& factors) {
  if (n < 10) {
    factors[p].push_back(n);
    return true;
  } else {
    for (int i = 9; i >= 2; --i) {
      if (n % i == 0) {
        factors[p].push_back(i);
        return sfactor(n / i, p, factors);
      }
    }
    return false;
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::map<mpz_class, std::vector<mpz_class>> factors;

  mpz_class n;
  while (std::cin >> n && n > -1) {
    if (sfactor(n, n, factors)) {
      if (factors[n].size() < 2) {
        std::cout << 1;
      }
      std::sort(factors[n].begin(), factors[n].end());
      for (mpz_class factor : factors[n]) {
        std::cout << factor;
      }
      std::cout << std::endl;
    } else {
      std::cout << "There is no such number." << std::endl;
    }
  }
}
