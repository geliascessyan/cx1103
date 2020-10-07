#include <stdio.h>

int main()
{
    int studentNumber=-1,mark=-1;

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
            case 0 ... 44:
                printf("Grade = F");
                break;
            default:
                printf("Unrecognised value");
        }
        printf("\n\n");
        studentNumber = -1;
        printf("Enter Student ID: ");
        scanf("%d", &studentNumber);
    };

    printf("\n");
    printf("End of program\n");

    return 0;
}
