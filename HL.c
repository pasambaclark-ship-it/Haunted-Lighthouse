#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void seperator(int length) {
    for(int i=0; i<length; i++){
        printf("=");
    }
    printf("\n");
}

void story_intro () {
    seperator(50);
    printf("Welcome to the Haunted Lighthouse! \n");
    seperator(50);
    printf("A lighthouse keeper hears a mysterious sound every night. \n");
    printf("What do you think it is? \n");
}

void logic() {
    
}