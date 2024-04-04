#include "statistics.h"

float Statistics::find_average(std::vector<float> data) {
  return (std::reduce(data.begin(), data.end()) / data.size());
}

float Statistics::find_median(std::vector<float> data) {
  if (data.size() % 2 == 0) {
    float a = data.at((data.size() / 2));
    float b = data.at((data.size() / 2) - 1);

    return ((a + b) / 2);
  } else {
    return (std::floor(data.at(data.size() / 2)));
  }
}

float Statistics::find_mode(std::vector<float> data) {
  std::unordered_map<float, float> freq;

  float mode = 0;
  float max_freq = 0;

  for (auto &num : data) {
    freq[num]++;
  }

  for (const auto &pair : freq) {
    if (pair.second > max_freq) {
      max_freq = pair.second;
      mode = pair.first;
    }
  }

  return mode;
}

float Statistics::find_range(std::vector<float> data) {
  return (data.back() - data.front());
}
