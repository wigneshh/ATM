#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int passwordd;
int i,credit,debit,receiver_acctno,j,my_acctno,transfer_amt,new_pin;
float cibil_score,personal_loan_amount,personal_loan_interest,personal_loan_emi,personal_loan_tenure;
void bank_data();
void menu();
void start();
void check_balance();
void withdraw_money();
void deposit_money();
void transfer_funds();
void account_details();
void pinchange();
void loans();
void exitt();
void personal_loan();
void loan_emi();
struct accounts{
    char username[100],f_name[100],l_name[100],address[1000],gender[1000];
    int age,password,acct_number,aadhar_number,balance;
    float loan_amount;
}acc[5];
void main(){
  bank_data();
}
void bank_data(){
    //wig's acct
    acc[0].acct_number=51581;
    strcpy(acc[0].username,"mg");
    strcpy(acc[0].address,"6/9/6-GANDHI NAGAR,HANANMKONDA");
    acc[0].password=6226;
    strcpy(acc[0].f_name,"R");
    strcpy(acc[0].l_name,"VIGNESH");
    strcpy(acc[0].gender,"MALE");
    acc[0].age=69;
    acc[0].aadhar_number=1000;
    acc[0].balance=696969;
    acc[0].loan_amount=0;
    //sid's account 
    acc[1].acct_number=51580;
    strcpy(acc[1].username,"bc");
    strcpy(acc[1].address,"6/9/6-LANDH NAGAR,HANANMKONDA");
    acc[1].password=1234;
    strcpy(acc[1].f_name,"P");
    strcpy(acc[1].l_name,"SIDDARTHA");
    strcpy(acc[1].gender,"MALE");
    acc[1].age=25;
    acc[1].aadhar_number=19001;
    acc[1].balance=99999;
    acc[1].loan_amount=0;
    //shivani's acct
    acc[2].acct_number=51569;
    strcpy(acc[2].username,"cr");
    strcpy(acc[2].address,"6/9/69-GANDHI NAGAR,HANANMKONDA");
    acc[2].password=5678;
    strcpy(acc[2].f_name,"K");
    strcpy(acc[2].l_name,"SHIVANI");
    strcpy(acc[2].gender,"FEMALE");
    acc[2].age=45;
    acc[2].aadhar_number=1002;
    acc[2].balance=000001;
    acc[2].loan_amount=0;
    //umesh's acct
    acc[3].acct_number=51579;
    strcpy(acc[3].username,"topper");
    strcpy(acc[3].address,"6/9/6-GANDHI NAGAR,HANANMKONDA");
    acc[3].password=9950;
    strcpy(acc[3].f_name,"P");
    strcpy(acc[3].l_name,"UMESH");
    strcpy(acc[3].gender,"MALE");
    acc[3].age=56;
    acc[3].aadhar_number=123;
    acc[3].balance=123456;
    acc[3].loan_amount=0;
    //saketh's acct
    acc[4].acct_number=51561;
    strcpy(acc[4].username,"bc");
    strcpy(acc[4].address,"6/9/6-GANDHI NAGAR,HANANMKONDA");
    acc[4].password=6969;
    strcpy(acc[4].f_name,"CH");
    strcpy(acc[4].l_name,"SAKETH");
    strcpy(acc[4].gender,"X-MALE");
    acc[4].age=69;
    acc[4].aadhar_number=9004;
    acc[4].balance=69;
    acc[4].loan_amount=0;
    start();
}
void start(){ 
    printf("\n\t ENTER PASSWORD");
    scanf("%d",&passwordd);
    for(i=0;i<5;i++){
        if(acc[i].password == passwordd){
          menu();
        }
   }
   if(acc[i].password != passwordd){
    printf("\n\t INCORRECT PASSWORD! PLEASE ENTER CORRECT PASSWORD");
   }
}

    void menu(){ int choice;
     while(1){
    printf("\n\t WELCOME TO BANK EASE");
    printf("\n\t PLEASE ENTER YOUR CHOICE TO CLAIM OUR SERVICES");
    printf("\n\t 1.CHECK YOUR BALANCE");
    printf("\n\t 2.WITHDRAW MONEY");
    printf("\n\t 3.DEPOSIT MONEY");
    printf("\n\t 4.TRANSFER FUNDS");
    printf("\n\t 5.ACCOUNT DETAILS");
    printf("\n\t 6.PIN CAHNGE");
    printf("\n\t 7.LOANS");
    printf("\n\t 8.EXIT");
    scanf("%d",&choice);
    switch(choice){
        case 1: check_balance();
        break;
        case 2: withdraw_money();
        break;
        case 3: deposit_money();
        break;
        case 4: transfer_funds();
        break;
        case 5: account_details();
        break;
        case 6: pinchange();
        break;
        case 7: loans();
        break;
        default : printf("\nINVALID CHOICE! PLEASE ENTER CORRECT CHOCIE"); 
        break;
    }
    }
}
void check_balance(){

    printf("\n\tAVAILABLE BALANCE IN THE ACCOUNT =%d",acc[i].balance);
}

