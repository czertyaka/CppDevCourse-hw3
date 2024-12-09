#include "two-sum.hpp"

bool two_sum(
    const int nums[ARRAY_SIZE],
    const int target,
    std::size_t& index0,
    std::size_t& index1
) {
    std::unordered_map < int, std::size_t > container;
    // Объявляет хэш-таблицу и создает пустой контейнер. 
    for (std::size_t i = 0; i < ARRAY_SIZE; ++i) {
        int complement = target - nums[i];
        if (container.find(complement) != container.end()) {
            index0 = container[complement];
            index1 = i;
            return true;
        }
        container[nums[i]] = i;
    }
    return false;
}
/*Использовал хэш таблицу для сокращения асимптотической сложности до O(n), 
так как поиск в хэш-таблице выполняется за O(1)*/
