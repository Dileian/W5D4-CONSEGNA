/*File: Esercizio_calcolo_aree.c*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    double D, areaQuadrato, areaCerchio, areaTriangolo;

    float d; // Diametro del cerchio e lato del quadrato e lato del triangolo                                                                                                                                                               
    float Aq, Ac, At; // Area del quadrato, Area del cerchio, Area del triangolo                                                                                                                                                            
    float r; // Raggio del cerchio                                                                                                                                                                                                          

    // Funzione del programma                                                                                                                                                                                                               
    printf("Calcolo delle aree di quadrato, cerchio e triangolo equilatero \n");
    printf("con d che rappresenta il valore del diametro del cerchio, il lato del quadrato e i lati del triangolo \n\n");

    // Esecuzione programma                                                                                                                                                                                                                 
    printf("Metti valore di D");
    scanf("%f", &d);

    //Calcolo dell'area del quadrato                                                                                                                                                                                                        
    Aq= d * d;
    printf("L'area del quadrato di lato %.2f è: %.2f\n", d, Aq);

    //Calcolo dell'area del cerchio                                                                                                                                                                                                         
    r= d / 2; // Calcolo del raggio del cerchio                                                                                                                                                                                             
    Ac= r * r * M_PI; // Calcolo dell'area del cerchio usando Pi greco da math.h                                                                                                                                                            
    printf("L'area del cerchio di diametro %.2f è: %.2f\n", d, Ac);

    //Calcolo dell'area del triangolo equilatero                                                                                                                                                                                            
    At= d * d *(sqrt(3)/(4));
    printf("L'area del triangolo equilatero di lato %.2f è: %.2f\n", d, At);

    //Fine del programma                                                                                                                                                                                                                    
    printf("Arrivederci, grazie per aver scelto questo programma! \n");
    return 0;

    }


