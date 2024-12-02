


#include<stdio.h>
int main(int argc, char** argv)
{
    int i;
    i = 0;
    while (i < argc)// tant que i est inférieur à argc
   {
    printf ("Les arguments: %s\n", argv[i]);
    i++;
   }
return(0);
}


