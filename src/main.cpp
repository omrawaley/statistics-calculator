#include "statistics.h"
#include <fstream>
#include <iostream>
#include <vector>

std::vector<float> parse_file(char *path) {
  std::vector<float> data;

  std::ifstream input_file(path);

  float num;

  while (input_file >> num) {
    data.push_back(num);
  }

  input_file.close();

  return data;
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cerr << "Error: arguments expected" << std::endl;

    return -1;
  }

  std::vector<float> data = parse_file(argv[1]);

  std::sort(data.begin(), data.end());

  std::ofstream output_file("statistics/statistics.txt");

  output_file << "Data Analyzed:"
              << "\n\n";

  for (auto &num : data) {
    output_file << num << "\n";
  }

  output_file << "\n"
              << "Statistics:"
              << "\n";

  output_file << "\n"
              << "average: " << Statistics::find_average(data) << "\n";

  output_file << "\n"
              << "median: " << Statistics::find_median(data) << "\n";

  output_file << "\n"
              << "mode: " << Statistics::find_mode(data) << "\n";

  output_file << "\n"
              << "range: " << Statistics::find_range(data) << "\n";

  std::cout << "\n"
            << "Statistics have been written to `statistics/statistics.txt`"
            << std::endl;

  return 0;
}
