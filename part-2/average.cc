// Omar Lopez
// omarl4574@csu.fullerton.edu
// @omarl4574
// Partners: @dstauffer05

#include <iostream>
#include <string>
#include <vector>

// using namespace std _GLIBCXX_VISIBILITY(default);

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  double sum{0.0};
  int index{0};

  for (std::string& arg : arguments) {
    if (index == 0) {
      index += 1;
      continue;
    } else {
      sum += std::stod(arg);
      index++;
    }
  }

  int num_count = static_cast<int>(arguments.size() - 1);
  double average = sum / num_count;
  std::cout << "average = " << average;
  return 0;
}
