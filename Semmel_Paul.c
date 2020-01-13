#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int vieJ;
	int vieM;
	int poisonJ;
	int poisonM;
	int pmJ;
	int pmM;
	int actionJ;
	int actionM;
	int degatsP;

	vieJ = 1000;
	vieM = 700;
	poisonJ = 0;
	poisonM = 0;
	pmJ = 5;
	pmM = 8;
	actionM = 0;

	printf("Un monstre vous agresse, defendez vous\n");

	while(vieJ>0 && vieM>0){


	actionJ = 0;

	degatsP = poisonJ*60;
	vieJ -= degatsP;

	printf("Vous prenez %d degats du poison\n",degatsP);
	if (pmJ != 5)
	{
		pmJ ++;
	}
	printf("Vous regagnez 1 PM, vous en avez maintenant %d/5\n",pmJ);

	while(actionJ!=1 && actionJ!=2 && actionJ!=3 && actionJ!=4){
		printf("Vos PV : %d | Votre poison : %d\nPV adversaire : %d | Poison sur l'adveraire : %d\nQue voulez vous faire ?\n1-Attaquer | 2-Se proteger | 3-Appliquer du poison (coute 3 PM) | 4-Retirer votre poison et vous soigner (coute 4 PM)",vieJ,poisonJ,vieM,poisonM);
		scanf("%d",&actionJ);
		if (actionJ==1){
			if (actionM!=2)
			{vieM-=150;printf("En plein dans le mile, vous infligez 150 degats\n");}
			else{vieM-=38;printf("Le monstre reste sur ses gardes, vous infligez 38 degats\n");}
			}
		if (actionJ==2){
				printf("Vous vous protegez\n");
			}
		if (actionJ==3){
			if (pmJ>=3)
			{
				pmJ -= 3;
				poisonM ++;
			}
			else {printf("Vous n'arrivez pas à lancer le sort\n");}
			}		
		if (actionJ==4){
			if (pmJ>=4)
			{
				pmJ-=4;
				poisonJ = 0;
				vieJ += 180;
				if (vieJ>=1000)
				{
					vieJ = 1000;
				}
				printf("Vous n'etes plus empoisonné et vous vous soignez de 180 PV\n");
			}
			else {printf("Vous n'arrivez pas à lancer le sort\n");}
			}
			
		
	}

		actionM = (rand() % (3)) + 1;

		vieM == vieM - poisonM*60;
		printf("Poison %d\n",poisonM);
		if (pmM != 8)
		{
			pmM ++;
		}
		printf("PM %d\n",pmM);

		printf("action mechante%d\n",actionM);
		if (actionM==1){
			if (actionJ!=2)
			{vieJ-=150;printf("degats\n");}
			else{vieJ-=38;printf("degats\n");}
			}
			
		if (actionM==2){
				printf("protection\n");
			}
		if (actionM==3){
			if (pmM>=4)
			{
				pmM -= 4;
				poisonJ ++;
			}
			else {printf("echec\n");}
			}


	}
	if (vieM<=0)
	{printf("Le monstre est mort !\n");}
	else{printf("Vous mourrez...\n");}

	return 0;
}