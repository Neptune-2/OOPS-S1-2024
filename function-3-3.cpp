#include <iostream>
#include <unordered_map>

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0.0;
    }

    std::unordered_map<int, int> elementCounts;

    for (int i = 0; i < n; i++) {
        elementCounts[array[i]]++;
    }

    double sum = 0.0;

    for (const auto& entry : elementCounts) {
        int xi = entry.first;
        int count = entry.second;
        sum += static_cast<double>(xi * count);
    }

    return sum / n;
}
