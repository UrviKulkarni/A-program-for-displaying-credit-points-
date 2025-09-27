//C Program to display discount offered on promotion 
#include <stdio.h>
void main() {
    int views;
    printf("Enter the views gained:");
    scanf("%d",&views);
    if(views>10000 && views<=20000) {
        printf("Points earned=100");
    }
    if(views>20000 && views<=40000){
        printf("Points earned=150");
    }
    else if (views>40000 && views<=60000){
        printf("Points earned=200");
    }
    else if (views>60000 && views<=80000){
        printf("Points earned=250");
    }
    else if (views>80000 && views<=100000){
        printf("Points earned=300");
    }
    else if(views>100000){
        printf("Points earned=400");
    }
    else {
    printf("Sorry no points earned");
    }
    }
