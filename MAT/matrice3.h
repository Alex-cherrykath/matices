#ifndef __M33_h__
#define __M33_h__

//fonction d'addition de deux metrices 3x3
void addition(float A2[3][3], float B2[3][3],float resultat4[3][3]);

//fonction de soustraction de deux matrices 3x3
void soustraction(float A2[3][3], float B2[3][3],float resultat5[3][3]);

//fonction de multiplication de deux matrices 3x3
void multiplication(float A2[3][3], float B2[3][3],float resultat6[3][3]);

//fonction pour determinant de deux matrices 3x3
void determinant(float A[3][3],float B[3][3],float &detA2, float &detB2);

//fonction pour determiner la trace de la  matrice 3x3
void mat_trace(float A2[3][3],float &trace2);

//fonction pour determiner la transposée de la  matrice 3x3
void transpose(float A2[3][3],float resultat7[3][3]);

//fonction pour determiner l'inverse d'une matrice 3x3
void inver_se (float A2[3][3],float u, float resultat8[3][3]);

#endif