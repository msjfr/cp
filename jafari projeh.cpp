#define mahsajafari bool
#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std ;
typedef void mahsa ;
inline mahsa  mahsaa(const char* message)
{
   cout << message << endl ;	
}
inline string fullname (string firstname , string lastname)
{
	return firstname + "   " + lastname ;
}
//mahsa_jafari
 auto answer = 4 ;
int main (){
	system ( " color 2");
    cout << "\a" ;
    mahsa ( "*** GAME MAKER IS ...***");
    Sleep (500);
    cout << fullname (" Mahsa  "," Jafari  ")<< endl;
    Sleep(500);
    typedef unsigned int mahsaj;
	mahsaj a = 0, b = 0 , c = 0, x = 0 , y = 0 , x1 = 0 ;
	srand ( time (0));
	
	a = rand () % 20 + 1 ;
	b = rand () % 20 + 1 ;
	c = rand () % 20 + 1 ;
	
	cout << " a box number is :  " << a << endl;
	Sleep (500);
	cout << " b box number is :  " << b << endl;
	Sleep (500);
	cout << " c box number is :  " << c << endl;
	Sleep (500);
	mahsajafari play = true ;
	mahsajafari user = true ; 
	mahsajafari computer = true ;
	while (play == true)
	{
		while (user == true)
		{
		    cout << " \a ";
			cout << " \nselect one of the boxes {a,b,c} : ";
			Sleep (500);
			char ch ;
			cin >> ch ;
			if (ch != 'a' && ch !='b' && ch != 'c') 
			{
			    cerr << " \nInput is wrong " << endl;
			    Sleep (500);
			    continue ;
			} 
			else if ( ch == 'a' ||  ch == 'b' || ch == 'c')
			{
				switch (ch)
				{
				case 'a' :
					if (a == 0 )
					{
					cout << " \ncomputer is winner and user is loser " << endl;
					Sleep(500);
					mahsajafari computer  = false ;
					mahsajafari play = false ;
					cout << "\n the game is over " << endl;
					Sleep (500);
					cout << " do you want to play the game again ? \nplease Enter numbers  : ";
					Sleep(500);
			        cin >> answer;
					if(answer == 4)
					{
			        mahsajafari computer  = true  ;
					mahsajafari play = true  ;
								
					a = rand () % 20 + 1 ;
                    b = rand () % 20 + 1 ;
	                c = rand () % 20 + 1 ;
	                            
	                cout << " a box number is :  " << a << endl;
	                Sleep (500);
	                cout << " b box number is :  " << b << endl;
                    Sleep (500);
	                cout << " c box number is :  " << c << endl;
	                Sleep (500);
	                break;
					   }
					}
					cout << "\n How many balls do you want to take ? a box number is :  "<< a ;
					Sleep(500);
					cout << " \nyour nymber must be begger than 1 and smaller than a please enter a number : ";
					cin >> x ;
							if ( a >= x && x >= 1)
							{
								a -= x ;
								break ;
							}
							else 
							{
								cerr << "Input is wrong " << endl;
								Sleep (500);
								continue;
							}
							case 'b':
						if (b == 0 )
							{
								cout << " \ncomputer is winner and user is loser " << endl;
								Sleep(500);
								mahsajafari computer  = false ;
								mahsajafari play = false ;
								cout << "\n the game is over " << endl;
								Sleep (500);
								cout << " do you want to play the game again ? \nplease Enter numbers  : ";
								Sleep(500);
								cin >> answer;
								if(answer == 4)
								{
								mahsajafari computer  = true  ;
								mahsajafari play = true  ;
								
								a = rand () % 20 + 1 ;
                                b = rand () % 20 + 1 ;
	                            c = rand () % 20 + 1 ;
	                            
	                            	cout << " a box number is :  " << a << endl;
	                                Sleep (500);
	                                cout << " b box number is :  " << b << endl;
                                   	Sleep (500);
	                                cout << " c box number is :  " << c << endl;
	                                Sleep (500);
	                                break;
								}
							}
							cout << "\n How many balls do you want to take ? b box number is :  "<< b ;
							Sleep(500);
							cout << " \nyour nymber must be begger than 1 and smaller than b please enter a number : ";
							cin >> x ;
							if ( b >= x && b >= 1)
							{
								b -= x ;
								break ;
							}
							else 
							{
								cerr << "Input is wrong " << endl;
								Sleep (500);
								continue;
							}
								case 'c':
						if (c == 0 )
							{
								cout << " \ncomputer is winner and user is loser " << endl;
								Sleep(500);
								mahsajafari computer  = false ;
								mahsajafari play = false ;
								cout << "\n the game is over " << endl;
								Sleep (500);
								cout << " do you want to play the game again ? \nplease Enter numbers  : ";
								Sleep(500);
								cin >> answer;
								if(answer == 4)
								{
								mahsajafari computer  = true  ;
								mahsajafari play = true  ;
								
								a = rand () % 20 + 1 ;
                                b = rand () % 20 + 1 ;
	                            c = rand () % 20 + 1 ;
	                            
	                            	cout << " a box number is :  " << a << endl;
	                                Sleep (500);
	                                cout << " b box number is :  " << b << endl;
                                   	Sleep (500);
	                                cout << " c box number is :  " << c << endl;
	                                Sleep (500);
	                                break;
								}
							}
							cout << "\n How many balls do you want to take ? c box number is :  "<< c ;
							Sleep(500);
							cout << " \nyour nymber must be begger than 1 and smaller than c please enter a number : ";
							cin >> x ;
							if ( c >= x && c >= 1)
							{
								c -= x ;
								break ;
							}
							else 
							{
								cerr << "Input is wrong " << endl;
								Sleep (500);
								continue;
					        }
	            }
	        }
	         while (computer == true)
	   {
			cout << " \a ";
			y = rand() % 3 ;
			if (y == 0)
			 { 
			  cout << " \ncomputer selected a box " << endl;
			  Sleep (500);
			  if ( a != 0)
			  {
			  	x1 = rand() % a+1;
			  	cout << " computer selected " << x1 << " number balls " << endl;
			  	Sleep(500);
			  }
			  if ( a == 0)
			  {
			  	cout << "\n computer is loser and user is winner " ;
			  	Sleep(500);
			  	mahsajafari play = false ;
			  	mahsajafari user = false ;
			  	cout << " \nThe game is over " << endl ;
			  	Sleep (500);
			  	cout << " do you want to play the game again ? \nplease Enter numbers :  " ;
			  	Sleep(500);
			  	cin >> answer ;
			  	if (answer == 4 )
			  	{
			  		mahsajafari play = true ;
			  		mahsajafari user = true ;
			  		
			  		a = rand () % 20 + 1 ;
                    b = rand () % 20 + 1 ;
	                c = rand () % 20 + 1 ;
	                            
	                cout << " a box number is :  " << a << endl;
	                Sleep (500);
	                cout << " b box number is :  " << b << endl;
                    Sleep (500);
	                cout << " c box number is :  " << c << endl;
	                Sleep (500);
	                break;
				  }
			  }
			  a -= x1;
			  break;
						  
				}
				else if ( y == 1)
			{
				cout << " \ncomputer selected b box " << endl;
			  Sleep (500);
			  if ( b != 0)
			  {
			  	x1 = rand() % b+1;
			  	cout << " computer selected " << x1 << " number balls " << endl;
			  	Sleep(500);
			  }
			  if ( b == 0)
			  {
			  	cout << "\n computer is loser and user is winner " ;
			  	Sleep(500);
			  	mahsajafari play = false ;
			  	mahsajafari user = false ;
			  	cout << " \nThe game is over " << endl ;
			  	Sleep (500);
			  	cout << " do you want to play the game again ? \nplease Enter numbers :  " ;
			  	Sleep(500);
			  	cin >> answer ;
			  	if (answer == 4 )
			  	{
			  		mahsajafari play = true ;
			  		mahsajafari user = true ;
			  		
			  		a = rand () % 20 + 1 ;
                    b = rand () % 20 + 1 ;
	                c = rand () % 20 + 1 ;
	                            
	                cout << " a box number is :  " << a << endl;
	                Sleep (500);
	                cout << " b box number is :  " << b << endl;
                    Sleep (500);
	                cout << " c box number is :  " << c << endl;
	                Sleep (500);
	                break;
				  }
			  }
			  b -= x1;
			  break;
			}
			else if ( y == 2)
			{
					cout << " \ncomputer selected c box " << endl;
			  Sleep (500);
			  if ( c != 0)
			  {
			  	x1 = rand() % c+1;
			  	cout << " computer selected " << x1 << " number balls " << endl;
			  	Sleep(500);
		      }
		      if ( c == 0)
			  {
			  	cout << "\n computer is loser and user is winner " ;
			  	Sleep(500);
			  	mahsajafari play = false ;
			  	mahsajafari user = false ;
			  	cout << " \nThe game is over " << endl ;
			  	Sleep (500);
			  	cout << " do you want to play the game again ? \nplease Enter numbers :  " ;
			  	Sleep(500);
			  	cin >> answer;
			  	if (answer == 4 )
			  	{
			  		mahsajafari play = true ;
			  		mahsajafari user = true ;
			  		
			  		a = rand () % 20 + 1 ;
                    b = rand () % 20 + 1 ;
	                c = rand () % 20 + 1 ;
	                            
	                cout << " a box number is :  " << a << endl;
	                Sleep (500);
	                cout << " b box number is :  " << b << endl;
                    Sleep (500);
	                cout << " c box number is :  " << c << endl;
	                Sleep (500);
	                break;
				   }
			    }
			        c -= x1;
			        break;
		        }  
	       }
	   }   
   }
}




	
	   



