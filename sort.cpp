#include <iostream>
#include <vector>
#include "sort.h"


void bubblesort(int *begin, const int *end)
{
        for (int *i = begin; i !=  end; i ++)
        {
                for (int *k = i + 1; k != end; k++)
                {
                        if (*i < *k )
                        {
                                int temp = *i;
                                *i = *k;
                                *k = temp;
                        }
                }
        }
}
