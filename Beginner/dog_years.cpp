#include <iostream>

int main() {
  //dog age in human years
  int dog_age = 3;
  int early_years, later_years, human_years;
  /*The first two years of a dog's life count as 21 human years*/
  early_years = 21;
  //Each following year counts as 4 human years
  later_years = (dog_age - 2) * 4;
//Adding early and later years equals human years
  human_years = early_years + later_years;

  std::cout << "My name is is Chance!" << " Ruff ruff, I am " << human_years << "old in human years." << "\n";

  return 0;
}