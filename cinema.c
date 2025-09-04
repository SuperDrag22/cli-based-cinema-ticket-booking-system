#include <stdio.h>

int main(){
    int type, ticket_t=0, run=1, err=0;
    float total=0.0, dis_total=0.0, n1=0.0 ,n2=0.0 ,n3=0.0, no_t, bill=0.0;
    char ch = 'Y';

    printf("\n:--CINEMA TICKET BOOKING SYSTEM--:");
    
    printf("\n\nSelect the ticket type!\n\n");
    printf("1. Premium Seat - 200\n2. Standard Seat - 150\n3. Economy Seat - 100\n4. Exit\n");

    while(run){
        printf("\nChoose type: ");
        scanf(" %d",&type);
        
        if (type<1||type>4){
            printf("\nWrong input! Terminating.\n");
            err = 1;
            break;
        }
        else if (type==4){
            printf("Exiting...\n");
            break;
        }

        printf("\nHow many tickets do you want for your preferred choice?\n");
        printf("Enter no. of tickets: ");
        scanf("%f",&no_t);

        switch (type){
        case 1:
            n1 = no_t;
            total = 200*n1;
            bill += total;
            ticket_t += n1;
            break;
        case 2:
            n2 = no_t;
            total = 150*n2;
            bill += total;
            ticket_t += n2;
            break;
        case 3:
            n3 = no_t;
            total = 100*n3;
            bill += total;
            ticket_t += n3;
            break;
        }

        printf("\nContinue? (Y/N): ");
        scanf(" %c",&ch);

        if (ch=='Y'||ch=='y'){
            run = 1;
        }
        else if (ch=='N'||ch=='n'){
            run = 0;
        }
        else{
            printf("Wrong Input! Program Terminated.\n\n");
            err = 1;
            break;
        }
    }
    if (err!=1){
        printf("Total tickets: %d",ticket_t);
        printf(" ----> Total Bill: %.2f",bill);
    }
    
    if (ticket_t>=5){
        dis_total = bill - (bill*0.05);
        printf("\nDiscounted price (5%% off): %.2f\n",dis_total);
    }
    
    return 0;
}
