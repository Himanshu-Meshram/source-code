#include <iostream>
#include <string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int sid[10],n,ch,ch1,sid1,j,sno[10];
    char sname[10][10],sname1[10];
    top:
    	cout<<"\n\t\t\t   -----------------------------------";
		cout<<"\n\t\t\t   | * Movie Ticket Booking System * |";
		cout<<"\n\t\t\t   -----------------------------------";
		cout<<"\n\n\t\t\t\t ! Welcome Customers !";
		cout<<"\n\n\t\t\t\t <1> Login ";
		top1:
		cout<<"\n\t\t\t\t <2> Movie Timings";
		cout<<"\n\t\t\t\t <3> Show Movies";
		cout<<"\n\t\t\t\t <4> For Information";
		cout<<"\n\t\t\t\t <5> DTCard Registration";
		cout<<"\n\t\t\t\t <6> Log out\n\n";
		cout<<"\t\t\t\tEnter Your Choice :"<<"\t";
		cin>>ch;
   switch(ch)
   {
   
	 case 1:
            cout<<"\n PLase Login Here: ";
            for (int i = 0; i <n; ++i)
            {
                cout<<"\n Login ID: ";
                cin>>sid[i];
                cout<<"\n Login Pass: ";
                cin>>sname[i],sno[i];
            }
            goto top1;
            
      case 2: 
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
					cin>>sno[10];
					cout<<"\n\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					int n;
     }
     return 0;
 }}}
        