void withdraw_money(){ 
    printf("\n\tAVAILABLE BALANCE IN THE ACCOUNT =%d",acc[i].balance);
    printf("\n\t ENTER AMOUNT TO WITHDRAW");
    scanf("%d",&debit);
    if(acc[i].balance>debit){
        acc[i].balance=acc[i].balance-debit;
    }
    printf("\n\t REMAINING AMOUNT IN THE ACCOUNT=%d AFTER WITHDRAWING %d",acc[i].balance,debit);
    if(acc[i].balance<debit){
        printf("\n\t INSUFFICIENT FUNDS");
    }
}
void deposit_money(){
    printf("\n\t ENTER AMOUNT TO DEPOSIT:");
    scanf("%d",&credit);
    if(credit>0)
    {
        acc[i].balance=acc[i].balance+credit;
    }
    printf("\n\t AVAILABLE BALANCE IN THE ACCOUNT=%d",acc[i].balance);
}
void transfer_funds(){
    printf("\n\t ENTER YOUR ACCOUNT NUMBER");
    scanf("%d",&my_acctno);
    printf("\n\t ENTER PASSWORD");
    scanf("%d",&passwordd);
    for(i=0;i<5;i++)
    {
        if(my_acctno==acc[i].acct_number && acc[i].password == passwordd){
            for(j=0;j<5;j++){ 
                printf("\n\t ENTER RECIEVERS ACCOUNT NUMBER");
                scanf("%d",&receiver_acctno);
                if(receiver_acctno==acc[j].acct_number)
                {
                    printf("\n\t ENTER AMOUNT TO TRANSFER");
                    scanf("%d",&transfer_amt);
                    if(transfer_amt<=acc[i].balance)
                    {
                        acc[i].balance=acc[i].balance-transfer_amt;
                        acc[j].balance=acc[j].balance+transfer_amt;
                    }
                    printf("\n\t REMAINING BALANCE IN YOUR ACCOUNT:%d",acc[i].balance);
                }
            }
        }
        
    }
}
void account_details(){ int a=0;
    int details_acct_number;
    printf("\n\t PLEASE ENTER YOUR ACCOUNT NUMBER");
    scanf("%d",&details_acct_number);
    if(acc[i].acct_number==details_acct_number){
    
     
       printf("\n\t FIRST NAME=%s",acc[i].f_name);
       printf("\n\t LAST NAME=%s",acc[i].l_name);
       printf("\n\t USERNAME=%s",acc[i].username);
       printf("\n\t GENDER=%s",acc[i].gender);
       printf("\n\t AGE=%d",acc[i].age);
       printf("\n\t AADHAR NUMBER=%d",acc[i].aadhar_number);
       printf("\n\t ADDRESS=%s",acc[i].address);
       printf("\n\t BALANCE=%d",acc[i].balance);
       printf("\n\t LOAN AMOUNT=%d",acc[i].loan_amount);
       
    }
}
void pinchange(){ int pin_;
    printf("\n\t PLEASE ENTER YOUR CURRENT PASSWORD");
    scanf("%d",&pin_);
    if(pin_==acc[i].password){
             printf("\n\t PLEASE ENTER NEW PASSWORD");
             scanf("%d",&new_pin);
             acc[i].password=new_pin;
    }
    printf("\n\t PASSWORD CHANGED SUCCESSFULLY");
}
void loans(){ int choice_loan;
    printf("\n\t PRESS 1 FOR PERSONAL LOAN");
    printf("\n\t PRESS 2 FOR EDUCATIONAL LOAN");
    printf("\n\t PLEASE ENTER YOUR CHOICE");
    scanf("%d",&choice_loan);
    switch (choice_loan){
        case 1: personal_loan();
        break;
        default: ("\n\t PLEASE CHOOSE VALID OPTION");
        break;
    }  
}
void personal_loan(){ int personal_loan_acctno,x;
    printf("\n\t PLEASE ENTER YOUR ACCOUNT NUMBER");
    scanf("%d",&personal_loan_acctno);
    if(acc[i].acct_number==personal_loan_acctno)
    {
      if(acc[i].loan_amount==0){
        printf("\n\t ENTER YOUR CIBIL SCORE");
        scanf("%f",&cibil_score);
        if(cibil_score>=650){
            printf("\n\t YOU ARE ELIGIBLE FOR PERSOANL LOAN");
            printf("\n\t PLEASE SUBMIT DOCUMENTS FOR FUTHER PROCEEDINGS");
            printf("\n\t ENTER YOUR LOAN AMOUNT");
            scanf("%f",&personal_loan_amount);
            printf("\n\t PLEASE ENTER YOUR LOAN TENURE IN MONTHS");
            scanf("%f",&personal_loan_tenure);
            acc[i].loan_amount=personal_loan_amount;
            printf("\n\t FOR AMOUNT LESS THAN 500000 INTEREST IS 7 percent");
            printf("\n\t FOR AMOUNT MORE THAN 500000 INTEREST IS 5 percent");
            printf("\n\t PRESS 1 TO CONTINUE");
            printf("\n\t PRESS 2 TO MAIN MENU");
            printf("\n\t PLEASE ENTER YOUR CHOICE");
            scanf("%d",&x);
            switch(x){
                case 1: if(personal_loan_amount<=500000){
                  printf("\n\t YOUR PERSONAL LOAN OF AMOUNT OF RS.%f IS APPROVED",personal_loan_amount);
                  personal_loan_interest=(personal_loan_amount*personal_loan_tenure*7)/100;
                  personal_loan_emi=(personal_loan_interest)/personal_loan_tenure;
                  printf("\n\t YOU SHOULD PAY RS.%f with a interest of 7 percent in %f months"
                  ,personal_loan_interest,personal_loan_tenure);
                  printf("\n\t YOU SHOULD PAY MONTHLY INSTALLMENT OF RS.%f for the next %f months",personal_loan_emi,personal_loan_tenure);
                 }
                else if(personal_loan_amount>500000){
                    printf("\n\t YOUR PERSONAL LOAN OF AMOUNT OF RS.%f IS APPROVED",personal_loan_amount);
                  personal_loan_interest=(personal_loan_amount*personal_loan_tenure*5)/100;
                  personal_loan_emi=(personal_loan_interest)/personal_loan_tenure;
                  printf("\n\t YOU SHOULD PAY RS.%f with a interest of 5 percent in %f months"
                  ,personal_loan_interest,personal_loan_tenure);
                  printf("\n\t YOU SHOULD PAY MONTHLY INSTALLMENT OF RS.%f for the next %f months",personal_loan_emi,personal_loan_tenure);
                 }
                 break;
                case 2:menu();
                break;
                default: printf("\n\t PLEASE ENTER VALID OPTION");
                break;
                }
            }
            else{ 
              printf("\n\t YOU ARE NOT ELIGIBLE FOR PERSONAL LOAN SINCE YOUR CIBIL SCORE IS LESS THAN 650");
              menu();
            }
        }
       else{
        printf("\n\t PLEASE ENTER VALID ACCOUNT NUMBER");
       }
      }
    }




    
