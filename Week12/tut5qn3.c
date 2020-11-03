#include <stdio.h>

#define divider "------------------------------------------\n"

typedef struct {
    int id;           /* staff identifier */
    int totalLeave;   /* the total number of days of leave allowed */
    int leaveTaken;   /* the number of days of leave taken so far */
} leaveRecord;

void getInput(leaveRecord list[ ], int *n); 
int mayTakeLeave(leaveRecord list[ ], int id, int leave, int n); 
void printList(leaveRecord list[ ], int n);  

/*------------------------------(Main Program)------------------------------*/
int main() {
    leaveRecord list[10]; int n, i, choice = 1;

    /*Print Menu*/
    puts("Menu");
    puts("1: Input Records");
    puts("2: Apply for Leave");
    puts("3: View Records");
    puts("4: Exit");

    while (choice < 4) {
        /*Get User Input*/
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("%s", divider);

        switch (choice) {
            case 1: //Input Records
                getInput(list, &n);
                break;
            case 2: { //Apply for Leave
                int id, leave;
                puts("Enter ID & Leave Applied: ");
                scanf("%d%d", &id, &leave);
                switch (mayTakeLeave(list, id, leave, n)) {
                    case -1:
                        puts("ID not found!");
                        break;
                    case 0:
                        puts("Not Approved!");
                        break;
                    case 1:
                        puts("Approved!");
                        break;
                    default:
                        break;
                }
                break;
            }
            case 3: //View Records
                printList(list, n);
                break;
            default:
                break;
        }
    }
    /*Exit Program*/
    puts("Shutting Down ...");
    return 0;
}

/*------------------------------(a)------------------------------*/
void getInput(leaveRecord list[ ], int *n) {
    *n = 0;
    while (1) {
        /*Get User Input*/
        printf("Input %d (Enter -1 to end input):\n", *n);
        puts("Enter ID, Total Leaves & Leaves Taken:");

        scanf("%d", &list[*n].id);
        if (list[*n].id == -1) break; //End input if input is -1
        scanf("%d %d", &list[*n].totalLeave, &list[*n].leaveTaken);
        printf("%s", divider);
        (*n)++;
    }
    printf("%s", divider);
}

/*------------------------------(b)------------------------------*/
int mayTakeLeave(leaveRecord list[ ], int id, int leave, int n) {
    int i;

    /*Find ID*/
    for (i=0; i<n; i++) {
        if (list[i].id == id) {
            if (leave + list[i].leaveTaken <= list[i].totalLeave) return 1; //approved
            return 0; //not approved
        }
    }

    return -1; //ID not found
}

/*------------------------------(c)------------------------------*/
void printList(leaveRecord list[ ], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("ID = %d, ", list[i].id);
        printf("Total Leaves = %d, ", list[i].totalLeave);
        printf("Leaves Taken = %d\n", list[i].leaveTaken);
    }
}

