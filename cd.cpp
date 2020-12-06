#include <iostream>
#include <queue>

int main() {
  int N, M;
  while (std::cin >> N >> M) {
    if (N + M == 0) break;

    int CD;
    std::queue<int> jack, jill;

    while (N--) {
      std::cin >> CD;
      jack.push(CD);
    }

    while (M--) {
      std::cin >> CD;
      jill.push(CD);
    }

    int CD_jack, CD_jill, both = 0;
    while (jack.size() + jill.size()) {
      CD_jack = jack.front();
      CD_jill = jill.front();

      if (jack.size() && CD_jack < CD_jill) {
        jack.pop();
      } else if (jill.size() && CD_jill < CD_jack) {
        jill.pop();
      } else {
        jill.pop();
        jack.pop();
        both++;
      }
    }

    std::cout << both << std::endl;
  }
}
