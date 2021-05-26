// https://en.wikipedia.org/wiki/Gomory%E2%80%93Hu_tree

#include <algorithm>
#include <functional>
#include <iostream>
#include <set>
#include <unordered_map>
#include <vector>

struct Edge {
  int u, v, weight;

  bool operator>(Edge rhs) const { return this->weight > rhs.weight; }
};

class UnionFind {
 public:
  void insert(int v);

  int find(int u);

  bool merge(int u, int v);

  std::set<int> component(int u);

 private:
  std::unordered_map<int, int> parent, rank;
};

void UnionFind::insert(int v) {
  if (parent.find(v) == parent.end()) {
    parent[v] = v;
    rank[v] = 0;
  }
}

int UnionFind::find(int v) {
  if (v != parent[v]) {
    parent[v] = UnionFind::find(parent[v]);
  }
  return parent[v];
}

bool UnionFind::merge(int u, int v) {
  int rep_u = find(u), rep_v = find(v);

  if (rep_u == rep_v) {
    return false;
  }

  if (rank[rep_u] < rank[rep_v]) {
    parent[rep_u] = parent[rep_v];
  } else if (rank[rep_v] < rank[rep_u]) {
    parent[rep_v] = parent[rep_u];
  } else {
    parent[rep_u] = parent[rep_v];
    ++rank[rep_v];
  }
  return true;
}

std::set<int> UnionFind::component(int u) {
  std::set<int> c;
  int root = find(u);

  for (std::pair<int, int> edge : parent) {
    if (find(edge.first) == root || find(edge.second) == root) {
      c.insert(edge.first);
      c.insert(edge.second);
    }
  }

  return c;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int n, m, s, t;

  UnionFind uf;
  std::vector<Edge> edges;

  std::cin >> n >> m >> s >> t;

  for (int i = 0; i < n; ++i) {
    uf.insert(i);
  }

  for (int i = 0; i < m; ++i) {
    int u, v, w;
    std::cin >> u >> v >> w;
    Edge e = {u, v, w};
    edges.push_back(e);
  }

  std::sort(edges.begin(), edges.end(), std::greater<Edge>());

  for (const Edge e : edges) {
    if (uf.find(e.u) == uf.find(s) && uf.find(e.v) == uf.find(t) ||
        uf.find(e.v) == uf.find(s) && uf.find(e.u) == uf.find(t)) {
      // edge connects U and and U'
      continue;
    }
    uf.merge(e.u, e.v);
  }

  std::set<int> U = uf.component(s);

  std::cout << U.size() << std::endl;
  for (const int u : U) {
    std::cout << u << std::endl;
  }
}
