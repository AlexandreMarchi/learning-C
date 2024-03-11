#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    char name[51];
    float price;
} Product;

int save_records(const char* filepath, int n, const Product* prod){

    FILE* file = fopen(filepath, "w");

    if(file == NULL){
        return 0;
    }

    

    for(int i=0; i < n; i++){

        char modifiedName[51];
        strcpy(modifiedName, prod[i].name);

        for(int j=0; prod[i].name[j] != '\0'; j++){
            if(modifiedName[j] == ' '){
                modifiedName[j] = '@';
            }
        }
        
        fprintf(file, "%d,%s,%.2f\n", prod[i].id, modifiedName, prod[i].price);
    }
    

    fclose(file);
    return 1;
}


int main(){

    Product prod[] = {
        {1, "Product One", 10.5},
        {2, "Product Two", 7.25},
        {3, "Product Three", 30.72}
    };

    int numProd = sizeof(prod) / sizeof(prod[0]);

    int result = save_records("prod.csv", numProd, prod);
    switch(result){
    case 1:
        printf("Succesful");
        break;
    
    case 0:
        printf("ERROR");
        break;
    }
}