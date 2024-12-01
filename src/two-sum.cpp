#include <iostream>
#include <limits>

#define ARRAY_SIZE 5

bool two_sum(const int nums[ARRAY_SIZE], const int target, std::size_t& index0, std::size_t& index1) {
    for (std::size_t i = 0; i < ARRAY_SIZE; ++i) {
        for (std::size_t j = i + 1; j < ARRAY_SIZE; ++j) {
            if (nums[i] + nums[j] == target) {
                index0 = i;
                index1 = j;
                return true; // Найдена пара
            }
        }
    }
    return false; // Пара не найдена
}

int main() {
    int nums[ARRAY_SIZE] = {2, 7, 11, 15, 3};
    int target = 10;
    std::size_t index0, index1;

    if (two_sum(nums, target, index0, index1)) {
        std::cout << "Найдена пара: индексы " << index0 << " и " << index1 << std::endl;
    } else {
        std::cout << "Пара не найдена." << std::endl;
    }

    return 0;
}
