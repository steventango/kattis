#include <deque>
#include <iostream>

std::deque<int64_t> digitize(int64_t n) {
  std::deque<int64_t> v;
  while (n) {
    v.push_front(n % 10);
    n /= 10;
  }
  return v;
}

void output(bool b, int64_t n) {
  if (b) {
    std::cout << n;
  } else {
    std::cout << "YODA";
  }
  std::cout << std::endl;
}

int main() {
  std::ios_base::sync_with_stdio(false);

  int64_t N;
  int64_t M;

  std::cin >> N >> M;

  std::deque<int64_t> N_d = digitize(N);
  std::deque<int64_t> M_d = digitize(M);

  while (M_d.size() > N_d.size()) N_d.push_front(0);

  while (N_d.size() > M_d.size()) M_d.push_front(0);

  int64_t N_n = 0, M_n = 0;
  bool N_b = false, M_b = false;

  for (int64_t i = 0; i < N_d.size(); ++i) {
    if (N_d[i] >= M_d[i]) {
      N_n *= 10;
      N_n += N_d[i];
      N_b = true;
    }
    if (M_d[i] >= N_d[i]) {
      M_n *= 10;
      M_n += M_d[i];
      M_b = true;
    }
  }

  output(N_b, N_n);
  output(M_b, M_n);
}
