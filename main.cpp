#include <iostream>

int main() {

   int nb_valeur ;

   std:: cout  << "Entrez le nombre de valeurs : " << std :: endl;
   std :: cin >> nb_valeur;

   int valeurs[nb_valeur];

   int* ptr = new int[nb_valeur];
   for (int i=0 ; i<nb_valeur ; i++)
       ptr [i] = valeurs[i] ;

  int minimum;
  int maximum;

  for (int i=0 ; i<nb_valeur ; i++) {
    std::cout << "Entrez une valeur : ";
    std::cin >> valeurs[i];
  }

  minimum = valeurs[0];
  maximum = valeurs[0];
  for (int i=1 ; i<nb_valeur ; i++) {
    if (valeurs[i] < minimum)
      minimum = valeurs[i];
    if (valeurs[i] > maximum)
      maximum = valeurs[i];
  }

  std::cout << "Min = " << minimum;
  std::cout << std::endl;
  std::cout << "Max = " << maximum;
  std::cout << std::endl;

  delete [] ptr ;
}