/*
 * Les fonctions du modèle qui assure la conversion des euros vers des
 * yuans et réciproquement
 *
 * Note : module indépendant de toute interfaces utilisateurs
 *
 * @author: Vincent GranetVincent.Granet@univ−cotedazur.fr
 * Creation @date: 29−Apr−2020 21:05
 * Last file update: 28−May−2020 10:25
*/
#include <stdlib.h>
#include <stdio.h>
#include "modele.h"
/* Rôle : initialise la valeur courante det le taux de change
 */
void initValeurCourante(ValeurCourante *d) {
 d->tauxDeChange = TAUXDECHANGE;
 d->valeur = 0;
}
/*
 * Rôle : affecte la valeur v à la valeur courante d
 */
void setValeur(ValeurCourante *d, double v) {
 d->valeur = v;
}
/*
 * Rôle : renvoie la valeur courante de d
 */
double getValeur(ValeurCourante d) {
return d.valeur;
}
/*
 * Antécédent : la valeur courante est en euros
 * Rôle : convertit la valeur courante en yuans
 */
void convertirEnYuans(ValeurCourante *d) {
 d->valeur = d->valeur / d->tauxDeChange;
}
/*
 * Antécédent : la valeur courante est en yuans
 * Rôle : convertit la valeur courante en euros
 */
void convertirEnEuros(ValeurCourante *d) {
 d->valeur = d->valeur * d->tauxDeChange;
}

