#include "two-sum.hpp"
#include <unordered_map>

#define ARRAY_SIZE 5

bool two_sum(
    const int nums[ARRAY_SIZE],
    const int target,
    std::size_t& index0,
    std::size_t& index1
) {
    std::unordered_map<int, std::size_t> numMap;

    for (std::size_t i = 0; i < ARRAY_SIZE; i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            index0 = numMap[complement];
            index1 = i;
            return true; // Нашлись два числа
        }
        numMap[nums[i]] = i;
    }

    return false; // Решения не нашлось
}