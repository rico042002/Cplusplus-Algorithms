#include <iostream>
#include <stdlib.h>

//Live long and prosper
int main() {
srand (time(NULL));

/* only allows for a choice of 1-3 => int computer = rand() % 3 + 1; */
int computer = rand() % 5 + 1; //Random number 1-5
int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";
 
std::cout << "1) Rock\n";
std::cout << "2) Paper\n";
std::cout << "3) Scissors\n";
std::cout << "4) Lizard\n";
std::cout << "5) Spock\n";
std::cout << " SHOOT! \n";

int rock = 1;
int paper = 2;
int scissors = 3;
int lizard = 4;
int spock = 5;

std::cout << "Please choose one: ";

std::cin >> user;

/* rock > scissors -
   scissors > paper -
   paper > rock -
   lizard > spock -
   spock > scissors -
   scissors > lizard -
   lizard > paper -
   paper > spock -
   spock > rock -
   rock  > lizard
   */
   
   std::cout << "Computer: " << computer << "\n\n";

if (user == rock && computer == scissors) {
  std::cout << "You Win!\n";
} else if (user == scissors && computer == paper) {
  std::cout << "You Win!\n";
} else if (user == paper && computer == rock) {
  std::cout << "You Win!\n";
} else if (user == lizard && computer == spock) {
  std::cout << "You Win!\n";
} else if (user == spock && computer == scissors) {
  std::cout << "You Win!\n";
} else if (user == scissors && computer == lizard) {
  std::cout << "You Win!\n";
} else if (user == lizard && computer == paper) {
  std::cout << "You Win!\n";
} else if (user == paper && computer == spock) {
  std::cout << "You Win!\n";
} else if (user == spock && computer == rock) {
  std::cout << "You Win!\n";
} else if (user == rock && computer == lizard) {
  std::cout << "You Win!\n";
} else if (user == computer) {
  std::cout << "Tie!\n";
} else {
  std::cout << "You Lose\n";
  }
  return 0;
  system("pause > 0");
}