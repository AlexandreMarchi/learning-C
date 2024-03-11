/*
Escreva uma função que recebe dois pontos x,y (Point) e devolve a distância entre os mesmos.

Write a function that receives two points x,y and returns the distance between them.
*/

#include <math.h>
#include <stdio.h>


struct point{
    float x;
    float y;
};

typedef struct point Point;

float distance(Point p1, Point p2){
    return sqrt(((p1.x - p2.x) * (p1.x - p2.x)) + ((p1.y - p2.y) * (p1.y - p2.y)));

}


int main(){
    Point p1 = {-2.0f, 7.5f};
    Point p2 = {5.0f, 12.4f};

    float dist = distance(p1,p2);
    printf("Distance between two points = %f ", dist);
    return 0;
}