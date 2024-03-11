#include <stdio.h>

typedef struct{
    long id;
    char name[51];
} Movie;

int count_movies(const char* filepath){

    FILE* file = fopen(filepath, "rb");

    if(file == NULL){
        return -1;
    }

    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    int numMovies = fileSize / sizeof(Movie);

    fclose(file);
    return numMovies;

}

int main(){

    int result = count_movies("file.bin");

    if(result >= 1){
        printf("The file has %d movie(s)", result);
    }else{
        printf("Error");
    }

    return 0;
}