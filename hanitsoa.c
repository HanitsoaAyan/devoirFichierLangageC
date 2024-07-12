#include <stdio.h>
#include "hanitsoa.h"

void tail(FILE *fic,char* fichier)
{
	int compteur = 0,compteur2=0;
	char mot[100];
	fic = fopen(fichier, "r");
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
void tail_n(FILE* fic, int n,char* fichier)
{
	int compteur = 0,compteur2=0;
	char mot[100];
	fic = fopen(fichier, "r");
	
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
void tail_v(FILE* fic,int n,char* fichier)
{
	printf("==>%s<==\n",fichier);
	tail_n(fic,n,fichier);

}