#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void currentaccount(int currentbalance);
void savingsaccount(int savingsbalance);
void stockandshareisa(void);
void cashisa(void);
void regularsavingsaccount(void);
int currentbalance=500;
int savingsbalance=500;
int stransferamount=0;
int ctransferamount=0;
int main()

{

    int testid=201456;
    int testpin=5062;
    int idattempts=0;
    int pinattempts=0;
    int userid;
    int pin;
    char option;
    int second;
    char address[20];
    char wishes;
    char choices;
    int newpin;
    char name[10];
    int date;
    int month;
    int year;
    int amountwithdrawal;
    int amountdeposit;
    char mainselection;
    char registeredname[30];
    char DOB[10];
    int registereduserid;
    int registeredpassword;
    char preselection;
    char postselection;
    int preattempt;
    int postattempt;
    int registeredidattempts;
    int passwordattempts;
    int newuserid;
    int password;
    char *p,*o;
    int *q,*s;
    p=&preselection;
    o=&postselection;
    q=&registereduserid;
    s=&registeredpassword;






     printf("Welcome to the Assurance Bank! One of the best bank in the UK for students.\n\n");

     printf("\npress A- login using the credentials before");
     printf("\npress B- register a new account\n");
     scanf("%c",&mainselection);
     switch(mainselection)
     {
        case 'A':
          printf("\nyou want to login using previous credentials");

          for(idattempts=0;idattempts<3;idattempts++)
          {
            printf("\nEnter your userID:- ");
            scanf("%d",&userid);
            if(userid==testid)
            {
              printf("\nyour user id is correct! \n\nYou've successfully completed your first milestone!\n\n");
              // scanf("%d",&userid);
              printf("Now you're now one step away from reaching your goal!A\n\n");
              do
              {
                printf("Enter your pin:- ");
                scanf("%d",&pin);
                if(pin==testpin)
                {
                  printf("\nYour pin is correct! \n\nYou have successfully logged into your account.\n");
                  do
                  {
                    do
                    {
                      printf("\nPress A to update information, Press B to know current account details, Press C to know savings account details and press D to exist\n");
                      scanf(" %c",&option);
                      switch(option)
                      {
                        case 'A':
                        do
                        {
                          printf("\nselect 1 to change your pin number, select 2 to update or enter your account details, select 3 to exist\n");
                          scanf(" %d", &second);
                          switch(second)
                          {
                            case 1:
                            do
                            {
                              printf("\npress A to change your pin number, Press B if you're not interested and want to exist\n");
                              scanf(" %c",&wishes);
                              switch(wishes)
                              {
                                case 'A':
                                printf("\nenter your new pin\n");
                                scanf("%d",&newpin);
                                if(newpin>999&&newpin<9999)
                                {
                                  printf("\nyour new pin is: %d\n",newpin);
                                }
                                else
                                {
                                  printf("\nSorry! your pin can't be set as it has exceeded the current limit of 4 digit\n");
                                }
                                break;
                                case 'B':
                                printf("\nyou don't want to change the pin and want to exist\n");
                                break;
                                default :
                                printf("\nthe value is invalid\n");
                                break;
                              }
                            }while(wishes !='B');
                            break;
                            case 2:
                            do
                            {
                              printf("\nPress A to enter your name, press B to enter your address, press C to enter your DOB in digit, press D to exist\n");
                              scanf(" %c",&choices);
                              switch(choices)
                              {
                                case 'A':
                                printf("\nenter your name\n");
                                scanf(" %s",&name);
                                printf("\nyour entered name is %s\n",name);
                                break;
                                case 'B':
                                printf("\nenter your address\n");
                                scanf(" %s",&address);
                                printf("\nyour entered address is %s\n",address);
                                break;
                                case 'C':
                                printf("\nenter your DOB in this format: dd/mm/yyyy\n");
                                scanf("%d/%d/%d", &date,&month,&year);
                                printf("\nyour DOB is: %d/%d/%d\n",date,month,year);
                                break;
                                case 'D':
                                printf("\nyou want to exist\n");
                                break;
                                default:
                                printf("\nyour value is invalid\n");
                                break;
                              }
                            }while(choices!='D');
                            break;
                            case 3:
                            printf("\nyou want to exist\n");
                            break;
                            default:
                            printf("\ninvalid option\n");
                          }
                        }while(second!=3);
                        break;

                        case 'B':
                        printf("\nyour current account details is here\n");
                        currentaccount(currentbalance);
                        break;
                        case 'C':
                        printf("\nyour savings account details is here\n");
                        savingsaccount(savingsbalance);
                        break;
                        case 'D':
                        printf("\nyou want to exist\n");
                        break;
                        default:
                        printf("\nnot a valid option\n");
                        break;
                      } 
                    }while(option !='D');
                    return 0;
                  }while(pin==testpin);
                }
                else
                {
                  printf("\nYour pin is incorrect! \n\nTry once again.\n");
                }
              }while(pinattempts<3);
              
              printf("Sorry but your account has been blocked for security reasons.\n\n");
              return 0;
          
            }
            else
            {
              printf("\nunfortunately your pin is incorrect. \n\n");
              pinattempts++;
            }

          }
          printf("\nunfortunately your user id is incorrect. \n\n");

        case 'B':
            printf("\nyou want to register a new account");
            printf("\nenter your full name,give a space between first and last name\n");
            fflush(stdin);
            gets(registeredname);
            printf("\nyour name is %s",registeredname);
            printf("\nenter your date of birth, give a '/' between date, month and year\n");
            gets(DOB);
            printf("\nenter your userid\n");
            scanf("%d",&registereduserid);
            printf("\nenter your password\n");
            scanf("%d",&registeredpassword);
            for(preattempt=0;preattempt<2;preattempt++)
             {
                printf("\npress A-opening an ISA account");
                printf("\npress B-opening a regular savings account");
                printf("\npress C-want to exit\n");
                scanf(" %c",&preselection);
                fflush(stdin);
                switch(preselection)
                {

                 case 'A':
                        printf("\nyou want to open an ISA account");
                        printf("\npress A- open stock and share ISA which is tax efficient investment policy to multiple ventures");
                        printf("\npress B- open a cash ISA which is tax free lifetime savings account\n");
                        scanf(" %c",&postselection);

                        switch(postselection)
                        {
                        case 'A':
                            printf("\nyou want to open a stock and share ISA\n");
                            stockandshareisa();
                            break;
                        case 'B':
                            printf("\nyou want to open a cash ISA\n");
                            cashisa();
                            break;
                        default:
                            printf("\nnot a valid option");
                            break;
                        }
                        break;
                    case 'B':
                          printf("\nyou want to open a regular savings account\n");
                          regularsavingsaccount();
                          break;
                    case 'C':
                           printf("\nyou want to exit");
                           break;
                    default:
                        printf("\nnot a valid option");
                        break;

                }
              }
}}
//      for(registeredidattempts=0;registeredidattempts<3;registeredidattempts++)
//      {
//          printf("\nenter your userid\n");
//          scanf("%d", &newuserid);
//          if(newuserid==*q)
//             {
//             printf("\nyour userid is correct");
//          do
//          {
//              printf("\nenter your password\n");
//              scanf("%d", &password);
//              if(password==*s)
//              {
//                  printf("\nyour password is correct");
//                  while(*s==password)
//                  {
//                  if(*p=='B')
//                  {
//                    printf("\nyou have successfully opened your regular savings account\n");
//                    regularsavingsaccount();
//                    break;
//                  }
//                  else if(*o=='A')
//                  {
//                    printf("\nyou have successfully opened your stock and share ISA\n");
//                    stockandshareisa();
//                    break;
//                  }
//                  else if(*o=='B')
//                    {
//                     printf("\nyou have successfully opened your cash ISA\n");
//                     cashisa();
//                     break;
//                  }
//                  else
//                  {
//                      printf("\ninvalid option");
//                  }
//              }}
//              else
//                 {
//                 printf("\nyour password is incorrect");
//              }
//          }
//          while(passwordattempts<3);
//          return 0;
//          }
//          else
//          {
//            printf("\nyour userid is incorrect");
//          }
//      }
// }

