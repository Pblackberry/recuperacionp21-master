#include <stdio.h>
#include <math.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float puntos[4][3];
    char componente[3]={'X','Y','Z'};
    float areas[4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            puntos[i][j]=ingreseComponente(componente[j],i);
        }    
    }
    if (validarPiramide(puntos)==1)
    {
        float perimetro = calcularPerimetro(puntos);
        printf("El perimetro de la piramide es %f",perimetro);
        float areaSuperficial = calcularAreaSuperficial(puntos);
        printf("El area superficial de la piramide es %f",areaSuperficial);
        float volumen = calcularVolumen(puntos);
        printf("El area superficial de la piramide es %f",areaSuperficial);
    }else
    {
        printf("No es una piramide");
    }
    

    return 0;
}

float ingreseComponente (char componente, int i){
    float valorComponente=0;
    
        printf("ingrese un componente %c del punto %d: ", componente, i);
        scanf("%f", &valorComponente);
    

    return valorComponente;
}

float validarpiramide(float puntos[4][3]){
    float validar=0;
    //punto centro de la base
    float puntoCentrox=(puntos[0][0]+puntos[1][0]+puntos[2][0])/3;
    float puntoCentroy=(puntos[0][1]+puntos[1][1]+puntos[2][1])/3;
    //comprobación
    if (puntoCentrox==puntos[3][0] && puntoCentroy==puntos[3][1] ){
        validar=1;
    }

    return validar;
}

//distancia = sqrt((x2 - x1)^2 + (y2 - y1)^2 + (z2 - z1)^2)

float calcularPerimetro(float puntos[4][3]){
    float distancia1=0, distancia2=0, distancia3=0, perimetro=0;
    distancia1=sqrt((pow(puntos[1][0]-puntos[0][0],2))+(pow(puntos[1][1]-puntos[0][1],2))+(pow(puntos[1][2]-puntos[0][2],2)));
    distancia2=sqrt((pow(puntos[2][0]-puntos[1][0],2))+(pow(puntos[2][1]-puntos[1][1],2))+(pow(puntos[2][2]-puntos[1][2],2)));
    distancia3=sqrt((pow(puntos[2][0]-puntos[0][0],2))+(pow(puntos[2][1]-puntos[0][1],2))+(pow(puntos[2][2]-puntos[0][2],2)));

    perimetro=distancia1+distancia2+distancia3;

    return perimetro;
}

float calcularAreaSuperficial(float puntos[4][3]){
    
}
