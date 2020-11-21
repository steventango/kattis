#include <iostream>
#include <unordered_map>

int main() {
  std::unordered_map<std::string, std::string> u = {
      {"A#", "Bb"}, {"Bb", "A#"}, {"C#", "Db"}, {"Db", "C#"}, {"D#", "Eb"},
      {"Eb", "D#"}, {"F#", "Gb"}, {"Gb", "F#"}, {"G#", "Ab"}, {"Ab", "G#"},
  };
  int i = 1;
  std::string note, tonality;
  while (std::cin >> note >> tonality) {
    std::cout << "Case " << i++ << ": ";
    if (u.count(note)) {
      std::cout << u[note] + " " + tonality;
    } else {
      std::cout << "UNIQUE";
    }
    std::cout << std::endl;
  }
}
