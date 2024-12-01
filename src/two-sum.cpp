#include <iostream>
#define ARRAY_SIZE 5

bool two_sum(
	const int nums[ARRAY_SIZE],
	const int target,
	std::size_t& index0,
	std::size_t& index1
)
{
	unsigned int kolvo_par = 0;
	bool proverka_par = false;
	for (unsigned int i = 0; i <= ARRAY_SIZE - 1; i++)
	{
		for (unsigned int j = i + 1; j <= ARRAY_SIZE; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				kolvo_par++;
				if (kolvo_par == 1)
				{
					index0 = i;
					index1 = j;
					//return true;
				}
				else index1 = j;
			 proverka_par = true;
			}
		}
	}
	if (proverka_par) 
	{
		return true;
	}
	else 
	{	
		return false;
	}
}
