#include <stdio.h>

int main()
{
    int studentNumber = 0,mark;

    printf("Enter Student ID: ");
    scanf("%d", &studentNumber);

    while (studentNumber != -1) 
    {
        printf("Enter Mark: ");
        scanf("%d", &mark);

        switch (mark) 
        {
            case 75 ... 100:
                printf("Grade = A");
                break;
            case 65 ... 74:
                printf("Grade = B");
                break;
            case 55 ... 64:
                printf("Grade = C");
                break;
            case 45 ... 54:
                printf("Grade = D");
                break;
            default:
                printf("Grade = F");
        }
        printf("\n\n");
        printf("Enter Student ID: ");
        scanf("%d", &studentNumber);
    }

    return 0;
}