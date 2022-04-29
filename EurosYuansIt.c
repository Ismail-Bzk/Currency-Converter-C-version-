#include <stdio.h>
#include <stdlib.h>
#include "modele.h"


int main(int argc, char *argv[]) {
 	ValeurCourante d;
 	initValeurCourante(&d);
	double n;
// lire un réel qui représente une somme en yuans
 	scanf("%lf", &n);
// on a n yuans
 	setValeur(&d, n);
 	convertirEnEuros(&d);
 	printf("%f euros\n", getValeur(d));
 	convertirEnYuans(&d);
 	printf("%f yuans\n", getValeur(d));
	return EXIT_SUCCESS;
}
