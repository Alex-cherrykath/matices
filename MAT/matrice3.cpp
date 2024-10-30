#include "matrice3.h"

//addition de matrice 3x3
void addition(float A2[3][3], float B2[3][3],float resultat4[3][3]){
    resultat4[0][0]=A2[0][0]+B2[0][0];
    resultat4[0][1]=A2[0][1]+B2[0][1];
    resultat4[0][2]=A2[0][2]+B2[0][2];

    resultat4[1][0]=A2[1][0]+B2[1][0];
    resultat4[1][1]=A2[1][1]+B2[1][1];
    resultat4[1][2]=A2[1][2]+B2[1][2];

    resultat4[2][0]=A2[2][0]+B2[2][0];
    resultat4[2][1]=A2[2][1]+B2[2][1];
    resultat4[2][2]=A2[2][2]+B2[2][2];
}

//soustraction de matrices 3x3
void soustraction(float A2[3][3], float B2[3][3],float resultat5[3][3]){
    resultat5[0][0]=A2[0][0]-B2[0][0];
    resultat5[0][1]=A2[0][1]-B2[0][1];
    resultat5[0][2]=A2[0][2]-B2[0][2];

    resultat5[1][0]=A2[1][0]-B2[1][0];
    resultat5[1][1]=A2[1][1]-B2[1][1];
    resultat5[1][2]=A2[1][2]-B2[1][2];

    resultat5[2][0]=A2[2][0]-B2[2][0];
    resultat5[2][1]=A2[2][1]-B2[2][1];
    resultat5[2][2]=A2[2][2]-B2[2][2];
}

//multiplication de matrices 3x3
void multiplication(float A2[3][3], float B2[3][3],float resultat6[3][3]){
    resultat6[0][0]=A2[0][0]*B2[0][0]+A2[1][0]*B2[1][0]+A2[2][0]*B2[2][0];
    resultat6[0][1]=A2[0][0]*B2[0][1]+A2[1][0]*B2[1][1]+A2[2][0]*B2[2][1];
    resultat6[0][2]=A2[0][0]*B2[0][2]+A2[1][0]*B2[1][2]+A2[2][0]*B2[2][2];

    resultat6[1][0]=A2[0][1]*B2[0][0]+A2[1][1]*B2[1][0]+A2[2][1]*B2[2][0];
    resultat6[1][1]=A2[0][1]*B2[0][1]+A2[1][1]*B2[1][1]+A2[2][1]*B2[2][1];
    resultat6[1][2]=A2[0][1]*B2[0][2]+A2[1][1]*B2[1][2]+A2[2][1]*B2[2][2];

    resultat6[2][0]=A2[0][2]*B2[0][0]+A2[1][2]*B2[1][0]+A2[2][2]*B2[2][0];
    resultat6[2][1]=A2[0][2]*B2[0][1]+A2[1][2]*B2[1][1]+A2[2][2]*B2[2][1];
    resultat6[2][2]=A2[0][2]*B2[0][2]+A2[1][2]*B2[1][2]+A2[2][2]*B2[2][2];
   
}

//determinant de matrice 3x3
void determinant(float A2[3][3],float B2[3][3],float &detA2, float &detB2){
    detA2 = A2[0][0]*A2[1][1]*A2[2][2]+A2[0][1]*A2[1][2]*A2[2][0]+A2[0][2]*A2[1][0]*A2[2][1]-A2[2][0]*A2[1][1]*A2[0][2]-A2[2][1]*A2[1][2]*A2[0][0]-A2[2][2]*A2[1][0]*A2[0][1];
    detB2 = B2[0][0]*B2[1][1]*B2[2][2]+B2[0][1]*B2[1][2]*B2[2][0]+B2[0][2]*B2[1][0]*B2[2][1]-B2[2][0]*B2[1][1]*B2[0][2]-B2[2][1]*B2[1][2]*B2[0][0]-B2[2][2]*B2[1][0]*B2[0][1];
}

//trave de matrice 3x3
void mat_trace(float A2[3][3],float &trace2){
    trace2=A2[0][0]+A2[1][1]+A2[2][2];
}

//transposée de matrice 3x3
void transpose(float A2[3][3],float resultat7[3][3]){
    resultat7[0][0]=A2[0][0];
    resultat7[1][0]=A2[0][1];
    resultat7[2][0]=A2[0][2];

    resultat7[0][1]=A2[1][0];
    resultat7[1][1]=A2[1][1];
    resultat7[2][1]=A2[1][2];

    resultat7[0][2]=A2[2][0];
    resultat7[1][2]=A2[2][1];
    resultat7[2][2]=A2[2][2]; 
}

//inverse de matrice 3x3
void inver_se(float A2[3][3],float u, float resultat8[3][3]){
    float determinant;
    determinant = A2[0][0]*A2[1][1]*A2[2][2]+A2[0][1]*A2[1][2]*A2[2][0]+A2[0][2]*A2[1][0]*A2[2][1]-A2[2][0]*A2[1][1]*A2[0][2]-A2[2][1]*A2[1][2]*A2[0][0]-A2[2][2]*A2[1][0]*A2[0][1];
         u=-1;
        resultat8[0][0] = A2[1][1] * A2[2][2] - A2[1][2] * A2[2][1]* (1 / determinant);
        resultat8[0][1] = u*A2[0][1] * A2[2][2] - A2[0][2] * A2[2][1]* (1 / determinant);
        resultat8[0][2] = A2[0][1] * A2[1][2] - A2[0][2] * A2[1][1]* (1 / determinant);

        resultat8[1][0] = u*A2[1][0] * A2[2][2] - A2[1][2] * A2[2][0]* (1 / determinant);
        resultat8[1][1] = A2[0][0] * A2[2][2] - A2[0][2] * A2[2][0]* (1 / determinant);
        resultat8[1][2] = u*A2[0][0] * A2[1][2] - A2[0][2] *A2[1][0]* (1 / determinant);

        resultat8[2][0] = A2[1][0] * A2[2][1] - A2[1][1] * A2[2][0]* (1 / determinant);
        resultat8[2][1] = u*A2[0][0] * A2[2][1] - A2[0][1] * A2[2][0]* (1 / determinant);
        resultat8[2][2] = A2[0][0] * A2[1][1] - A2[0][1] * A2[1][0]* (1 / determinant);

    }        
