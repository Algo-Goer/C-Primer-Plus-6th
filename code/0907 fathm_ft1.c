#include <stdio.h>
int main(void)    /*把2英寸（测水深的单位）转换成英尺*/
{
    int feet,fathoms;
    fathoms = 2;
    feet = 6*fathoms;
    printf("There are %d feet in %d fathoms !\n",feet,fathoms); 
    return 0; 
}