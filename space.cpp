#include <iostream>
using namespace std;

int main() {
  double weight;
  int planet;

  std::cout << "Please enter your Earth weight: \n";
  std:: cin >> weight;

  std::cout << "\nI have information for the following planets:\n\n";
  std::cout << "1.Venus\n2.Mars\n3.Jupiter\n4.Saturn\n5.Uranus\n6.Neptune\n\n";

  std::cout << "Which planet are you visiting? ";
  std::cin >> planet;

  switch(planet) {
    case 1:
      weight = weight * 0.78;
      break;
    case 2: 
      weight = weight * 0.39;
      break;
    case 3:
      weight = weight * 2.65;
      break;
    case 4:
      weight = weight * 1.17;
      break;
    case 5:
      weight = weight * 1.05;
      break;
    case 6:
      weight = weight * 1.23;
      break;
    default:
      std::cout << "You have entered an invalid planet!";
  }
  std::cout << "\nYour weight: " << weight << "\n";
  return 0;
}