#include <stdio.h>
#include "hanitsoa.h"

void tail(FILE *fic)
{
	int compteur = 0,compteur2=0;
	char mot[100];
	fic = fopen("/home/ayan/ayan1", "r");
	if (fic == NULL)
	{
		printf("erreur\n");
	}
	else
	{
		while (fgets(mot,100,fic)!=NULL)
			compteur++;
		
		rewind(fic);
		
		while (fgets(mot,100,fic)!=NULL)
		{
			compteur2++;
			if(compteur2>=compteur-10)
				printf("%s", mot);
		}
	}
}
void nombre(int* n)
{
	printf("Entrez n : ");
	scanf("%d",n);
}
void tail_n(FILE* fic, int n)
{
	int compteur = 0,compteur2=0;
	char mot[100];
	fic = fopen("fichier.txt", "r");
	printf("Affiche les %d derniers lignes\n", n);
	if (fic == NULL)
	{
		printf("erreur\n");
	}
	else
	{
		while (fgets(mot,100,fic)!=NULL)
			compteur++;
		
		rewind(fic);
		
		while (fgets(mot,100,fic)!=NULL)
		{
			compteur2++;
			if(compteur2>=compteur-n)
				printf("%s", mot);
		}
	}
}
