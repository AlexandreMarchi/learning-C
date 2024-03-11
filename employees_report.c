/*
Escreva uma função que recebe uma lista de empregados (Employee) e seu tamanho. A função
deve calcular e imprimir: o total dos salários, a média dos salários e as médias dos salários por tipo
de empregado 

Write a function that receives a list of employees and its length. The function must calculate and print:
total salary, salary average and the salary average by type of employee

*/

#include <stdio.h>

struct employee{

char name[50];
float salary;
int type;

};

typedef struct employee Employee;

void employee_report(int length, Employee vector[length]){

    int devqnt = 0;
    float devtotal = 0;

    int desqnt = 0;
    float destotal = 0;

    int manqnt = 0;
    float mantotal = 0;

    int supqnt = 0;
    float suptotal = 0;

    for(int i=0; i < length; i++){
        
        if(vector[i].type == 0){
            devqnt += 1;
            devtotal += vector[i].salary;

        } else if(vector[i].type == 1){
            desqnt += 1;
            destotal += vector[i].salary;

        } else if(vector[i].type == 2){
            manqnt += 1;
            mantotal += vector[i].salary;

        } else if(vector[i].type == 3){
            supqnt += 1;
            suptotal += vector[i].salary;
        }
    }

    float devavg = devtotal / devqnt;
    float desavg = destotal / desqnt;
    float manavg = mantotal / manqnt;
    float supavg = suptotal / supqnt;

    float avgtotal = (devtotal + destotal + mantotal + suptotal) / (devqnt + desqnt + manqnt + supqnt);

    printf("Developer average: %.2f \n", devavg);
    printf("Designer average: %.2f \n", desavg);
    printf("Manager average: %.2f \n", manavg);
    printf("Support average: %.2f \n", supavg);
    printf("\nTotal salary: %.2f \n", (devtotal + destotal + mantotal + suptotal));
    printf("Total average: %.2f \n", avgtotal);

}


int main(){

    char types[4][50] = {"Developer", "Designer", "Manager", "Support"};

    Employee vector[] = {
        {"Marcus", 1550, 0},
        {"Alexander", 3200, 0},
        {"Artur", 2780, 0},
        {"Felipe", 3000, 1},
        {"Vitor", 1200, 1},
        {"Jon", 1500, 1},
        {"Felipe", 5000, 2},
        {"Vitor", 6200, 2},
        {"Jon", 3100, 2},
        {"Felipe", 4900, 3},
        {"Vitor", 5400, 3},
        {"Jon", 8700, 3}
    };

    employee_report(12, vector); 
}
