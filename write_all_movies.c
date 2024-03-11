#include <stdio.h>

typedef struct {
    long id;
    char name[51];
} Movie;

void write_all_movies(const char* filepath, int n, const Movie* v){

    FILE* file = fopen(filepath, "wb");

    if(file != NULL){
        fwrite(v, sizeof(Movie), n, file);
        printf("Successful writing!");
        fclose(file);
    } else{
        printf("Error opening the file");
    }
}

int main(){

    Movie list[] = {
        {6, "They Live"},
        {11,"Big Trouble in Little China"},
        {10,"The Thing"},
        {1, "In the Mouth of Madness"},
        {8, "Ghosts of Mars"},
        {23,"Halloween"},
        {7, "Village of the Damned"}
    };

    write_all_movies("file.bin", 7, list);

    return 0;
}