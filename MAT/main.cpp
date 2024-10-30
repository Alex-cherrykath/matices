#include<iostream>
#include"matrice2.h"
#include"matrice3.h"

int main (int argc, char** argv){
    int choix; 

    //déclaration des matrices à utiliser pour le cas 2x2
     float A[2][2], B[2][2];
     float resultat[2][2],invers[2][2],resultat1[2][2], resultat2[2][2],resultat3[2][2];
     float detA, detB, trace;

    // //déclaration des matrices à utiliser pour le cas 3x3
    float A2[3][3], B2[3][3];
    float resultat4[3][3], resultat5[3][3],resultat6[3][3],resultat7[3][3],resultat8[3][3];
    float detA2, detB2, trace2;   
    float u;       
    
    //choix du type de matrice
    std::cout<<"Veuillez choisir le type de matrice qui vous conviendra\n";
    std::cout<<"1. matrice 2x2\n";
    std::cout<<"2. matrice 3x3\n";
    std::cin>>choix;

    switch(choix){
        //choix de la matrice 2x2
        case 1:

        //remplissage des matrices
             std::cout<<"Entrez les valeurs de la premiere matrice\n";
             for(int i=0; i<2; i++){
                for(int j=0; j<2; j++){
                    std::cin>>A[i][j];
                }
             }
             std::cout<<"la premiere\n";
             for(int i=0; i<2; i++){
                for(int j=0; j<2; j++){
                    std::cout<<A[i][j]<<"   ";
                }
                 std::cout<<"\n"<<"\n";
             }
            
            std::cout<<"Entrez les valeurs de la deuxieme  matrice\n";
            for(int i=0; i<2; i++){
                for(int j=0; j<2; j++){
                    std::cin>>B[i][j];
                }
            }
            std::cout<<"la deuxieme\n";
             for(int i=0; i<2; i++){
                for(int j=0; j<2; j++) {
                    std::cout<<B[i][j]<<"   ";
                }
                std::cout<<"\n"<<"\n";
             }
             
            //addition des deux matrices

            addition(A, B, resultat1);
            std::cout<<"la somme des matrices est\n";
            for(int i=0; i<2; i++){
                for(int j=0; j<2; j++) {
                     std::cout<<resultat1[i][j]<<"  ";
                }
                  std::cout<<"\n"<<"\n";
            }
          

            //soustraction des deux matrices

            soustraction(A, B, resultat2);
            std::cout<<"la soustraction des matrices est\n";
              for(int i=0; i<2; i++){
                for(int j=0; j<2; j++) {
                     std::cout<<resultat2[i][j]<<"  ";
                }
                std::cout<<"\n"<<"\n";
            }
            std::cout<<"\n"<<"\n";

            //multiplication des deux matrices
            multiplication1(A, B, resultat3);
            std::cout<< "le produit des deux matrices est\n";
              for(int i=0; i<2; i++){
                for(int j=0; j<2; j++) {
                     std::cout<<resultat3[i][j]<<"  ";
                }
                std::cout<<"\n"<<"\n";
            }
            

            // determinant des  matrices
            determinant(A, B,detA,detB);
            
            std::cout<<"le determinant de la premiere matrice est:"<<detA<<"\n";
            std::cout<<"le determinant de la deuxieme matrice est:"<<detB<<"\n";
            std::cout<<"\n"<<"\n";

            //inverse des matrices
            inverse(A, invers, detA);  
            std::cout<<"l'inverse de la premiere matrice est:"<<invers<<"\n  ";
             for(int i=0; i<2; i++){
                for(int j=0; j<2; j++) {
                     std::cout<<invers[i][j]<<"  ";
                }
                std::cout<<"\n"<<"\n";
            }

            // trace des matrices
            mat_trace(A,trace);
            std::cout<<"la trace de cette matrice est:"<<trace<<"\n";
            std::cout<<"\n"<<"\n";

            //teansposee de matice2x2
            transpose(A,resultat);
            std::cout<<"la transposee cette matrice est:"<<"\n";
              for(int i=0; i<2; i++){
                for(int j=0; j<2; j++) {
                     std::cout<<resultat[i][j]<<"  ";
                }
                std::cout<<"\n"<<"\n";
            }
            
            break;
            //choix de la matrice 3x3
        case 2:
                std::cout<<"Entrez les valeurs de la premiere matrice\n";
             for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    std::cin>>A2[i][j];
                }
             }
             std::cout<<"la premiere\n";
             for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    std::cout<<A2[i][j]<<"   ";
                }
                std::cout<<"\n"<<"\n";
             }
             
            std::cout<<"Entrez les valeurs de la deuxieme  matrice\n";
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    std::cin>>B2[i][j];
                }
            }
            std::cout<<"la deuxieme\n";
             for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    std::cout<<B2[i][j]<<"   ";
                }
                std::cout<<"\n"<<"\n";
             }

            //addition des deux matrices

            addition(A2, B2, resultat4);
            std::cout<<"la somme des matrices est\n";
             for(int i=0; i<3; i++){
                for(int j=0; j<3; j++) {
                     std::cout<<resultat4[i][j]<<"  ";
                }
                std::cout<<"\n"<<"\n";
            }  
            

            //soustraction des deux matrices

            soustraction(A2, B2, resultat5);
            std::cout<<"la soustraction des matrices est\n";
              for(int i=0; i<3; i++){
                for(int j=0; j<3; j++) {
                     std::cout<<resultat5[i][j]<<"  ";
                }
                std::cout<<"\n"<<"\n";
            }
            

            //multiplication des deux matrices
            multiplication(A2, B2, resultat6);
            std::cout<< "le produit des deux matrices est\n";
              for(int i=0; i<3; i++){
                for(int j=0; j<3; j++) {
                     std::cout<<resultat6[i][j]<<" | ";
                }
                 std::cout<<"\n"<<"\n";
            }

            // determinant des  matrices
            determinant(A2,B2,detA2,detB2);
            std::cout<<"le determinant de la premiere matrice est:"<<detA2<<"\n";
            std::cout<<"le determinant de la deuxieme matrice est:"<<detB2<<"\n";
            std::cout<<"\n"<<"\n";

            //tranposee des matrices
             transpose(A2,resultat7);
            std::cout<<"la transposee cette matrice est:"<<"\n";
              for(int i=0; i<3; i++){
                for(int j=0; j<3; j++) {
                     std::cout<<resultat7[i][j]<<"  ";
                }
                std::cout<<"\n"<<"\n";
            }
            

            // trace des matrices
            mat_trace(A2,trace2);
            std::cout<<"la trace de cette matrice est:"<<trace2<<"\n";
            std::cout<<"\n"<<"\n";

            //inverse matrice 3x3
            inver_se( A2,u, resultat8);
            std::cout<<"la trace de cette matrice est:"<<resultat8<<"\n";
            
            break;
      }
      
      return 1;
}
