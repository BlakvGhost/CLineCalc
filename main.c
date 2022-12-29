#include <stdio.h>
#include <stdlib.h>

void main()
{
  float nb, nb2;
  int choix;

  printf("Entrer le premier nombre: ");
  scanf("%f", &nb);
  printf("Entrer le Second nombre: ");
  scanf("%f", &nb2);

  printf("Faites un choix d'operation: \n 1- Somme \n 2- Produit \n 3- Division \n 4- Moyenne \n");
  scanf("%d", &choix);

  if (choix == 1){
    printf("La somme est: %f", nb + nb2);
  }else if (choix == 2) {
    printf("Le produit est: %f", nb * nb2);
  }else if (choix == 3) {
    printf("La division donne: %f", nb / nb2);
  }else if (choix == 4) {
    printf("La moyenne est: %f", (nb + nb2) / 2);
  }else{
    printf("Erreur de choix");
  }

}
