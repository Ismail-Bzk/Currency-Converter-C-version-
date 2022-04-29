/*
 * cette vue fabrique l’interface graphique à l’aide
 * de la bibliothèque libsx
 *
 * @author: Vincent GranetVincent.Granet@univ−cotedazur.fr
 * Creation @date: 29−Apr−2020 21:05
 * Last file update: 28−May−2020 11:41
 */
#include <stdio.h>
#include <stdlib.h>
#include <libsx.h>
#include "modele.h"
#include "callbacks.h"

#define TAILLEZONESAISIE 260

Widget ZoneSaisie; // ZoneSaisie variable


/* Rôle: création et assemblage des widgets */
void init_display(int argc, char *argv[], void *d)
{
	 Widget BQuit, BYuans, BEuros;
// créer les composants graphiques
 	BQuit = MakeButton(" Quit ", quit, NULL);
 	BYuans = MakeButton(" Yuans ", yuans, d);
 	BEuros = MakeButton(" Euros ", euros, d);
 	ZoneSaisie = MakeStringEntry(NULL, TAILLEZONESAISIE, NULL, NULL);
// assembler les composants graphiques
 		SetWidgetPos(BQuit, PLACE_UNDER, ZoneSaisie, NO_CARE, NULL);
 	SetWidgetPos(BEuros, PLACE_RIGHT, BQuit, PLACE_UNDER, ZoneSaisie);
	 SetWidgetPos(BYuans, PLACE_RIGHT, BEuros, PLACE_UNDER, ZoneSaisie);
// pour gérer les couleurs
 	GetStandardColors();
// pour afficher l’interface
 	ShowDisplay();
}