void currentaccount(int currentbalance)
  {

      int anothertransaction=1;
      while(anothertransaction==1)
      {
      int option;
      printf("\npress 1- Display balance");
      printf("\npress 2- Make a withdrawal");
      printf("\npress 3- Deposit money");
      printf("\npress 4- transfer amount to savings account");
      printf("\npress 5- if you want to exit\n");
      scanf("%d",&option);

      if(option==1)
      {
        printf("\nyour balance is $%d", currentbalance);
      }
      else if(option==2)
      {
        int amountwithdrawal;
        printf("\nhow much money do you want to withdraw from your account?\n");
        scanf("%d",&amountwithdrawal);
        currentbalance-=amountwithdrawal;
        if(currentbalance>=0)
        {
            printf("\nyou have successfully withdrawn money from your current account");
        }
        else
        {
            printf("\nI'm really sorry!you don't have enough fund to withdraw from");
        }
      }
     else if(option==3)
        {
        int amountdeposit;
        printf("\nhow much money do you want to deposit?\n");
        scanf(" %d",&amountdeposit);
        currentbalance+=amountdeposit;
        }
    else if(option==4)
        {
        printf("\nhow much money do you want to transfer to your savings account?\n");
        scanf("%d",&ctransferamount);
        currentbalance-=ctransferamount;
        savingsbalance+=ctransferamount;
        if(currentbalance>=0)
        {
          printf("\nyou have successfully transferred your fund to your savings account");
        }
        else
        {
          printf("\nI'm sorry! but you don't have enough fund to transfer");
        }
        }
    else if(option==5)
        {
        printf("\nyou want to exit");
        }
    else
        {
        printf("\nnot a valid option");
        }
      anothertransaction=0;
      while(anothertransaction !=1 && anothertransaction!=2)
      {
      printf("\ndo you want to make another transaction");
      printf("\npress 1- yes or press 2- no\n");
      scanf("%d",&anothertransaction);
      }
  }
  }
 void savingsaccount(int savingsbalance)
  {

      int anothertransaction=1;
      while(anothertransaction==1)
      {
      int option;
      printf("\npress 1- Display balance");
      printf("\npress 2- Make a withdrawal");
      printf("\npress 3- Deposit money");
      printf("\npress 4- transfer amount to current account");
      printf("\npress 5- if you want to exit\n");
      scanf("%d",&option);

      if(option==1)
      {
        printf("\nyour balance is $%d", savingsbalance);
      }
      else if(option==2)
      {
        int amountwithdrawal;
        printf("\nhow much money do you want to withdraw from your account?\n");
        scanf("%d",&amountwithdrawal);
        savingsbalance-=amountwithdrawal;
        if(savingsbalance>=0)
        {
            printf("\nyou have successfully withdrawn money from your savings account");
        }
        else
        {
            printf("\nI'm really sorry!you don't have enough fund to withdraw from");
        }
      }
     else if(option==3)
        {
        int amountdeposit;
        printf("\nhow much money do you want to deposit?\n");
        scanf(" %d",&amountdeposit);
        savingsbalance+=amountdeposit;
        }
    else if(option==4)
        {
        printf("\nhow much money do you want to transfer to your current account?\n");
        scanf(" %d",&stransferamount);
        savingsbalance-=stransferamount;
        currentbalance+=stransferamount;
        if(savingsbalance>=0)
        {
          printf("\nyou have successfully transferred your fund to your current account");
        }
        else
        {
          printf("\nI'm sorry! but you don't have enough fund to transfer");
        }
        }
    else if(option==5)
        {
        printf("\nyou want to exit");
        }
    else
        {
        printf("\nnot a valid option");
        }
      anothertransaction=0;
      while(anothertransaction !=1 && anothertransaction!=2)
      {
      printf("\ndo you want to make another transaction");
      printf("\npress 1- yes or press 2- no\n");
      scanf("%d",&anothertransaction);
      }
  }
  }
  void cashisa(void)
  {
      printf("no interest rate needed");
  }
  void stockandshareisa(void)
  {
      printf("only 2%%  interest rate to invest anywhere!");
  }
  void regularsavingsaccount(void)
  {
      printf("a monthly 1 pound charge is needed.");
  }



