#include<iostream>
using namespace std;
#include "two-sum.hpp"

bool two_sum(const int nums[ARRAY_SIZE], const int target, size_t& index0, size_t& index1)
{
	bool retSum = false;
	for (int i = 0; i < ARRAY_SIZE; ++i)
	{
		for (int j = 0; j < ARRAY_SIZE; ++j)
		{
			if ((nums[i] + nums[j] == target) && i != j)
			{
				retSum = true;
				index0 = j;
				index1 = i;
				break;
			}
		}
	}
	return retSum;
}