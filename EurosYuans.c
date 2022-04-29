#include <stdio.h>
#include <stdlib.h>
#include <libsx.h>
#include "modele.h"
#include "vue.h"

int main(int argc, char *argv[]) {
	ValeurCourante d;
 	if (OpenDisplay(argc, argv) ==0) {
 		fprintf(stderr,"Can’t open display\n");
		return EXIT_FAILURE;
 	}
// intialliser la donnée partagée entre le modèle
// et l’IG
 	initValeurCourante(&d);
// créer l’IG et l’afficher à l’écran
 	init_display(argc, argv, &d);
 	MainLoop();
	return EXIT_SUCCESS;
}
