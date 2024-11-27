#ifndef TWO_SUM_HPP
#define TWO_SUM_HPP

#include <cstddef> // Для std::size_t

#define ARRAY_SIZE 5

bool two_sum(
    const int nums[ARRAY_SIZE], // Входной массив
    const int target,           // Целевое значение
    std::size_t& index0,        // Первый индекс (выходной параметр)
    std::size_t& index1         // Второй индекс (выходной параметр)
);

#endif // TWO_SUM_HPP