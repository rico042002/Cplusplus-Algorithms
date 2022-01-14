#include <iostream>
#include <cmath>

int main() {
  double pesos, reais, soles, dollars;
  std::cout << "Enter number of Columbian Pesos: " << "\n";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: " << "\n";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: " << "\n";
  std::cin >> soles;
/*dollars = (conversion_rate1 * currency1) + (conversion_rate2 * currency2) + (conversion_rate3 * currency3)*/
  dollars =  (0.048 * pesos) + (0.18 * reais) + (0.24 * soles);

  std::cout << "US Dollars = " << round(dollars) << "\n";

  return 0;

}