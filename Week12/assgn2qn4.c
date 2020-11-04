	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
struct account {   
   struct
   {  
      char lastName[10];
      char firstName[10];
   } names;
   int accountNum;
   double balance;
};
void nextCustomer(struct account *acct);
void printCustomer(struct account acct);
int main()
{   
   struct account record;
   int flag = 0;

   do {  
      nextCustomer(&record);
      if ((strcmp(record.names.firstName, "End") == 0) &&
          (strcmp(record.names.lastName, "Customer") == 0))
         flag = 1;
      if (flag != 1)          
         printCustomer(record);
   } while (flag != 1);
}
void nextCustomer(struct account *acct)   
{  
    char *p;
    puts("Enter names (firstName lastName): ");
    scanf("%s", acct->names.firstName);
    scanf("%s", acct->names.lastName);
    
    /*Check for Exit Prompt*/
    if ((strcmp(acct->names.firstName, "End") == 0) &&
        (strcmp(acct->names.lastName, "Customer") == 0)) {
        /*Do nothing*/
    } else {
        puts("Enter account number: ");
        scanf("%d", &acct->accountNum);
        puts("Enter balance: ");
        scanf("%lf", &acct->balance);
    }
}
void  printCustomer(struct account acct)   
{  
    puts("Customer record: ");
    printf("%s ", acct.names.firstName);
    printf("%s ", acct.names.lastName);
    printf("%d ", acct.accountNum);
    printf("%.2lf\n", acct.balance);
}