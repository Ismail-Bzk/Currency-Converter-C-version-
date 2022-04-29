
#pragma once
#include <libsx.h>
#define TAUXDECHANGE 7.87355 // 1 euros = 7.87355 yuans (27 mai 2020)
/*
 * Définition du type ValeurCourante qui représente la valeur
 * courante de la zone d’affichage, avec le taux de change
 */
typedef struct {
double tauxDeChange;
double valeur; // valeur à convertir
} ValeurCourante;


extern void initValeurCourante(ValeurCourante *);
extern void setValeur(ValeurCourante *, double);
extern double getValeur(ValeurCourante);
extern void convertirEnYuans(ValeurCourante *);
extern void convertirEnEuros(ValeurCourante *);
