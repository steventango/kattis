#include <iostream>
#include <unordered_map>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int N;
  std::cin >> N;
  std::unordered_map<std::string, char> sound_key_map = {
      {"clank", 'a'},  {"bong", 'b'},   {"click", 'c'}, {"tap", 'd'},
      {"poing", 'e'},  {"clonk", 'f'},  {"clack", 'g'}, {"ping", 'h'},
      {"tip", 'i'},    {"cloing", 'j'}, {"tic", 'k'},   {"cling", 'l'},
      {"bing", 'm'},   {"pong", 'n'},   {"clang", 'o'}, {"pang", 'p'},
      {"clong", 'q'},  {"tac", 'r'},    {"boing", 's'}, {"boink", 't'},
      {"cloink", 'u'}, {"rattle", 'v'}, {"clock", 'w'}, {"toc", 'x'},
      {"clink", 'y'},  {"tuc", 'z'},    {"whack", ' '}};

  std::string text;
  bool capslock = false;
  bool shift = false;

  for (int i = 0; i < N; i++) {
    std::string sound;
    std::cin >> sound;
    if (sound == "bump") {
      capslock = !capslock;
    } else if (sound == "pop") {
      if (!text.empty()) {
        text.pop_back();
      }
    } else if (sound == "dink") {
      shift = true;
    } else if (sound == "thumb") {
      shift = false;
    } else {
      char c = sound_key_map[sound];
      if (capslock ^ shift) {
        c = toupper(c);
      }
      text += c;
    }
  }
  std::cout << text << std::endl;
}
