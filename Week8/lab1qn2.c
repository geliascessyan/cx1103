#include <stdio.h>

int main()
{
    int maxLines, currentLine=1, value, sum, count;
    float average;
    printf("Enter number of lines:\n");
    scanf("%d", &maxLines);

    while (currentLine <= maxLines)
    {
        sum = count = 0;
        printf("Enter line %d (end with -1):\n", currentLine);
        scanf("%d", &value);
        while (value != -1)
        {
            sum += value;
            count++;
            scanf("%d", &value);
        }
        average = (float)sum/count;
        printf("Average = %.2f\n", average);
        currentLine++;
    }
    return 0;
}