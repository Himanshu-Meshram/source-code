#include <iostream>
#include <string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int sid[10],n,Username,Password,ch,ch1,sid1,j,sno[10],t,y,scno[10];
    char sname[10][10],sname1[10],ans;
    top:
        cout << "\n\n\t\t----------------------------------------";
        cout << "\n\n\t\t Welcome to the ticket booking system!";
        cout << "\n\n\t\t----------------------------------------";
        cout <<"\n\n\t\t Please enter your Login username: ";
        cin >> sname[10];
        cout << "\n\n\t\t Please enter your Login password: ";
        cin >>sname[10],sno[10];
         top1:
    	cout<<"\n\n\t\t\t   -----------------------------------";
		cout<<"\n\n\t\t\t   | * Movie Ticket Booking System * |";
		cout<<"\n\n\t\t\t   -----------------------------------";
		cout<<"\n\n\t\t\t\t ! Welcome Customers !";
		cout<<"\n\t\t\t\t <1> Movie Timings";
		cout<<"\n\t\t\t\t <2> Show Booled Ticket";
		cout<<"\n\t\t\t\t <3> For Information";
		cout<<"\n\t\t\t\t <4> Coupen Code";
		cout<<"\n\t\t\t\t <5> Log out\n\n";
		cout<<"\t\t\t\tEnter Your Choice :"<<"\t";
		cin>>ch;
   switch(ch)
      {
   
      case 1: 
		  {
		    cout<<"\n\n\t\t\t\tThe Shows are :";
			cout<<"\n\n\t\t\t\t 1. One Piece Movie:Red";
			cout<<"\n\n\t\t\t\t 2. Tazza Khabar";
			cout<<"\n\n\t\t\t\t 3. Ved";
			cout<<"\n\n\t\t\t\t 4. Jani  Dushman";
			cout<<"\n\n\t\t\t\t 5. Avatar\n";
			cout<<"\n\t\t\t\tEnter Your Choice :"<<"\t";
			cin>>ch;
			cout<<"\n\n\t\t\t\t The Timings for the selected show are:";
	     	switch(ch)
			{
			    	case 1:
				    cout<<"\n\n\t\t\t\t Select the the timings: ";
					cout<<"\n\t\t\t\t <1> 08:00";
					cout<<"\n\t\t\t\t <2> 13:00";
					cout<<"\n\t\t\t\t <3> 14:50";
					cout<<"\n\t\t\t\t <4> 18:00";
					cout<<"\n\t\t\t\t <5> 21:00";
					cout<<"\n\t\t\t\t <6> 01:00 \n";
					cout<<"\n\n\t\t\t\t Please select the timings: ";
					cin>>ch;
					cout<<"\n\n\t\t\t\t Enter your name: ";
					cin>>sname1[10];
					cout<<"\n\n\t\t\t\t Enter your contact number: ";
					cin>>scno[10];
					cout<<"\n\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>sno[10];
					cin>>j;
					cout<<"\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>j;
					top2:
					cout<<"\n\n\t\t\t\t Your ticket is here:";
					cout<<"\n\t\t\t\t Name 		:"<<sname1;
					cout<<"\n\t\t\t\t Contact No	:"<<scno;
					cout<<"\n\t\t\t\tShow timings 	:"<<"\n\n";
                       }
                    cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
                    cin>>ans;
				   if(y)
				   {
				   	goto top1;
				   }
                    else
                    {
                    	exit(0);
					}
                   
        case 2:
		top3:      
		{
			goto top2;
			
			  }      
     
 }
 }
 return 0;
 }
        
