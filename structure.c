#include <stdio.h>
#include <string.h>

#define MAX 50

struct Etudiant {
    char nom[50];
    char prenom[50];
    float note;
};

int main() {
    struct Etudiant etu[MAX];
    int n, i;
   
    printf("Combien d'etudiants? ");
    scanf("%d", &n);

    for (i=0; i<n; i++) {
        printf("\nEtudiant %d\n", i+1);

        printf("Nom: ");
        scanf("%s", etu[i].nom);

        printf("Prenom: ");
        scanf("%s", etu[i].prenom);

        printf("Note: ");
        scanf("%f", &etu[i].note);
    }


    printf("LISTE DES ETUDIANTS AYANT NOTES SUPERIEURS OU EGAL A 10:\n");
    for (i=0; i<n; i++) {
        if (etu[i].note >= 10)
        {
            printf("%d %s %s -Note: %.2f\n", i+1, etu[i].nom, etu[i].prenom, etu[i].note);
        }
    }
    return 0;
}
