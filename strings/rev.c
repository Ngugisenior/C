#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void get_reversed_string(char * data){

    char *new_str=malloc((int)strlen(data));
    int i = strlen(data) -1;
    int j = 0;

    while(i>=0){
        new_str[j] = data[i];
        j++;
        i--;
    }

    printf("%s", new_str);
}

