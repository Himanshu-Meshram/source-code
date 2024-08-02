#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    int UserN,Pass,choice,moviech,timech,ticketch;
    string actual_time;
    string actual_movie;
    int user=0;
    cout<<"\t\twelcome to ticket booking"<<endl;
    cout<<"\t-----------------------------------------"<<endl;
    cout<<"\t\tenter username: ";
    cin>>UserN;
    cout<<"\t\tenter password: ";
    cin>>Pass;
    cout<<"\t----------------------------------\n"<<endl;

    if(UserN == 20 && Pass == 10)
    {
        cout<<"\t\t***ACCESS GRANTED***\n\n"<<endl;

        do{
            cout<<"\t\t----- WELCOME -----"<<endl;
        cout<<"\t\t1) Buy tickets"<<endl;
        cout<<"\t\t2) movie timing"<<endl;
        cout<<"\t\t3) logout"<<endl;
        cout<<"\t\tenter your choice: ";
        cin>>choice;
        
        switch (choice)//------------------------1----------------
        {
    case 1:
            cout << "\n\t\t\t\t PLEASE SELECT A MOVIE";
            cout << "\n\t\t\t\t <1> AA";
            cout << "\n\t\t\t\t <2> BB";
            cout << "\n\t\t\t\t <3> CC\n\t\t\t\t";
            cout<<"choice: ";
            cin>>moviech;
            cout<<"-------------------------------------------\n";

            switch (moviech)//------------------------2----------------
            {
        case 1:
                cout<<"you have selected AA \n";
                cout<<"timings for the show are:\n1)9:00am\n2)12:00pm\n3)3:00pm\n";
                cout<<"select time: ";
                actual_movie = "AA";
                cin>>timech;
                cout<<"--------------------------------------------------\n";
                switch (timech)//------------------------3----------------
                {
                case 1:
                    cout<<"Tickets available in: \n";
                    cout<<"(1) GOLD 200/- \n(2) SILVER 150/- \n---------------------\n";
                    cout<<"Press (1) for GOLD and (2) for SILVER : ";
                    cin>>ticketch;
                    if(ticketch == 1)
                    {
                        int seat,total;
                        cout<<"how many seats you want?\n";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 200 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                        
                    }
                    else
                    {
                        int seat,total;
                        cout<<"how many seats you want?\n";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 150 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    cout<<"\n\t\t\tTicket confirmed\n\t\t\tyour show timing is 9:00am";
                    cout<<"\nwant to purchase again? press 1 for yes => \t";
                    actual_time = "9:00 am";
                    cin>>user;

                break;
                case 2:
                    cout<<"Tickets available in: \n";
                    cout<<"(1) GOLD 200/- \n(2) SILVER 150/- \n---------------------\n";
                    cout<<"Press (1) for GOLD and (2) for SILVER : ";
                    cin>>ticketch;

                    if(ticketch == 1)
                    {
                        int seat,total;
                        cout<<"how many seats you want?\n";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 200 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    else
                    {
                        int seat,total;
                        cout<<"how many seats you want?\n";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 150 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    cout<<"\n\t\t\tTicket confirmed\n\t\t\tyour show timing is 12:00pm";
                    cout<<"\nwant to purchase again? press 1 for yes => \t";
                    actual_time = "12:00 pm";

                    
                    cin>>user;
                break;
                case 3:
                    cout<<"Tickets available in: \n";
                    cout<<"(1) GOLD 200/- \n(2) SILVER 150/- \n---------------------\n";
                    cout<<"Press (1) for GOLD and (2) for SILVER : ";
                    cin>>ticketch;
                    if(ticketch == 1)
                    {
                        int seat,total;
                        cout<<"how many seats you want?\n";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 200 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    else
                    {
                        int seat,total;
                        cout<<"how many seats you want?\n";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 150 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    cout<<"\n\t\t\tTicket confirmed\n\t\t\tyour show timing is 3:00pm";
                    cout<<"\nwant to purchase again? press 1 for yes => \t";
                    actual_time = "3:00 pm";
                    cin>>user;
                    
                break; 
            break; 
                default:
                    cout<<"invalid choice for movie timing";
                break;
                }
            break;
        case 2:
                cout<<"\nyou have selected BB \n";
                cout<<"timings for the show are:\n1)9:00am\n2)12:00pm\n3)3:00pm\n";
                cout<<"select time: ";
                actual_movie = "BB";
                cin>>timech;
                cout<<"--------------------------------------------------\n";
                switch (timech)//------------------------4 for movie ----------------
                {
                case 1:
                    cout<<"Tickets available in: \n";
                    cout<<"(1) GOLD 200/- \n(2) SILVER 150/- \n---------------------\n";
                    cout<<"Press (1) for GOLD and (2) for SILVER : ";
                    cin>>ticketch;
                    if(ticketch == 1)
                    {
                        int seat,total;
                        cout<<"how many seats you want?\n";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 200 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    else
                    {
                        int seat,total;
                        cout<<"how many seats you want?\n";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 150 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    cout<<"\n\t\t\tTicket confirmed\n\t\t\tyour show timing is 9:00am";
                    cout<<"\nwant to purchase again? press 1 for yes => \t";
                    actual_time = "9:00 am";
                    
                    cin>>user;


                break;
                case 2:
                    cout<<"Tickets available in: \n";
                    cout<<"(1) GOLD 200/- \n(2) SILVER 150 \n---------------------\n";
                    cout<<"Press (1) for GOLD and (2) for SILVER : ";
                    cin>>ticketch;
                    if(ticketch == 1)
                    {
                        int seat,total;
                        cout<<"how many seats you want?\n";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        total = 200 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    else
                    {
                        int seat,total;
                        cout<<"how many seats you want?\n";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 150 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    cout<<"\n\t\t\tTicket confirmed\n\t\t\tyour show timing is 12:00pm";

                    cout<<"\nwant to purchase again? press 1 for yes => \t";
                    actual_time = "12:00 pm";
                    cin>>user;


                break;
                case 3:
                    cout<<"Tickets available in: \n";
                    cout<<"(1) GOLD 200/- \n(2) SILVER 150/- \n---------------------\n";
                    cout<<"Press (1) for GOLD and (2) for SILVER : ";
                    cin>>ticketch;
                    if(ticketch == 1)
                    {
                        int seat,total;
                        cout<<"how many seats you want?\n";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 200 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    else
                    {
                        int seat,total;
                        cout<<"how many seats you want?\n";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 150 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    cout<<"\n\t\t\tTicket confirmed\n\t\t\tyour show timing is 3:00pm";

                    cout<<"\nwant to purchase again? press 1 for yes => \t";
                    actual_time = "3:00 pm";
                    cin>>user;
                break;
            break;
        
                default:
                    cout<<"invalid choice for movie timing";
                break;
                }
        break;
        case 3: 
                cout<<"\nyou have selected CC \n";
                cout<<"timings for the show are:\n1)9:00am\n2)12:00pm\n3)3:00pm\n";
                cout<<"select time: ";
                actual_movie = "CC";
                cin>>timech;
                cout<<"--------------------------------------------------\n";
                switch (timech)//------------------------4 for movie ----------------
                {
                case 1:
                    cout<<"Tickets available in: \n";
                    cout<<"(1) GOLD 200/- \n(2) SILVER 150/- \n---------------------\n";
                    cout<<"Press (1) for GOLD and (2) for SILVER : ";
                    cin>>ticketch;
                    if(ticketch == 1)
                    {
                        int seat,total;
                        cout<<"how many seats you want?";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 200 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    else
                    {
                        int seat,total;
                        cout<<"how many seats you want?";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 150 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    cout<<"\n\t\t\tTicket confirmed\n\t\t\tyour show timing is 9:00am";

                    cout<<"\nwant to purchase again? press 1 for yes => \t";
                    actual_time = "9:00 am";
                    cin>>user;
                break;
                case 2:
                    cout<<"Tickets available in: \n";
                    cout<<"(1) GOLD 200/- \n(2) SILVER 150/- \n---------------------\n";
                    cout<<"Press (1) for GOLD and (2) for SILVER : ";
                    cin>>ticketch;
                    if(ticketch == 1)
                    {
                        int seat,total;
                        cout<<"how many seats you want?";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 200 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    else
                    {
                        int seat,total;
                        cout<<"how many seats you want?";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 150 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    cout<<"\n\t\t\tTicket confirmed\n\t\t\tyour show timing is 12:00pm";
                    cout<<"\nwant to purchase again? press 1 for yes => \t";
                    actual_time = "12:00 pm";
                    cin>>user;

                break;
                case 3:
                    cout<<"Tickets available in: \n";
                    cout<<"(1) GOLD 200/- \n(2) SILVER 150/- \n---------------------\n";
                    cout<<"Press (1) for GOLD and (2) for SILVER : ";
                    cin>>ticketch;
                    if(ticketch == 1)
                    {
                        int seat,total;
                        cout<<"how many seats you want?";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 200 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    else
                    {
                        int seat,total;
                        cout<<"how many seats you want?";
                        cout<<"Enter number of seats: ";
                        cin>>seat;
                        cout<<"-------------------------------------------\n";
                        total = 150 * seat;
                        cout<<"Total amount for your ticket is: "<<total<<endl;
                    }
                    cout<<"\n\t\t\tTicket confirmed\n\t\t\tyour show timing is 3:00pm\n";
                    cout<<"\nwant to purchase again? press 1 for yes => \t";
                    actual_time = "3:00 pm";
                    cin>>user;

                break;
            break;
                
                default:
                    cout<<"invalid choice for movie timing!";
                break;
                }
                //-----------------------------------------------------------------------------------------
        break;
             default:
                cout<<"invalid choice for movie!";
            break;
            }
        break;
    //==========================================================================================================================================================
        case 2:
            cout<<"\n\t\t\t-----TIMINGS FOR THE MOVIE ARE------\n"<<endl;
            cout<<"\t\t\t Your Movie name is: "<<actual_movie<<"\n\t\t\t Your movie time is: "<<actual_time<<endl;
            cout<<"\n\t\t\twant to purchase again? press 1 for yes\t";
            cin>>user;
            break;
        
        case 3: 
            cout<<"\t\t\t\t-----LOGGED OUT SUCCESSFULLY-----\t\t\t\t";
            return 0;
        //----------------------first switch--------------------------------------1----------------------------
        default:
        cout<<"incorrect choice for buying tickets! ";
            break;
        }
        }
        while(user == 1);
    }
        else
        {
            cout<<"ACCESS DENIED";
        }
}
