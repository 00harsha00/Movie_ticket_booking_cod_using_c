#include<stdio.h>
#include<stdlib.h>

//These are the Function declarations
void seats(int,int[],int[]);  
void bookedTickets(int, int[],int []);
void ticketPricing(int);

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int temp_arr[10];
    int ch,i,j;
     int store=0;
     int no_of_tickets=0;

while(1){
    //Here we are printing Menu for Selection
    printf("--------------------------- MENU ----------------------------\n");
    printf("Press 1  for Booking tickets\nPress 2 for exit() \n");
    printf("-----------------------------------------------------------------\n");

    //Here we are taking input from user for selection options from menu
    scanf("%d",&ch);         

//switch case is used to select thrugh options for ticket booking/MENU
    switch(ch){

case 1:
    //showing available seats to User for booking tickets using for loop & array(arr[10])
    printf("\nAvailable seats are\n");
    for(i=0;i<10;i++)
        printf("%d ",arr[i]);
    //Taking Input for No of tickets customer want
    printf("\nHow Many Tickets Do you want!\n");
    scanf("%d",&no_of_tickets);

    seats(no_of_tickets,arr,temp_arr);
        bookedTickets(no_of_tickets,arr,temp_arr);
        ticketPricing(no_of_tickets);
    break;
//case 2 is for exit from the program (or) like back function
case 2:
    exit(0);
break;
default:printf("Invalid Boss!..\n");
    break;
}
}
return 0;
}

//Here is the main logic of the program, which takes seats input from user and selected seats are marks down with zero 
void seats(int no_of_tickets,int arr[],int temp_arr[])
{
   
    printf("\nEnter Seat Numbers\n");
    for(int i=0;i<no_of_tickets;i++)
        scanf("%d",&temp_arr[i]);

    for(int i=0;i<no_of_tickets;i++)
    {
        for(int j=0;j<10;j++)
        {

        if(arr[j]==temp_arr[i])
             arr[j]=0;
    
        }
    
    }

}
//This function is for showing successfully Booked Tickets
void bookedTickets(int no_of_tickets,int arr[],int temp_arr[])
{
    printf("\n\t!!!!Successfully Booked Tickets are:!!!!\t\n");
    for(int i=0;i<10;i++)
    {
        if(arr[i]==0)
        printf("* ");
        else
        printf("%d ",arr[i]);
    }
    printf("\nyour Seats are:\n");
        for(int i=0;i<no_of_tickets;i++)
            printf("%d ",temp_arr[i]);
}
//This function is for calculating Pricing and printing
void ticketPricing(int no_of_tickets)
{
    int one_ticket=130;
    printf("\n");
    printf("\n\t_______Bill:_____\t\n");
    printf("One Ticket Price is 130/-\n");
    printf("%d * %d ",one_ticket,no_of_tickets);
    printf("Total Price is :%d /-\n",one_ticket*no_of_tickets);
    printf("\n\n");
    
}
