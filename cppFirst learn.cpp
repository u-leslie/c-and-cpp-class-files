#include<iostream>
//int main(){
//	std::cout<< "HI there";
//	int x;
//	std::cout<<"type a number :";
//	std::cin>> x;
//	std::cout<<"Your number is:"<<x;
//}
int main(){
// We put "1" to indicate there is a ship.
bool ships[4][4] = {
  { 0, 1, 1, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 1, 0 },
  { 0, 0, 1, 0 }
};

// Keep track of how many hits the player has and how many turns they have played in these variables
int hits = 0;
int numberOfTurns = 0;

// Allow the player to keep going until they have hit all four ships
while (hits < 4) {
  int row, column;

  std::cout << "Selecting coordinates\n";

  // Ask the player for a row
  std::cout << "Choose a row number between 0 and 3: ";
  std::cin >> row;

  // Ask the player for a column
  std::cout << "Choose a column number between 0 and 3: ";
  std::cin >> column;

  // Check if a ship exists in those coordinates
  if (ships[row][column]) {
    // If the player hit a ship, remove it by setting the value to zero.
    ships[row][column] = 0;

    // Increase the hit counter
    hits++;

    // Tell the player that they have hit a ship and how many ships are left
    std::cout << "Hit! " << (4-hits) << " left.\n\n";
  } else {
    // Tell the player that they missed
    std::cout << "Miss\n\n";
  }

  // Count how many turns the player has taken
  numberOfTurns++;
}

std::cout << "Victory!\n";
std::cout << "You won in " << numberOfTurns << " turns";	
}

