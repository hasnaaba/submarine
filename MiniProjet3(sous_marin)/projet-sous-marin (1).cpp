#include <stdio.h>
#include <time.h>

void temps_reel(int seconds) {
    /* Init. */
    time_t start_time = 0;
    time_t current_time = 0;

    /* Operate. */
    start_time = time(NULL);
    while(current_time-start_time+1 <= seconds) {
        current_time = time(NULL);
    }
}
class point
{
	public:
	void affiche(void){
	printf("(%d , %d)\n",i,j);
	}

	int i;
	int j;
};

void continuer(point m,point z )
{
	int c;
		printf("capteur de position ... \n");
		temps_reel(2);
		printf("capteur d'energie ... \n");
		temps_reel(5);
		printf("Acquisition de donnees...\n");
		temps_reel(2);
		printf("Suivi ...\n");
		temps_reel(10);

		if (m.i<z.i){
			for(c=m.i;c<z.i;c++){
				printf("	trajet en cours...\n");
			}
		}
		else{
			for(c=z.j;c<m.j;c++){
				printf("	trajet en cours...\n");
			}

		}

}
void Move(point l[],int k){
	printf("Mouvement au point \n");l[k].affiche();
	if (k==6) {
              printf("Retour au point de départ : A  \n");l[0].affiche();

		}

	continuer(l[k],l[k-1]);
	printf("Je suis au point \n");l[k].affiche();

}






int avan_rec(int c,int k){

		if (c==1) {
		k++;
	}
	else{
		k--;
	}
	return k;
}



main ()
{
	int c,k=0;
	point A,A1,B,C,C1,D,l[6];
	A.i=0;A.j=0;
	A1.i=0;A1.j=4;
	B.i=2;B.j=4;
	C.i=4;C.j=4;
	C1.i=6;C1.j=4;
    D.i=6; D.j=0;


	l[0]=A;
	l[1]=A1;
	l[2]=B;
	l[3]=C;
	l[4]=C1;
	l[5]=D;
	l[6]=A;


	//l={A,A1,B,C,C1,D};

	printf("Demarrage...\n");
	temps_reel(2);
	printf("Je suis au point de depart : A \n") ; l[0].affiche();
	while (k<7 && k!=6 )
    {
      printf("entrez 1 pour le point suivant et 0 pour reculer : ");scanf("%d",&c);
		k=avan_rec(c,k);
		Move(l,k);
    }
    printf("arret" );
}
