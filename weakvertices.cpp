#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int n;
  while (std::cin >> n && n != -1) {
    std::vector<std::vector<int>> matrix;
    for (int r = 0; r < n; ++r) {
      std::vector<int> row;
      for (int c = 0; c < n; ++c) {
        int v;
        std::cin >> v;
        row.push_back(v);
      }
      matrix.push_back(row);
    }

    std::vector<int> weak_vertices;
    for (int r = 0; r < n; ++r) {
      std::unordered_set<int> seen;
      bool triangle = false;
      for (int c = 0; c < n; ++c) {
        if (matrix[r][c] == 1) {
          if (seen.find(c) != seen.end()) {
            triangle = true;
            break;
          }
          for (int d = 0; d < n; ++d) {
            if (matrix[c][d] == 1) {
              seen.insert(d);
            }
          }
        }
      }
      if (!triangle) {
        weak_vertices.push_back(r);
      }
    }

    if (weak_vertices.size()) {
      std::cout << weak_vertices[0];
      for (int i = 1; i < weak_vertices.size(); i++) {
        std::cout << " " << weak_vertices[i];
      }
    }
    std::cout << std::endl;
  }
}
