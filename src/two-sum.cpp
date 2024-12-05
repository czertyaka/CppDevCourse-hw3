#include "two-sum.hpp"
#include <cstddef>

bool two_sum(const int nums[ARRAY_SIZE], const int target, std::size_t& index0, std::size_t& index1) {
    for (std::size_t i = 0; i < ARRAY_SIZE; ++i) {
        for (std::size_t j = i + 1; j < ARRAY_SIZE; ++j) {
            if (nums[i] + nums[j] == target) {
                index0 = i;
                index1 = j;
                return true;
            }
        }
    }
    return false;
}
