#include <stdio.h>
#include <string.h>

struct contact{

    int id;
    char name[51];
    char email[51];
    int type;

};

typedef struct contact Contact;

void print_contact(Contact c, int n, char type_names[n][50]) {

    printf("Id: %d \n", c.id);
    printf("Name: %s \n", c.name);
    printf("Email: %s \n", c.email);
    printf("Type: %s \n", type_names[c.type]);

}

int main(){

    char types[][50] = {"family", "friend", "work", "school", "others"};
    Contact c = {1, "John", "john@email.com", 2};
    print_contact(c, 5, types);
    
    return 0;
}