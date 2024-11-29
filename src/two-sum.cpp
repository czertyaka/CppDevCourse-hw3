#include <cstddef>  // Для std::size_t
#include <limits>   // Для std::numeric_limits

#define ARRAY_SIZE 5

bool two_sum(
    const int nums[ARRAY_SIZE],
    const int target,
    std::size_t& index0,
    std::size_t& index1
) {
    // Проходим по всем элементам массива nums
    for (std::size_t i = 0; i < ARRAY_SIZE; ++i) {
        for (std::size_t j = i + 1; j < ARRAY_SIZE; ++j) {
            // Если сумма элементов равна target
            if (nums[i] + nums[j] == target) {
                // Меньший индекс сохраняем в index0, больший — в index1
                if (i < j) {
                    index0 = i;
                    index1 = j;
                } else {
                    index0 = j;
                    index1 = i;
                }
                return true;
            }
        }
    }
    return false; // Если не нашли такую пару
}
