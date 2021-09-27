#include <stdio.h>

int main() {
    //exercice1
    int entier1 = 0;
    printf("Entrez un entier : \n", entier1);
    scanf("%d", &entier1);
    int entier2 = 0;
    printf("Entrez un deuxieme entier : \n", entier2);
    scanf("%d", &entier2);
    if (entier1<entier2)
    {
        printf ("L'entier le plus grand des deux est %d.\n", entier2);
    }
    else if (entier2<entier1)
    {
        printf("L'entier le plus grand des deux est %d.\n", entier1);
    }
    else
    {
        printf("Vous avez mis deux meme entiers.\n");
    }

    //exercice2
    int largeur = 0;
    int longueur = 0;
    printf("Saisissez la largeur du rectangle :\n");
    scanf("%d", &largeur);
    printf("Saisissez la longueur du rectangle :\n");
    scanf("%d", &longueur);
    int perimetre = (longueur + largeur)* 2;
    printf("Le perimetre de votre rectangle est %d.\n", perimetre);
    int aire = longueur * largeur;
    printf("L'aire de votre rectangle est %d.\n", aire);

    //exercice3
    const int constante = 3;
    int entier3 = 0;
    printf("Saisissez un entier au clavier : \n");
    scanf("%d", &entier3);
    if (entier3 % constante == 0)
    {
        printf("Votre entier est un multiple de 3\n");
    }
    else
    {
        printf("Votre entier n'est pas un multiple de 3\n");
    }
    if (entier3 >= 10)
    {
        printf("Votre entier est superieur ou egal à 10.\n");
    }
    else
    {
        printf("Votre entier est inferieur à 10.\n");
    }

    //exercice 4
#define AGEENFANT 12
#define AGEJEUNE 17
#define AGEETUDIANT 27
    int ageDuClient = 0;
    int prix = 9;
    int bool = 0;
    printf("\nLe plein tarif est de %ieuros.", prix);
    printf("Entrez votre age pour savoir si vous bénéficiez d'une réduction :\n");
    scanf("%i", &ageDuClient );
    if (ageDuClient <= AGEENFANT )
    {
        prix = 4;
        printf("Vous beneficiez du tarif enfant, cela vous fera %ieuros.\n", prix);

    }
     else if(ageDuClient <= AGEJEUNE )
    {
        prix = 6;
        printf("Vous beneficiez du tarif jeune, cela vous fera %ieuros.\n", prix);

    }
    else if (ageDuClient <= AGEETUDIANT)
    {
        printf("Etes vous étudiant ?Répondez par 0 pour Oui et 1 pour Non.\n");
        scanf("%i", &bool);
        if (bool == 0)
        {
            prix = 6;
            printf("Vous beneficiez du tarif étudiant, cela vous fera %ieuros.\n", prix);

        }
        else
        {
            prix = 9;
            printf("Vous ne beneficiez pas du tarif étudiant, cela vous fera %ieuros.\n", prix);

        }

    }
    else
    {
        prix = 6;
        printf("Vous beneficiez du tarif sénior, cela vous fera %ieuros.\n", prix);
    }

    //exercice 5
    int distributeur = 0;
    printf("Entrez le numero de la boisson:\n");
    scanf("%i", &distributeur);
    if (distributeur == 1)
    {
        printf("La boisson numero 1 est du Coca-cola.\n");
    }
    else if (distributeur == 2)
    {
        printf("La boisson numero 2 est du Ice Tea Lipton.\n");
    }
    else if (distributeur == 3)
    {
        printf("La boisson numero 3 est du Sprite.\n");
    }
    else if (distributeur == 10)
    {
        printf("La boisson numero 10 est du Chocolat chaud.\n");
    }
    else if (distributeur == 11)
    {
        printf("La boisson numero 11 est du Café.\n");
    }
    else
    {
        printf("Erreur. Ce numero ne correspond à aucune boisson.\n");
    }

    //exercice6
    float note1 = 0.0f;
    float note2 = 0.0f;
    float note3 = 0.0f;
    float moyenne = 0.0f;
    printf("Entrez une note sur 20:\n");
    scanf("%f", &note1);
    if (note1<0 && note1>20)
    {
        printf("Recommencez.\n");
    }
    else
    {
        printf("Entrez une deuxième note sur 20:\n");
        scanf("%f", &note2);
        if (note2<0 && note2>20) {
            printf("Recommencez.\n");
        }
        else
            {
                printf("Entrez une troisième note sur 20:\n");
                scanf("%f", &note3);
                moyenne = (note1 + note2 + note3)/3;
                printf("La moyenne est conforme.\n La moyenne est de %f.\n", moyenne);

            }
        }

    //exercice 7
    int nbClasseO = 0;
    int nbClasseC = 0;
    int nbEleves = 0;
    int totalEleves = 0;
    printf("Entrez le nombre de classes ouvertes:\n");
    scanf("%i", &nbClasseO);
    printf("Entrez le nombre de classes créées:\n");
    scanf("%i", &nbClasseC);
    for (int i = 0;i < nbClasseC;i++)
    {
        printf("Entrez le nombre d'eleves dans cette classe crée:\n");
        scanf("%i", &nbEleves);
        totalEleves = totalEleves + nbEleves;
    }
    printf("Le nombre total d'eleves est %i.\n", totalEleves);

    //exercice 8
    int nb = 0;
    printf("Saisissez un nombre entier:\n");
    scanf("%i", &nb);
    while ( nb % 2 != 0)
    {
        printf("Saisissez un autre nombre entier:\n");
        scanf("%i", &nb);

    }
    printf("Le nombre est un multiple de 2.\n");
    while (nb % 7 != 0)
    {
        printf("Saisissez un autre nombre entier:\n");
        scanf("%i", &nb);
    }
    printf("Le nombre est un multiple de 7.\n");

    //exercice 9
    int nbPierre = 0;
    int pourpyramide = 0;
    printf("Indiquez le nombre de pierres que vous avez:\n");
    scanf("%i", &nbPierre);
    pourpyramide = nbPierre * nbPierre;
            
    //exercice 10
    float nbPositif = 0.0f;
    float ttNbPositif = 0.0f;
    float moyennePositive = 0.0f;
    float i = 1.0f;
    printf("Saisissez un nombre entier positif:\n");
    scanf("%f", &nbPositif);
    while (nbPositif >= 0.0f)
    {
        printf("Saisissez un nombre entier positif. Mettez un nombre negatif pour arreter.\n");
        scanf("%f", &nbPositif);
        ttNbPositif = ttNbPositif + nbPositif;
        moyennePositive = ttNbPositif / i;
        i = i + 1.0f;
    }
    printf("La moyenne des nombres saisis vaut %f.", moyennePositive);

    return 0;
    }
