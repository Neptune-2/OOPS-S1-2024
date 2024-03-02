#include <iostream>
#include <unordered_map>

double weighted_average(int array[], int n) {
    // Check if the size is less than 1
    if (n < 1) {
        return 0.0;
    }

    // Count occurrences of each distinct element using an unordered_map
    std::unordered_map<int, int> elementCounts;
    for (int i = 0; i < n; i++) {
        elementCounts[array[i]]++;
    }

    // Calculate the weighted sum
    double weightedSum = 0.0;
    for (const auto& entry : elementCounts) {
        int xi = entry.first;
        int count = entry.second;
        weightedSum += static_cast<double>(xi * count) / n;
    }

    return weightedSum;
}

int main() {
    // Example usage
    const int size = 6;
    int myArray[size] = {1, 2, 1, 4, 1, 3};

    double result = weighted_average(myArray, size);

    if (result != 0.0) {
        std::cout << "Weighted Average: " << result << std::endl;
    } else {
        std::cout << "Invalid size for calculating the weighted average." << std::endl;
    }

    return 0;
}
