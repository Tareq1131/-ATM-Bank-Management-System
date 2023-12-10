#include<stdio.h>
#include<conio.h>

int main()

{
    float draw,dep,transfer,help;

    float balance=0;

    int account1,account,pin;
    int b, type;
    int transaction=1;




    printf("\n\n");

            printf("\n\t____________________________________________________________\n");

    printf("\n\t\t                ***NUB COMMERCIAL BANK***               \n");

    printf("\n\t____________________________________________________________________\n\n");

            printf("\t\t\t--------Welcome to our ATM service---------------\n\n\n");

             system("color 5b");





    printf("\n\t\tEnter Personal identification number [PIN] : ");
    scanf("%d",&pin);

   if (pin-=1212)



{
    printf("\t\t\thank you!!!!\n\n");

    system("cls");

}
   printf("\n\t\tPlease enter your correct [PIN] : ");
   scanf("%d",&pin);

if (pin==1212)

{

    system("cls");
    printf("\n invalit passward \n\n");
}



else
//{
    //printf("\t\t\tinvalid Password!!!!\n\n");

    return(0);

//}






    while(transaction==1)
    {
        int option;

         system("color 4b");
        system("cls");

        printf("\n what you want to do\n");

        printf("\t\t\t1-Balance information\n");
        printf("\t\t\t2-Deposit\n");
        printf("\t\t\t3-withdraw\n");
        printf("\t\t\t4-transfer\n");
        printf("\t\t\t5-help\n");

        printf("\n--***Please enter your option***--\n");
        scanf("%d",&  option);

        switch(option)
        {
        case 1:

            system("color 3b");

            printf("\t\t\t-**BALANCE INFORMATION**-\n\n");
            printf("your current balance is :%.2fRs\n",balance);
            printf("---**THANK YOU**--\n");

            break;

        case 2:

            system("color 9b");

            printf("\n\t\t\t-DEPOSIT AMMOUNT-\n\n");
            printf("how much money do you went to deposit....");
            scanf("%f",&dep);

            if(dep>0&&dep<=20000)
            {
                printf("\nyour %.2fRs deposited in your account \n\n",dep);
                balance+=dep;
            }

            else if(dep>20000)
            {
                printf("\nyou can't deposit that much amount in one time:\n\n");

            }

            else
            {
                printf("\ninvalid deposit amount\n");
            }
            printf("\n ****Thank you***\n\n");

            break;

        case 3:

            system("color 1b");

            printf("\n\t\t-WITHDRAW AMMOUNT-\n\n");
            printf("how much money do you want to withdraw :");
            scanf("%f",&draw);

            if(draw<=balance && draw<=20000)
            {
                printf("\nyou just withdraw % .2fRs\n\n",draw);
                balance-=draw;
            }

            else if(draw>20000)

            {
                printf("\nyou can't withdraw that much amount in time.\n\n");

            }

            else

            {
                printf("\nyou don't have enough money\n\n");
            }

            printf("\n***THANK YOU***\n\n");

            break;

        case 4:

            system("color 2b");

            printf("\t\t\t--TRANSFER AMOUNT--\n\n");

            printf("\n\t\tAccount you want to transfer\n ");
            scanf("%d",&account1);

            printf("\nhow much account?\n");
            scanf("%f",&transfer);


            if(balance>=transfer)
            {
              printf("\nyour %.2fRs successfully transfered\n\n",transfer);
              balance-=transfer;
            }
            else
            {
                printf("\nyou do not have sufficient balance\n\n");
            }
            printf("\n****THANK YOU***\n\n");

            break;

             case 5:

                system("cls");

               printf("\n please  call 121 and tell about your problem \n", help);
               printf("\n ***THANK YOU***\n\n");

               break;

        default:

            printf("invalid transaction\n ");

        }
        transaction=0;
        while(transaction!=1&&transaction!=2)

        {
            printf("do you want to do another transaction\n");
            printf("1.yes 2.no\n");
            scanf("%d",&transaction);

            if(transaction!=1&&transaction!=2)

            {
                printf("Invalid no. \nchoose between 1 and 2 only\n ");
            }
        }
    }


    printf("\t\t\t    -----------\n\n");

     printf("\n\n");

            printf("\n\t___________________________________________________________________\n");

    printf("\n\t\t                ***NUB COMMERCIAL BANK***               \n");

    printf("\n\t____________________________________________________________________\n\n");

            printf("\t\t\t--------Welcome to our ATM service---------------\n\n\n");
            system("color 6b");

    printf("\t\t\tDate :3/5/17\t Time :10.30 Am\n");
    //printf("\n\n\t\t\t your name :%s\n\n",name);

    printf("\t\t\tYour pin no: %d\n\n",pin);

    if(dep>=0&&dep<20000)

    {
        printf("\t\t\tYou have deposited %.2fRs\n",dep);
    }

    else
    {
        printf("\t\t\tyou have deposited 0Rs\n");
    }

    if(draw>0&&draw<=20000&&draw<=balance)

    {
     printf("\t\t\tyou have withdraw %.2fRs\n",draw);
    }

    else
    {
        printf("\t\t\tyou have withdraw 0Rs\n");
    }


    if(transfer>0&&transfer<=20000&&transfer<=balance)

    {
        printf("\t\t\tyou have transfered %.2f Rs\n",transfer);
    }

    else
    {
        printf("\t\t\tyou have transfered 0Rs\n");
    }

    printf("\t\t\tyour current balance is :%.2fRs\n",balance);

    printf("\n\n THANK YOU FOR USING OUR ATM SERVICES\n");
    printf("\n\n");
   // printf("programming done by GROUP 3 ");

    getch();
    return (0);

}
