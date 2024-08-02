#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
		system("CLS");
    int sid[10],n,ch,cno,b;
	int user=0; 
    char sname[10][10];
	int Username,Password;
	cout<<"\n\n\n\t\t";
	top1:
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t    -----------------------------------------";
	cout << "\n\t\t\t\t\t\t\t\t\t\t ^-^  Welcome to the Ticket Booking System  ^-^ ";
	cout << "\n\t\t\t\t\t\t\t\t\t\t    -----------------------------------------";
	cout << "\n\n\t\t\t\t\t\t\t\t\t\tPlease Enter Your Username :\t";
	cin >> Username;
	cout << "\n\n\t\t\t\t\t\t\t\t\t\tPlease Enter Your Password :\t";
	cin >> Password;
	
	if(Username == 22 && Password == 55)
	{
		top5:
					system("CLS");
	cout<<"\n=====================================================================================================================================================================================================";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t  ACCESS GRANTED     \n";
	    int time;                         
		int tickets;
		int top1;
		int choice;
		int a;
		int m;
	do{
		   
    	top:
			cout<<"\n======================================================================================================================================================================================================";
					cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t  ^-^  Welcome Admin  ^-^\n";
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t <1> Buy Movie Tickets\n";
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t <2> Movies Timing\n";
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t <3> LOGOUT\n";
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t ---------------------------------------";
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t ENTER YOUR CHOICE :\t";
					cin >> a;
		top2:
			switch (a)	
		{
		case 1://===========================================for BUY MOVIE TICKETS===============================================	
				system("CLS");
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t <1> Your Name\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t <2> Jujutsu Kaisen 0\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t <3> DEMON SLAYER - Mugan Train\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t <4> Pathaan\n";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t <5> One Piece Film : Red \n\t\t\t\t";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t ---------------------------------------";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t PLEASE SELECT A MOVIE:\t";
			cin >> ch;
		//---------------------------------------------------------------------
			switch(ch) 
					{
						case 1:
								system("CLS");
							cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t You have Selected 'Your Name'\n";
							cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t <1> 08:45 am\n";
							cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t <2> 11:15 am\n";
							cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t <3> 01:30 pm\n";
							cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t <4> 03:45 pm\n";
							cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t <5> 06:00 pm\n";
							cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t Please select Movie Timing :\t";
							cin>>b;
		int l,total;
							switch(b)
							{
								case 1:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-";  
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
                                user  = 1;
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t The Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 08:45 am \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Press (1) TO BUY AGAIN?\t";
										    cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t The Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Your ticket is here: \n";
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Name 	    	:"<<sname[30];
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 08:45 am \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t // Please try again. //";
										}
											
								break;
								
								case 2:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :\n";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-\n";
	                            cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-\n";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
                                user  = 1;
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t The Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 11:15 am \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t The Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 11:15 am \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please try again.";
										}
											
								break;
								
								case 3:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :\n";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t The Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Your ticket is here: \n";
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 01:30 pm \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please enter number of tickets :\n";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t The Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 01:30 pm \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\\t\t\t\t\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please try again.";
										}
											
								break;
								
								case 4:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-";  
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
                                user = 1;
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\t\t\t\t\t\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 3:45pm \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t The Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 03:45 pm \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please try again.";
										}
											
								break;
								
								case 5:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-"; 
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t The Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 6:00pm \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\\t\t\t\t\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t The Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 06:00 pm \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please try again.";
										}
											
								break;
			//YOUR NAME FINISHED===============================================================================
							}
							
						break;			
						case 2:
							system("CLS");
								cout << "\n\t\t\t\t You have Selected 'Jujutsu Kaisen 0'\n";
								cout<< "\n\t\t\t\t <1> 08:45 am\n";
								cout<< "\n\t\t\t\t <2> 11:15 am\n";
								cout<< "\n\t\t\t\t <3> 01:30 pm\n";
								cout<< "\n\t\t\t\t <4> 03:45 pm\n";
								cout<< "\n\t\t\t\t <5> 06:00 pm\n";
								cout<< "\n\t\t\t\t Please select Movie Timing :\t";
								cin>>b;
								
							switch(b)
							{
								case 1:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-"; 
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
						    	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 08:45am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\t";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 8:45am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 2:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-";  
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15 am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15 am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 3:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-"; 
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 01:30 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 01:30 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 4:
									system("CLS");
						    	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-"; 
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 03:45 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 03:45 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 5:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-";  
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 06:00 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 06:00 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
									break;
						}
						break;
		//JJK 0 FINISHED===============================================================================

						case 3:
							system("CLS");
								cout << "\n\t\t\t\t You have Selected 'DEMON SLAYER - Mugan Train'\n";
								cout<< "\n\t\t\t\t <1> 08:45am\n";
								cout<< "\n\t\t\t\t <2> 11:15am\n";
								cout<< "\n\t\t\t\t <3> 01:30pm\n";
								cout<< "\n\t\t\t\t <4> 03:45pm\n";
								cout<< "\n\t\t\t\t <5> 06:00pm\n";
								cout<< "\n\t\t\t\t Please select Movie Timing :\t";
								cin>>b;
							switch(b)
							{
								case 1:
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-";  
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 08:45 am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 08:45 am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 2:
									system("CLS");
						    	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-"; 
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15 am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15 am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 3:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-"; 
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 01:30 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 01:30 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n"; 	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 4:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-";   
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
							    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 03:45 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 03:45 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 5:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-";  
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 06:00 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 06:00 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
									break;
						}
			//Demon Slayer FINISHED===============================================================================
						break;
						case 4:
							system("CLS");
								cout << "\n\t\t\t\t You have Selected 'Pathaan '\n";
								cout<< "\n\t\t\t\t <1> 08:45 am\n";
								cout<< "\n\t\t\t\t <2> 11:15 am\n";
								cout<< "\n\t\t\t\t <3> 01:30 pm\n";
								cout<< "\n\t\t\t\t <4> 03:45 pm\n";
								cout<< "\n\t\t\t\t <5> 06:00 pm\n";
								cout<< "\n\t\t\t\t Please select Movie Timing :\t";
								cin>>b;
							switch(b)
							{
								case 1:
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-"; 
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 08:45 am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 08:45 am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 2:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-";   
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15 am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15 am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 3:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-";    
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
							cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 01:30 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 01:30 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 4:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-"; 
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
							    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 03:45 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 03:45 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 5:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-"; 
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
							    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 06:00 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 06:00 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
									break;
						}
					//Pathaan  FINISHED===============================================================================
						break;
						case 5:
							system("CLS");
								cout << "\n\t\t\t\t You have Selected 'One Piece Film : Red'\n";
								cout<< "\n\t\t\t\t <1> 08:45 am\n";
								cout<< "\n\t\t\t\t <2> 11:15 am\n";
								cout<< "\n\t\t\t\t <3> 01:30 pm\n";
								cout<< "\n\t\t\t\t <4> 03:45 pm\n";
								cout<< "\n\t\t\t\t <5> 06:00 pm\n";
								cout<< "\n\t\t\t\t Please select Movie Timing :\t";
								cin>>b;
								
							switch(b)
							{
								case 1:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-";   
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 08:45 am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 08:45 am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 2:
									system("CLS");
							    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-"; 
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15 am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15 am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 3:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-"; 
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 01:30 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 01:30 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 4:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-"; 
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
							    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 03:45 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 03:45 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
											
								break;
								
								case 5:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1) SILVER - 160/-"; 
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Please select (1) or (2) : \t";
								cin>>m;
											if (m==1)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 160 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 06:00 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";
										cin>>user;

										}
											else if (m==2)
										{
											cout <<"\n\t\t\t\tPlease enter number of tickets :";
											cin>>l;
											total = 200 * l;
											cout<< "\n\t\t\t\tThe Total amount is : "<<total;	 
											cout<<"\n\n\t\t\t\t Enter your name: ";
										cin>>sname[30];
											cout<<"\n\n\t\t\t\t Enter your contact number: ";
										cin>>cno;
											cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 06:00 pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\ Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
									break;
						}
							
				break;
			//One Piece Film : Red FINISHED===============================================================================
				}
		
			
				//MOVIE TIMING========================>>
				break;
				int p;			
					case 2:
						system("CLS");
                        cout<<"\n=============================================================================================================================================================================================";
						cout<<"\n\t\t\t\t\t\t\t\t\t\t\t MOVIE TIMINGS ARE AS FOLLOWS:";
						cout<<"\n=============================================================================================================================================================================================\n";
							cout<< "\n\t\t\t\t YOUR NAME   \t\t Jujutsu Kaisen 0\t\t DEMON SLAYER - Mugan Train \t\t Pathaan \t\t  One Piece Film : Red \n";
							cout<< "\n\t\t\t\t 1. 08:45 am \t\t 1. 08:45 am     \t\t 1. 08:45 am                \t\t 1. 08:45 am   \t\t 1. 08:45 am\n ";
							cout<< "\n\t\t\t\t 2. 11:15 am \t\t 2. 11:15 am     \t\t 2. 11:15 am                \t\t 2. 11:15 am   \t\t 2. 11:15 am \n";
							cout<< "\n\t\t\t\t 3. 01:30 pm \t\t 3. 01:30 pm     \t\t 3. 01:30 pm                \t\t 3. 01:30 pm   \t\t 3. 01:30 pm \n";
							cout<< "\n\t\t\t\t 4. 03:45 pm \t\t 4. 03:45 pm     \t\t 4. 03:45 pm                \t\t 4. 03:45 pm   \t\t 4. 03:45 pm \n";
							cout<< "\n\t\t\t\t 5. 06:00 pm \t\t 5. 06:00 pm     \t\t 5. 06:00 pm                \t\t 5. 06:00 pm   \t\t 5. 06:00 pm \n\t";
							cout<< "\n\n\n\t\t\t\t\t\t\t\t ENTER ANY KEY AND PRESS ENTER FOR MAIN MENU. \t";							
							cin>>p;
						system("CLS");
					goto top;
							break;
				//LOGOUT==============================>>
				case 3:
					system("CLS");
						cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t *****LOGOUT*****";
						return 0;
			default:
        cout<<"\n\t\t\t\t\t\t\t\t\t\t PLEASE ENTER CORRECT OPTION ";
        user = 1;
            break;
			}//=============================================================switch (a)=====================================	
	}
	while (user == 1);
	//======================================================access granted==========
}
		else {
			cout << "\n\n\t\t\t\t\t\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t`-`   INVALID USERNAME or PASSWORD. ACCESS DENIED   `-`";
			cout << "\n\n\t\t\t\t\t\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\t";
			}
		goto top1;

}

