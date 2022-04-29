#include <stdlib.h>
#include <stdio.h>
#include <libsx.h>
#include "modele.h"
#include "vue.h"
#include "callbacks.h"
/*
 * Rôle : termine l’exécution de l’application
 */
void quit(Widget w, void *d) {
 exit(EXIT_SUCCESS);
}
/*
 * Rôle : Affiche dans la zone de saisie la valeur v
 */
static void afficher(const double v) {
const int TailleZoneSaisie =
 TextWidth(GetWidgetFont(ZoneSaisie), GetStringEntry(ZoneSaisie));
char s[TailleZoneSaisie+1];
 sprintf(s, "%-f", v);
 SetStringEntry(ZoneSaisie, s);
}
/*
 * Rôle : callback du bouton yuans.
 * Remplace la valeur qui est dans la zone de saisie, qui
 * représente une valeur en euros, par sa conversion en yuans
 */
void yuans(Widget w, void *d) {
// 1 : récupérer la valeur dans la zone de saisie
// 2 : mettre cette valeur dans la donnée partagée d
 setValeur(d, strtod(GetStringEntry(ZoneSaisie), NULL));
// 3 : convertir en yuan
 convertirEnYuans(d);
// 4 : afficher la conversion dans la zone de saisie
 afficher(getValeur(* (ValeurCourante *) d));
}
/*
 * Rôle : callback du bouton euros.
 * Remplace la valeur qui est dans la zone de saisie, qui
 * représente une valeur en yuans, par sa conversion en euros
 */
void euros(Widget w, void *d) {
// 1 : récupérer la valeur dans la zone de saisie
// 2 : mettre cette valeur dans la donnée partagée d
 setValeur(d, strtod(GetStringEntry(ZoneSaisie), NULL));
// 3 : convertir en yuan
 convertirEnEuros(d);
// 4 : afficher la conversion dans la zone de saisie
 afficher(getValeur(* (ValeurCourante *) d));
}


