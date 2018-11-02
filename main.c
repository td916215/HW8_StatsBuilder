#include <stdio.h>
#include <stdlib.h>

#include "DataAnalysis.h"
#define MAX_DATA 5

int main()
{
    float dataSet[MAX_DATA];
    int i = 0;

    while (i < MAX_DATA)
    {
        printf("Enter your data: ");

        float data;
        scanf("%f", &data);

        dataSet[i] = data;

        i++;
    }

    giveHighest(dataSet);
    giveLowest(dataSet);
    giveAverage(dataSet);
    giveSum(dataSet);

    return 0;
}
