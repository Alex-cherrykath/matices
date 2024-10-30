#ifndef __M22_h__
#define __M22_h__

//fonction d'addition de deux matrices 2x2
void addition(float A[2][2], float B[2][2],float resultat1[2][2]);

//fonction de soustraction de deux matrices 2x2
void soustraction(float A[2][2], float B[2][2],float resultat2[2][2]);

//fonction de multiplication de deux matrices 2x2
void multiplication1(float A[2][2], float B[2][2],float resultat3[2][2]);

//fonction pour determinant de deux matrices 2x2
void determinant(float A[2][2],float B[2][2],float &detA, float &detB);

//fonction pour determiner l'inverse d'une matrice 2x2
void inverse (float A[2][2],float invers[2][2], float detA);

//fonction pour determiner la trace d'une matrice 2x2
void mat_trace(float A[2][2],float &trace);

//fonction pour determiner la transposée d'une matrice 2x2
void transpose(float A[2][2],float resultat[2][2]);

#endif