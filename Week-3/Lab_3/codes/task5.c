#include <stdio.h>
#include <unistd.h>

int main(){
    int choice;
    printf("Current PID: %dn", getpid());

    printf("Do you want to continue? (1 for yes, 0 for NO): ");
    scanf("%d", &choice);

    if(choice == 1) {
     printf("Continuing...\n");
     sleep(5);
     return 0;
   }else{
    printf("Existing...\n");
    return 1;
   }

}
