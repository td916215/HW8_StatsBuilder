#ifndef DATAANALYSIS_H_INCLUDED
#define DATAANALYSIS_H_INCLUDED

#define MAX_DATA 5

void giveHighest(float numbers[MAX_DATA]);
void giveLowest(float numbers[MAX_DATA]);
void giveAverage(float numbers[MAX_DATA]);
void giveSum(float numbers[MAX_DATA]);

int topNumber;

void giveHighest(float numbers[MAX_DATA])
{
    float highest = 0;
    int i;

    // Increment: if the array number is higher than the current highest, declare it as the new highest.
    for (i = 0; i < MAX_DATA; i++)
    {
        if (highest < numbers[i])
        {
            highest = numbers[i];
        }
    }

    topNumber = highest;

    printf("Highest Number: %.2f\n", highest);
}

void giveLowest(float numbers[MAX_DATA])
{
    float lowest = topNumber;
    int i;

    // Increment: if the array number is lower than the current lowest, declare it as the new lowest.
    for (i = 0; i < MAX_DATA; i++)
    {
        if (lowest > numbers[i])
        {
            lowest = numbers[i];
        }
    }

    printf("Lowest Number: %.2f\n", lowest);
}

void giveAverage(float numbers[MAX_DATA])
{
    int numberCount = MAX_DATA;

    int i;
    float total = 0;

    for (i = 0; i < MAX_DATA; i++)
    {
        total = total + numbers[i];
    }

    float average;
    average = total / numberCount;

    printf("Average: %.2f\n", average);
}

void giveSum(float numbers[MAX_DATA])
{
    int i;
    float sum = 0;

    for (i = 0; i < MAX_DATA; i++)
    {
        sum = sum + numbers[i];
    }

    printf("Sum: %.2f\n", sum);
}

#endif // DATAANALYSIS_H_INCLUDED
