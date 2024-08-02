#include <iostream>
#include <string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int sid[10],n,username,password,ch,ch1,sid1,j,sno[10],t,y,scno[10],sno1[10];
    char sname[10][10],sname1[10],ans;
    top:
    	 cout << "\n\t\t\t\t\t\t\t\t\t\t\t --------------------------------------------\n";
	     cout << "\n\t\t\t\t\t\t\t\t\t\t\t | * Welcome to the ticket booking system * |";
         cout << "\n\t\t\t\t\t\t\t\t\t\t\t --------------------------------------------\n";
         cout << "\n\t\t\t\t\t\t\t\t\t\t\tPlease enter your admin username: ";
         cin >> username;
         cout << "\n\t\t\t\t\t\t\t\t\t\t\tPlease enter your admin password: ";
         cin >> password;
         cout << "\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------\n\n";
           if (username == 22 && password == 55)
	            	cout <<"\n\t\t\t\t\t\t\t\t\t\t\t         *Access Granted* \n";    	
          else {
                	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\ ! Invalid username or password. Access denied ! \n\n\n";                 
                   goto top;
                }
    top1:
    	cout<<"\n\n\t\t\t   -----------------------------------";
		cout<<"\n\n\t\t\t   | * Movie Ticket Booking System * |";
		cout<<"\n\n\t\t\t   -----------------------------------";
		cout<<"\n\n\t\t\t\t ! Welcome Customers !";
		cout<<"\n\t\t\t\t <1> Movie Timings";
		cout<<"\n\t\t\t\t <2> Show Booked Ticket";
		cout<<"\n\t\t\t\t <3> For Information";
		cout<<"\n\t\t\t\t <4> Log out\n\n";
		cout<<"\t\t\t\tEnter Your Choice :"<<"\t""\n";
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
					cout<<"\n\n\t\t\t\t Please select the timings: "<<"\t";
					cin>>sno[10];
					cout<<"\n\n\t\t\t\t Enter your name: ";
					cin>>sname[10];				
					cout<<"\n\n\t\t\t\t Enter your contact number: ";
					cin>>scno[10];
					cout<<"\n\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>sno1[10];
					cin>>j;
					
					top2:
					cout<<"\n\n\t\t\t\t Your ticket is here:";
					cout<<"\n\t\t\t\t Name 		:"<<sname[10];
					cout<<"\n\t\t\t\t Contact No	:"<<scno[10];
					cout<<"\n\t\t\t\t Show timings 	:"<<sno[10];
					cout<<"\n\t\t\t\t no. of Ticket you Purchase:"<<sno1[10];
					
            }
                    cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
                    cin>>ans;
				       if(ans=='y')
				          {
				        	goto top1;
				          }
                        else
                          {
                        	 cout<<"Thankyou!";;
					      }
                   
        case 2:      
		     {
			goto top2;
			
			 }    
		case 3:
			 	cout<<"For further information about Movies Contact to this no. ***-***-***\n";
				cout<<"\n Do you want to choose another option(y/n)\n";
		    	cin>>ans;
				  if(ans=='y')
				    {
				      	goto top1;
				    }
                  else
                    {
                       cout<<"Thankyou!";
					}
			
				goto top3;
     
 }
 case 4:
 	 top3:
       cout<<"\n\n\t\t *You Want to Logout*(y/n)\n";
       cin>>ans;
              if(ans=='y')
				    {
				      	goto top;
				    }
               else
                    {
                       	exit(0);
					}
			
				break;  
      default: cout<<"\ninvalid selection:  \n";
        goto top;
}
 return 0;
 }
        
