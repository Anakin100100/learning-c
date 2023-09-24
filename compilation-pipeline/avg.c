#include <stdio.h>
#include "avg.h"

double avg(int *nums, int size, avg_type_t t)
{
    double result;

    for (size_t i = 0; i < size; i++)
    {
        if (t == NORMAL)
        {
            result += nums[i];
        };
        if (t == SQUARED)
        {
            result += nums[i] * nums[i];
        };
    }

    return result / size;
};
