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
    printf("...\n");
}


void logic() {
    srand(time(NULL));
    int event = rand() % 5 + 1;
    seperator(50);
    printf("We have verified that it is...\n");
    switch(event) {
        case 1: 
        printf("A ship's horn echoes through the fog. \n");
        break;

        case 2: 
        printf("The lighthouse lamp flickers. \n");
        break;

        case 3:
        printf("Footsteps sound on the stairs. \n");
        break;

        case 4:
        printf("A friendly cat appears at the door. \n");
        break;

        case 5:
        printf("Nothing happens, until tomorrow night. \n");
        break;

        deafult:
        printf("Be careful, it's still unknown!\n");
    }
seperator(50);
}

int main() {
    story_intro();
    logic();
    return 0;
}
