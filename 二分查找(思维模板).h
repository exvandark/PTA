#include <stdio.h>

int search(int max, int min,int key)
{
	
	int mid;

	for (;max>min;)
	{
		mid = (max + min) / 2;
		if (key > mid)
		{
			min = mid + 1;
		}
		else if(key<mid)
		{
			max = mid - 1;
		}
		else
		{
			return mid;
		}
	}


}