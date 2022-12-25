 //*run this program using the console pauser or add your own getch, system("pause") or input loop */
// By Comments We Explain Program  

/* Kimia Mehri & Mahsa Jafari */
// The First Star Project

/* Snake Game */

// Start

#include <iostream>
#include <conio.h> 
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

int x , y , Fruit_X , Fruit_Y;
int Score , GameOver , flag;
int i , j;

int const width = 40;
int const height = 20;

int tail_x[200] , tail_y[200] , n_tail;

enum Direction{ Stop = 0 , Left , Right , UP , Down };
Direction Dir;

// Function to Generate the Fruits
// Within the boundaries
void setup(){
	
	GameOver = 0;
	
	// Stores height & width
	x = width/2;
	y = height/2;
	
	Fruit_X = rand() % width;
	Fruit_Y = rand() % height;
	
	Score = 0;
	
	n_tail = 0;
	
    Dir = Stop;
		
}

// Function to Draw the boundaries
void draw(){
	
	system("cls");
	
	for(i=0; i<width; i++){
		cout << "-";
	} 
	cout << endl;
		
	for(i=0; i<height; i++){
		for(j=0; j<width; j++){
			if(j == 0 || j == width-1){
				cout << "|";
			}
			
			else if(j == x && i == y){
				cout << "O";
			}
			
			else if(j == Fruit_X && i == Fruit_Y){
				cout << "*"; 
			}
			
			else {
				
				flag = 0;
				for(int k=0; k<n_tail; k++)
					if(j == tail_x[k] && i == tail_y[k]){
						cout << "o";
						flag = 1;
					}
					if(!flag){
						cout << " ";
					}
			   	}
			}
					
	cout << endl;
	}
		
	for(i=0; i<width; i++)
		cout << "-";

	cout << endl;
	cout << "* Score = " << Score << " *";
	cout << "\n";
	cout << "* Press (X) to Exit the Game *";
   
}	

// Function to take input
void input(){
	
	if(kbhit()){
		switch(getch()){
			
			case 'A':
			case 'a':
				Dir = Left;
				break;
			
			case 'D':
			case 'd':
				Dir = Right;
				break;
			
			case 'W':	
			case 'w':
				Dir = UP;
				break;
			
			case 'S':	
			case 's':
				Dir = Down;
				break;
				
			case 'X':
			case 'x':
				GameOver = 1;
				break;		
		}
	}		
}

// Function to explain logic of Game
void logic(){
	
	// When Snake eat fruit
	// Then add to snake's tail
	for(i = n_tail-1; i >= 1; i--){
		tail_x[i] = tail_x[i-1];
		tail_y[i] = tail_y[i-1];
	}
	
	tail_x[0] = x;
	tail_y[0] = y;
	
	// Result of Direction inputs
	switch(Dir){
		
		case Left:
			x--;
			break;
			
		case Right:
			x++;
			break;
			
		case UP:
			y--;
			break;
			
		case Down:
			y++;
			break;
			
	}
	
	if(x > width){
		x = 1;
	}
	else if(x <= 0){
		x = width-1;
	}
	
	// IF the game is over
	if(y < 0 || y > height)
	GameOver = 1;
		
    // IF Snake reaches Fruit
    // Then Update The score & tail	
	if(x == Fruit_X && y == Fruit_Y){
		
		Score = Score + 10;
		
		Fruit_X = rand() % width;
	    Fruit_Y = rand() % height;
	    
	    n_tail++;
	    		
	}		
}

// Driver Code
int main(){
	
	srand(time(NULL));
	
	// Generation Boundary
	setup();
	
	// Until The Game is Over
	while(!GameOver){
		
		// Function Call
		draw();
		input();
		logic();
		
		// Snake's & Space's Speed
		sleep(0.9);
		
    }
	
	// IF Snake hit to width
	// of the boundaries 
	// This explanation means : 
	// !!GameOver!! //
	if(y < 0 || y > height){
		
	GameOver = 1;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "------------------";
	cout << endl;
	cout << "<  !!GameOver!!  >";
	cout << endl;
	cout << "------------------";
	
	}
	
	getch();
	
}

// Have a Good Time
// The End