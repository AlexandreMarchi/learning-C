#include <stdio.h>

struct contact{

    int id;
    char name[51];
    char email[51];
    int type;
};

typedef struct contact Contact;

void print_contact_list(int n1, Contact list[n1], int n2, char types[n2][50]){

    for(int i=0; i < n2; i++){
        printf("%s \n", types[i]);

        for(int j=0; j < n1; j++){

            if(list[j].type == i){

            printf("%s\n", list[j].name);

            }
            
        }
        printf("---------\n");
    }
}

int main(){

    char types[][50] = {"Family", "Friend", "Work", "School", "Other"};
    Contact list[] = {
        {1, "Marcos", "marcos@email.com", 3},
        {2, "Junior", "junior@email.com", 1},
        {3, "Leo", "leo@email.com", 3},
        {4, "Breno", "breno@email.com", 1},
        {5, "Artur", "artur@email.com", 0},
        {6, "Paulo", "paulo@email.com", 4},
        {7, "Aaron", "aaron@email.com", 0},
    };

    print_contact_list(7, list, 5, types);

    return 0;
}