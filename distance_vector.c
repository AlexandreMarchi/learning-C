/*
Considerando a estrutura Point do exercício anterior, escreva uma função que recebe um vetor de
pontos, bem como seu tamanho, e informa a distância a cada dois pontos consecutivos do vetor.

Considering the struct point from the past exercise, write a function that receives a vector of points,
such as its length and returns the distance to every two points.
*/

#include <stdio.h>
#include <math.h>

struct point{
    float x;
    float y;
};

typedef struct point Point;

float distance_vector(int n, Point vector[]){

    for(int i=0; i < n; i+=2){
        float x1 = vector[i].x;
        float y1 = vector[i].y;
        float x2 = vector[i+1].x;
        float y2 = vector[i+1].y;
        float distance = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
        printf("Point %d and %d = %f \n", i, i+1, distance);
    }

}

int main(){

    Point vector[]={{3.0,5.0}, {5.0,7.0}, {-1.0, -3.0}, {2.5, -5.0}};
    int length = 4;

    distance_vector(length, vector);

    return 0;
}