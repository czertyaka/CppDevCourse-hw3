#include "two-sum.hpp"

bool two_sum(const int nums[ARRAY_SIZE],
	const int target,
	std::size_t& index0,
	std::size_t& index1
)
{
	for (unsigned int i = 0; i < ARRAY_SIZE; i++)
	{
		for (unsigned int j = i + 1; j <= ARRAY_SIZE; j++)
		{
			if (nums[i] + nums[j] == target)
			{
					index0 = i;
					index1 = j;
					return true;
			}
		}
	}
	return false;
}
