#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    char name[51];
    float price;
} Product;

Product* load_records(const char* filepath, int* n){

    FILE* file = fopen(filepath, "r");

    if(file == NULL){
        printf("ERROR");
        return NULL;
    }

    fseek(file, 0, SEEK_END);

    if(ftell(file) == 0){

        printf("Empty file");
        fclose(file);
        return NULL;

    }
    fseek(file, 0, SEEK_SET);

    *n = 0;
    char ch;
    while((ch = fgetc(file)) != EOF){
        if(ch == '\n'){
            (*n)++;
        }
    }
    fseek(file, 0, SEEK_SET);

    Product* prod = (Product*)malloc(*n * sizeof(Product));
    
    for(int i=0; i < *n; i++){
        fscanf(file, "%d,%[^,], %f", &prod[i].id, &prod[i].name, &prod[i].price);
        for (int j=0; prod[i].name[j]; j++){
            if(prod[i].name[j] == '@'){
                prod[i].name[j] = ' ';
            }
        }
        fgetc(file);
    }

    fclose(file);
    return prod;
}

int main(){

    int numProd;
    load_records("prod.csv", &numProd);

    return 0;
}