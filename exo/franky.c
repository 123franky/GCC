#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int nbr;
int a = 0;
int tour = 0;
srand(time(NULL));              
nbr = rand() % 100 + 1; 
printf("Jeu : Devine le nombre entre 1 et 100\n");
while (a != nbr) {
      printf("Entre un nombre : ");
      scanf("%d", &a);

    while (a < nbr && a != nbr) {
         printf("Trop petit !\n");
         printf("Entre un nombre : ");
         scanf("%d", &a);
         tour++;
    } 
    while (a > nbr && a != nbr) {
          printf("Trop grand !\n");
          printf("Entre un nombre : ");
          scanf("%d", &a);
          tour++;
   }  
}
printf("Bravo ! Tu as trouvé en %d essais.\n", tour);
return 0;
}
