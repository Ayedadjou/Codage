#include<stdio.h>
int main(int argc, char** argv)
{
    int i;
    i= argc - 1;//L'index étant toujours égal à zéro,si on ne mets pas le zéro, il ne le trouvera jamais
    while (i>=0)
    {
        printf("Les arguments :%s\n",argv[i]);
        i--;
        }
        return(0);
}