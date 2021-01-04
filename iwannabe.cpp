#include <iostream>
#include <limits>
#include <queue>
#include <unordered_set>

int main() {
  int N, K;
  std::cin >> N >> K;

  std::unordered_set<int> team;
  std::priority_queue<std::pair<unsigned int, int>> A, D, H;

  for (int i = 0; i < N; i++) {
    std::pair<unsigned int, int> Ai, Di, Hi;
    std::cin >> Ai.first >> Di.first >> Hi.first;
    Ai.second = Di.second = Hi.second = i;
    A.push(Ai);
    D.push(Di);
    H.push(Hi);
  }

  for (int i = 0; i < K; i++) {
    team.insert(A.top().second);
    A.pop();
    team.insert(D.top().second);
    D.pop();
    team.insert(H.top().second);
    H.pop();
  }

  std::cout << team.size() << std::endl;
}
