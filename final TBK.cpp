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
	top1:
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t -----------------------------------------";
	cout << "\n\t\t\t\t\t\t\t\t\t\t -> Welcome to the Ticket Booking System! <- ";
	cout << "\n\t\t\t\t\t\t\t\t\t\t -----------------------------------------";
	cout << "\n\n\t\t\t\t\t\t\t\t\t\tPlease Enter Your Username :\t";
	cin >> Username;
	cout << "\n\n\t\t\t\t\t\t\t\t\t\tPlease Enter Your Password :\t";
	cin >> Password;
	
	if(Username == 22 && Password == 55)
	{
		top5:
					system("CLS");
	cout<<"\n==================================================================================================================================================================================================================";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t ACCESS GRANTED \n";
	cout<<"\n==================================================================================================================================================================================================================";
	    int time;
		int tickets;
		int top1;
		int choice;
		int a;
		int m;
	do{
		top:
	cout<<"\n\n\n\n\n==================================================================================================================================================================================================================";		
					cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t **Welcome Admin**";
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t <1> Buy Movie Tickets";
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t <2> Movies Timing";
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t <3> LOGOUT";
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t ---------------------------------------";
					cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t ENTER YOUR CHOICE :\t";
					cin >> a;
		top2:
			switch (a)	
		{
		case 1://===========================================for BUY MOVIE TICKETS===============================================	
				system("CLS");
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t <1> Your Name";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t <2> Jujutsu Kaisen 0";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t <3> DEMON SLAYER - Mugan Train";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t <4> Drifting Home";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t <5> Bubble\n\t\t\t\t";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t ---------------------------------------";
			cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t PLEASE SELECT A MOVIE:\t";
			cin >> ch;
		//---------------------------------------------------------------------
			switch(ch) 
					{
						case 1:
								system("CLS");
							cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t You have Selected 'Your Name'";
							cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t <1> 8:45am";
							cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t <2> 11:15am";
							cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t <3> 1:30pm";
							cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t <4> 3:45pm";
							cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t <5> 6:00pm";
							cout<< "\n\t\t\t\t\t\t\t\t\t\t\t\t Please select Movie Timing :\t";
							cin>>b;
		int l,total;
							switch(b)
							{
								case 1:
									system("CLS");
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t\t\t\t\t\t\t\t\t (2) GOLD - 200/-";
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
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 8:45am \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Your ticket is here: ";
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Name 		:"<<sname[30];
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Contact No	:"<<cno;
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 8:45am \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
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
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 11:15am \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 11:15am \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
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
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 1:30pm \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Total number of tickets : "<<l;
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 1:30pm \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
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
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 3:45pm \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
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
											cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t YOUR SHOW TIMING IS 6:00pm \n\t\t\t\t\t\t\t\t\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout << "\n\t\t\t\t You have Selected 'Jujutsu Kaisen 0'";
								cout<< "\n\t\t\t\t <1> 8:45am";
								cout<< "\n\t\t\t\t <2> 11:15am";
								cout<< "\n\t\t\t\t <3> 1:30pm";
								cout<< "\n\t\t\t\t <4> 3:45pm";
								cout<< "\n\t\t\t\t <5> 6:00pm";
								cout<< "\n\t\t\t\t Please select Movie Timing :\t";
								cin>>b;
								
							switch(b)
							{
								case 1:
									system("CLS");
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 8:45am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 1:30pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 1:30pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 3:45pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 3:45pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 6:00pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 6:00pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout << "\n\t\t\t\t You have Selected 'DEMON SLAYER - Mugan Train'";
								cout<< "\n\t\t\t\t <1> 8:45am";
								cout<< "\n\t\t\t\t <2> 11:15am";
								cout<< "\n\t\t\t\t <3> 1:30pm";
								cout<< "\n\t\t\t\t <4> 3:45pm";
								cout<< "\n\t\t\t\t <5> 6:00pm";
								cout<< "\n\t\t\t\t Please select Movie Timing :\t";
								cin>>b;
							switch(b)
							{
								case 1:
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 8:45am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 1:30pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 1:30pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 3:45pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 3:45pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 6:00pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 6:00pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout << "\n\t\t\t\t You have Selected 'Drifting Home'";
								cout<< "\n\t\t\t\t <1> 8:45am";
								cout<< "\n\t\t\t\t <2> 11:15am";
								cout<< "\n\t\t\t\t <3> 1:30pm";
								cout<< "\n\t\t\t\t <4> 3:45pm";
								cout<< "\n\t\t\t\t <5> 6:00pm";
								cout<< "\n\t\t\t\t Please select Movie Timing :\t";
								cin>>b;
							switch(b)
							{
								case 1:
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 8:45am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 1:30pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 1:30pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 3:45pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 3:45pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 6:00pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 6:00pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
										cout<<"\n\n\t\t\t\t Press (1) TO BUY AGAIN?\n\n";	
										cin>>user;

										}
										else
										{
											cout<<"\n Please try again.";
										}
									break;
						}
					//Drifting Home FINISHED===============================================================================
						break;
						case 5:
							system("CLS");
								cout << "\n\t\t\t\t You have Selected 'Bubble'";
								cout<< "\n\t\t\t\t <1> 8:45am";
								cout<< "\n\t\t\t\t <2> 11:15am";
								cout<< "\n\t\t\t\t <3> 1:30pm";
								cout<< "\n\t\t\t\t <4> 3:45pm";
								cout<< "\n\t\t\t\t <5> 6:00pm";
								cout<< "\n\t\t\t\t Please select Movie Timing :\t";
								cin>>b;
								
							switch(b)
							{
								case 1:
									system("CLS");
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 8:45am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 11:15am \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 1:30pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 1:30pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 3:45pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 3:45pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
								cout<<"\n\t\t\t\t Price of Tickets are :";
								cout<<"\n\t\t\t\t (1)SILVER - 160/- \n\t\t\t\t (2) GOLD - 200/-";
								cout<<"\n\t\t\t\tPlease select (1) or (2) : \t";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 6:00pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
											cout<<"\n\n\t\t\t\t YOUR SHOW TIMING IS 6:00pm \n\t\t\t\t ******TICKET CONFIRMED******.\n\n";
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
			//Bubble FINISHED===============================================================================
				}
		
			
				//MOVIE TIMING========================>>
				break;
				int p;			
					case 2:
						system("CLS");
						cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n==================================================================================================================================================================================================================";
						cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t MOVIE TIMINGS ARE AS FOLLOWS:\n";
						cout<<"\n==================================================================================================================================================================================================================";
							cout<< "\n\t\t\t\t YOUR NAME \t\t Jujutsu Kaisen 0 \t\t DEMON SLAYER - Mugan Train \t\t Drifting Home \t\t Bubble";
							cout<< "\n\t\t\t\t 1. 8:45am \t\t 1. 8:45am \t\t\t 1. 8:45am \t\t\t\t 1. 8:45am \t\t 1. 8:45am ";
							cout<< "\n\t\t\t\t 2. 11:15am \t\t 2. 11:15am \t\t\t 2. 11:15am \t\t\t\t 2. 11:15am \t\t 2. 11:15am ";
							cout<< "\n\t\t\t\t 3. 1:30pm \t\t 3. 1:30pm \t\t\t 3. 1:30pm \t\t\t\t 3. 1:30pm \t\t 3. 1:30pm ";
							cout<< "\n\t\t\t\t 4. 3:45pm \t\t 4. 3:45pm \t\t\t 4. 3:45pm \t\t\t\t 4. 3:45pm \t\t 4. 3:45pm ";
							cout<< "\n\t\t\t\t 5. 6:00pm \t\t 5. 6:00pm \t\t\t 5. 6:00pm \t\t\t\t 5. 6:00pm \t\t 5. 6:00pm \n\t";
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
			cout << "\n\n\n\t\t\t\t\t\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t INVALID USERNAME or PASSWORD. ACCESS DENIED\n";
			cout << "\n\t\t\t\t\t\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\t";
			}
		goto top1;

}

