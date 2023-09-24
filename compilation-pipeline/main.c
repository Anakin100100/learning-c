#include <stdio.h>
#include "avg.h"

int main(int argc, char **argv)
{
    int nums[4] = {1,
                   2,
                   3,
                   4};
    printf("Normal average: %f\n", avg(nums, 4, NORMAL));
    printf("Squared average: %f\n", avg(nums, 4, SQUARED));

    return 0;
}