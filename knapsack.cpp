#include <cstdlib>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

int v(std::unordered_set<int>& s, std::vector<std::pair<int, int>>& items) {
  int value = 0;

  for (int k : s) {
    value += items[k].first;
  }

  return value;
}

std::unordered_set<int>& knapsack(
    int k, int h, std::vector<std::pair<int, int>>& items,
    std::unordered_set<int>& chosen,
    std::unordered_map<std::pair<int, int>, std::unordered_set<int>>& memo) {
  if (memo.find(std::pair<int, int>(k, h)) == memo.end()) {
    if (k == 0) {
      return chosen;
    }

    int w_k = items[k].second;
    int v_k = items[k].first;

    if (w_k > h) {
      return knapsack(k - 1, h, items, chosen, memo);
    }

    if (v(knapsack(k - 1, h - w_k, items, chosen, memo), items) + v_k > v(knapsack(k - 1, h, items, chosen, memo), items)) {
      return knapsack(k - 1, h - w_k, items, chosen, memo);
    } else {
      return knapsack(k - 1, h, items, chosen, memo);
    }
  } else {
    return memo[std::pair<int, int>(k, h)];
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int C, n;

  while (std::cin >> C >> n) {
    std::vector<std::pair<int, int>> items;
    for (int i = 0; i < n; ++i) {
      int v, w;
      std::cin >> v >> w;
      items.push_back(std::pair<int, int>(v, w));
    }

    std::unordered_set<int> chosen;
    std::unordered_map<std::pair<int, int>, std::unordered_set<int>> memo;
    knapsack(n, C, items, chosen, memo);
  }
}
