#include <stdio.h>
#include <math.h>

struct point{
    float x;
    float y;
};

typedef struct point Point;

float distance(Point p1, Point p2){
    return sqrt(((p1.x - p2.x) * (p1.x - p2.x)) + ((p1.y - p2.y) * (p1.y - p2.y)));

}

void nearest_points(int n, Point v[]){

    Point closest1, closest2;
    float minDist = 99999;

    for(int i=0; i < n; i++){
        for(int j=i+1; j < n; j++){
            float dist = distance(v[i], v[j]);

            if (dist < minDist){
                minDist = dist;
                closest1 = v[i];
                closest2 = v[j];
            }
        }
    }

    printf("Point 1: (%.2f, %.2f) \n", closest1.x, closest1.y);
    printf("Point 2: (%.2f, %.2f) \n", closest2.x, closest2.y);
    printf("Distance between: %.2f ", minDist);

}

int main(){

    Point vector[] = {{5,0}, {2,0}, {4,2}, {-1,-2}};
    int length = 4;

    nearest_points(length, vector);
    return 0;
}