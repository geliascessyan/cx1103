#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
    char name[20];
    int telno;
} PhoneBk;

void printPB(PhoneBk *pb, int size);
int readin(PhoneBk *pb);
void search(PhoneBk *pb, int size, char *target);

int main() {
    PhoneBk s[MAX];
    char t[20], *p;
    int size=0, choice;
    char dummychar;
        
    printf("Select one of the following options: \n");
    printf("1: readin()\n");      
    printf("2: search()\n");
    printf("3: printPB()\n");
    printf("4: exit()\n");       
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:     
                scanf("%c", &dummychar);     
                size = readin(s);  
                break;
            case 2:  
                scanf("%c", &dummychar);   
                printf("Enter search name: \n");
                fgets(t, 20, stdin);   
                if (p=strchr(t,'\n')) *p= '\0';
                search(s,size,t);                    
                break;
            case 3:  
                printPB(s, size);
                break;          
        }
    } while (choice < 4);
    return 0; 
}

void printPB(PhoneBk *pb, int size) {
    int i;
    puts("The phonebook list:");
    if (!size) {
        puts("Empty phonebook");
    } else {
        for (i = 0; i < size; i++) {
            printf("Name: %s\n", (pb+i)->name);
            printf("Telno: %d\n", (pb+i)->telno);
        }
    }
}

int readin(PhoneBk *pb) {
    int n = 0; char *p;
    while (1) {

        /*Get Name*/
        puts("Enter name:");
        fgets((pb+n)->name, 30, stdin);   
        if (p=strchr((pb+n)->name,'\n')) *p= '\0';

        /*Check for exit prompt*/
        if (!(strcmp((pb+n)->name, "#"))) break;

        /*Get Telno*/
        puts("Enter tel:");
        scanf("%d",&(pb+n)->telno);
        while (getchar() != '\n');
        /*Increment Number of Entries*/
        n++;
    }
    return n;
}

void search(PhoneBk *pb, int size, char *target) {
    int i;

    if (!size) {
        puts("Empty phonebook");
    } else {
        int found = 0;
        for (i = 0; i < size; i++) {
            if (!(strcmp((pb+i)->name, target))) {
                found = 1;
                break;
            }
        }
        switch (found) {
            case 1:
                printf("Name = %s, ", (pb+i)->name);
                printf("Tel = %d\n", (pb+i)->telno);
                break;
            default:
                puts("Name not found!");
                break;
        }
    }
}