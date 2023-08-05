#include <cmath>
#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int T;
  std::cin >> T;
  for (int i = 0; i < T; i++) {
    int R;
    double P, D;
    std::cin >> R >> P >> D;
    std::vector<std::string> ingredients;
    ingredients.reserve(R);
    std::vector<double> percentages;
    percentages.reserve(R);
    double scaling_factor = D / P;
    double scaled_weight_main_ingredient;
    while (R--) {
      std::string ingredient;
      double weight, percentage;
      std::cin >> ingredient >> weight >> percentage;
      if (percentage == 100.0) {
        scaled_weight_main_ingredient = scaling_factor * weight;
      }
      ingredients.push_back(ingredient);
      percentages.push_back(percentage / 100.);
    }
    std::cout << "Recipe # " << i + 1 << std::endl;
    for (int j = 0; j < ingredients.size(); j++) {
      std::cout << ingredients[j] << " " << std::fixed << scaled_weight_main_ingredient * percentages[j] << std::endl;
    }
    std::cout << "----------------------------------------" << std::endl;
  }
}
