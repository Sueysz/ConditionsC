#include <stdio.h>
#include <stdlib.h>

/* les symboles de bases qui vont m'aider à apprendre les conditions .

   == est égal à

   > est supérieur à

   < est inférieur à

   >= est supérieur ou égal à

   <= est inférieur ou égal à

   != est différent de

   && = et

   || = ou

   ! = non

   les deux derniere sont en ternaires

   ? =esque

   : = else
*/
int main()
{
    int num1 =-1;
    int num2 = 2;
    int num3 = 6;
    if (num1 >= 10) // si mon chiffre est superieur à 10 il m'afficheras le premier printf
    {
            printf ("le numero est superieur a 10\n");
    }
    else if (num1 <=0)// sinon, si le chiffre est negatif
    {
            printf ("le numero est en dessous de 0\n");
    }
    else //sinon il m'afficheras le deuxieme
    {
            printf("le numero est inferieur a 10\n");
    }
    if (num2 > 3|| num3 > 7 ) // j'ai mis 2 variable pour tester la commande "ou"
    {
            printf ("sa fonctionne grace au num3\n");
    }
    else
    {
            printf ("sa fonctionne pas \n");
    }

    /* en booléens les chiffre entier signifie que c'est "vrai" et 0 signifi que c'est "faux" */
    if (0)
    {
        printf("c'est vrai\n");
    }
    else
    {
        printf (" c'est faux\n");
    }
    /* quand une condition est vrai l'ordinateur retien just un if (1) sinon il le remplace par un if (0) pour dire que c'est faux*/

    /*int age = 20 ;
    int majeur = 0;

    majeur = age >= 18;
    printf ("majeur vaut : %d\n", majeur);*/

    int age = 20;
    int majeur = 1;

    /*
    if (majeur)
    {
        printf ("vous etes majeur!");
    }
    else
    {
        printf ("vous etes mineur !");
    }
    */
    if (age == 4)
{
    printf("Salut bebe!");
}
else if (age == 8)
{
    printf("Salut enfant !");
}
else if (age == 16)
{
    printf("Salut crotte de nez !");
}
else if (age == 18)
{
    printf("Salut adulte !");
}
else
{
    printf("Je n'ai pas de reponse pour ton age");
}
/* je test ma variable et j'ai lu qu'on pouvais utiliser la commande switch et case pour faire pareille que if else */

switch (age)
{
    case 4:
    printf("salut bebe!");
    break;
    case 8:
    printf("salut enfant!");
    break;
    case 16 :
    printf("salut crotte de nez!");
    break;// une commande pour demander à l'ordinateur de sortir des accolades
}
    return 0;
}
