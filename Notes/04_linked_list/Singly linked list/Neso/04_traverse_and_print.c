#include <stdio.h>
#include<stdlib.h>
#include <string.h>
struct node{
    int data;
    struct node* link;
};
int main(){
    //First node
    struct node* head = malloc(sizeof(struct node));
    head->data= 45;
    head->link= NULL;
    printf("%d\n", head->data);
    
    //Second node
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = 90;
    ptr->link = NULL;
    
    //Linking 1st and 2nd node
    head->link = ptr;
    printf("%d\n", ptr->data);
    
    //3rd node
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = 100;
    ptr->link = NULL;
    
    //Linking 2nd and 3rd node
    head->link->link = ptr;
    printf("%d\n", ptr->data);
    return 0;
}