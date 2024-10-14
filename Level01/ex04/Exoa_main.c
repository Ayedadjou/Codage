#include <stdio.h>
#include <stdlib.h>

int ft_somme(int a, int b);
int ft_division(int a,int b);

int main(int ac, char **av)
{
    int result;
    
    if (ac != 4)
    {
        printf("Wrong nb of args\n");
        return (-1);
    }

   
    int a = atoi(av[1]);
    int b = atoi(av[3]);

    if  (av[2][0]=='+')
    {
        
        result = ft_somme(a, b);
        printf("%d\n", result);
    }


    if  (av[2][0]=='/')
    {
        
        result = ft_division(a, b);
        
        printf("%d", result);
    }




    return (0);
}

/*
if (n < 0) // Si le nombre est plus petit que 0
    {
        write(1, "n est negatif\n", 14);
    }
    else if (n != 0 && n < 10) // Sinon si le nombre est different de 0 et plus petit que 10
    {
        write(1, "n est plus petit que 10\n", 25);
    }
    else // Sinon
    {
        write(1, "n est plus grand que 10\n", 24); 
    }*/