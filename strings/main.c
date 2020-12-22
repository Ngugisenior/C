#include <stdio.h>
#include <stdlib.h>
void get_reversed_string(char * input);
int main(int argc, char * argv[])
{
    if(argc>1){
        get_reversed_string(argv[1]);
    }
    return 0;
}
