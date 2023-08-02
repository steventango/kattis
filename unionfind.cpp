#include <iostream>
#include <vector>

template <typename T>
class UnionFind {
 public:
  void makeSet(unsigned int N) {
    this->parent.resize(N);
    this->rank.resize(N);
    for (unsigned int i = 0; i < N; i++) {
      this->parent[i] = i;
      this->rank[i] = 0;
    }
  }
  T find(T x) {
    while (this->parent[x] != x) {
      T parent = this->parent[x];
      x = parent;
      this->parent[x] = this->parent[parent];
    }
    return x;
  }
  void join(T x, T y) {
    x = this->find(x);
    y = this->find(y);
    if (x == y) {
      return;
    }
    if (this->rank[x] < this->rank[y]) {
      std::swap(x, y);
    }
    this->parent[y] = x;
    if (this->rank[x] == this->rank[y]) {
      this->rank[x]++;
    }
  }

 private:
  std::vector<T> parent;
  std::vector<unsigned int> rank;
};


int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int N, Q;
  std::cin >> N >> Q;

  UnionFind<int> uf;
  uf.makeSet(N);

  while (Q--) {
    char c;
    int a, b;
    std::cin >> c >> a >> b;
    if (c == '=') {
      uf.join(a, b);
    } else if (uf.find(a) == uf.find(b)) {
      std::cout << "yes\n";
    } else {
      std::cout << "no\n";
    }
  }
}
