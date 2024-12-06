#ifndef TWO_SUM_HPP
#define TWO_SUM_HPP

#include <cstddef> // Добавьте эту строку

#define ARRAY_SIZE 5

bool two_sum(
	const int nums[ARRAY_SIZE],
	const int target,
	std::size_t& index0,
	std::size_t& index1);

#endif // TWO_SUM_HPP
