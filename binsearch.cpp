#include <vector>
#include "search.h"

bool binarySearch(const std::vector<int>& set, int value)
{
	size_t left = 0;
	size_t right = set.size();
	
	while(left < right)
	{
		size_t mid = (left + right)/2;

        	if  (set[mid] == value)
                	return true;
        	if (left == right)
                	return false;

        	if (set[mid] > value)
        	{
        		//value in left side
                	right = mid;
        	}
        	else
        	{
                	//value in right side
                	left = mid + 1;
        	}
	}
	return false;
}

bool binarySearch(const int *begin, const int *end, int value)
{
	while(begin < end)
	{
		const int *mid = begin + (end - begin) / 2;
		if (mid == end)
			return false;	
		if (*mid == value)
			return true;
		if (*begin == *end)
			return false;

		if (*mid > value)
                {
                        //value in left side
                        end = mid;
                }
                else
                {
                        //value in right side
                        begin = mid + 1;
                }

	}
	return false;
}

bool binarySearchrecursive(const int *begin, const int *end, int value)
{
                const int *mid = begin + (end - begin) / 2;
                if (mid == end)
                        return false;
                if (*mid == value)
                        return true;

		else if(*mid > value)
                {
                        //value in left side
                        end = mid;
                }
                else
                {
                        //value in right side
                        begin = mid + 1;
                }


        return binarySearchrecursive(begin, end, value);
}
