#include <iostream>
#include <limits>

#define ARRAY_SIZE 5

bool two_sum(const int nums[ARRAY_SIZE], const int target, std::size_t& index0, std::size_t& index1) {
    for (std::size_t i = 0; i < ARRAY_SIZE; ++i) {
        for (std::size_t j = i + 1; j < ARRAY_SIZE; ++j) {
            if (nums[i] + nums[j] == target) {
                index0 = i < j ? i : j; // меньший индекс
                index1 = i > j ? i : j; // больший индекс
                return true; // Пара найдена
            }
        }
    }
    return false; // Пара не найдена
}

int main() {
    int nums[ARRAY_SIZE] = {2, 7, 11, 15, 3}; // Пример массива
    int target = 10; // Целевое значение
    std::size_t index0, index1;

    if (two_sum(nums, target, index0, index1)) {
        std::cout << "Indices found: " << index0 << " and " << index1 << std::endl;
    } else {
        std::cout << "No valid indices found." << std::endl;
    }

    return 0;
}