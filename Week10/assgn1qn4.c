	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#define MAX 10
void initialize(int *size, int ar[]);
void insert(int max, int *size, int ar[], int num);
void iremove(int *size, int ar[], int num);
void display(int size, int ar[]);
int main()
{
   int  option = 0;
   int  num, ar[MAX], size = 0;
 
   printf("Please select an option: \n");
   printf("(1) Initialize the array \n");
   printf("(2) Insert an integer \n");
   printf("(3) Remove an integer \n");
   printf("(4) Display the numbers stored in the array \n");
   printf("(5) Quit \n");
   do {
      printf("Enter your choice: \n");
      scanf("%d", &option);
      switch (option) {
         case 1:
            initialize(&size, ar);
            break;            
         case 2:
            printf("Enter an integer: \n");
            scanf("%d", &num);
            insert(MAX, &size, ar, num);
            break;            
         case 3:
            printf("Enter the integer to be removed: \n");
            scanf("%d", &num);
            iremove(&size, ar, num);
            break;          
         case 4:
            display(size, ar);
            break;         
         default:
            break;
      }         
   } while (option < 5);
   return 0;
}
void display(int size, int ar[]) 
{
   int i;
   
   printf("The %d numbers in the array: \n", size);
   for(i = 0; i < size; i++) 
      printf("%d ", ar[i]);
   printf("\n");
   
}
void initialize(int *size, int ar[]) 
{
    int total, i, num;

    printf("Enter the total number of integers (MAX=%d): \n", MAX);
    scanf("%d", &total);
    (*size) = 0;
    printf("Enter the integers: \n");
    for (i = 0; i < total; i++) {
        scanf("%d", &num);
        insert(MAX, size, ar, num);
    } 
}
void insert(int max, int *size, int ar[], int num) 
{
    //if full
    if (*size == max) {
        printf("The array is full\n");
    //if not full
    } else {
        int n, temp;
        //find insertion index and push back larger integers
        for (n = 0; n < *size; n++) {
            if (num <= ar[n]) {
                temp = ar[n];
                ar[n] = num;
                num = temp;
            }
        }
        //insert largest integer in index+1
        ar[*size] = num;
        (*size)++;
    }
}
void iremove(int *size, int ar[], int num) 
{
    //if empty
    if (*size == 0) {
        printf("The array is empty\n");
    // if not empty
    } else {
        int n = 0, fin = 0;
        //find integer
        while (!fin && (n < *size)) {
            if (num == ar[n]) {
                (*size)--;
                fin = 1;
            }
            n++;
        }
        //if found, remove integer
        while (fin && (n < *size)) {
            ar[n] = ar[n+1];
            n++;
        }
        //print message
        switch (fin) {
            case 0:
                printf("The number is not in the array\n");
                break;
            case 1:
                printf("The integer is removed\n");
                break;
        }
    }
}