#include "matrice2.h"

//addition des matrices 2x2
 void addition(float A[2][2], float B[2][2],float resultat1[2][2]){
    resultat1[0][0]=A[0][0]+B[0][0];
    resultat1[0][1]=A[0][1]+B[0][1];
    resultat1[1][0]=A[1][0]+B[1][0];
    resultat1[1][1]=A[1][1]+B[1][1];
}

//soustaction des matrices 2x2
void soustraction(float A[2][2], float B[2][2],float resultat2[2][2]){
    resultat2[0][0]=A[0][0]-B[0][0];
    resultat2[0][1]=A[0][1]-B[0][1];
    resultat2[1][0]=A[1][0]-B[1][0];
    resultat2[1][1]=A[1][1]-B[1][1];
}

//multiplication des matrices 2x2
void multiplication1(float A[2][2], float B[2][2],float resultat3[2][2]){
    resultat3[0][0]=A[0][0]*B[0][0]+A[1][0]*B[1][0];
    resultat3[0][1]=A[0][0]*B[0][1]+A[1][0]*B[1][1];
    resultat3[1][0]=A[0][1]*B[0][0]+A[1][1]*B[1][0];
    resultat3[1][1]=A[0][1]*B[0][1]+A[1][1]*B[1][1];
}

//determinant des matrices 2x2
void determinant(float A[2][2],float B[2][2],float &detA, float &detB){
    detA=0;
    detB=0;
    detA=A[0][0]*A[1][1]-A[1][0]*A[0][1];
    detB=B[0][0]*B[1][1]-B[1][0]*B[0][1];
}

//inverse de matrice 2x2
void inverse (float A[2][2], float invers[2][2], float detA){
    detA=A[0][0]*A[1][1]-A[1][0]*A[0][1];
    float u=-1;
    invers[0][0]=(1/detA)*A[1][1];
    invers[0][1]=(1/detA)*u*A[0][1];
    invers[1][0]=(1/detA)*u*A[1][0];
    invers[1][1]=(1/detA)*A[0][0];

}

//trace de matrice 2x2
void mat_trace(float A[2][2],float &trace){
    trace=0;
    trace=A[0][0]+A[1][1];
}

//transposée de matrice 2x2
void transpose(float A[2][2],float resultat[2][2]){
    resultat[0][0]=A[0][0];
    resultat[1][0]=A[0][1];
    resultat[0][1]=A[1][0];
    resultat[1][1]=A[1][1];
}