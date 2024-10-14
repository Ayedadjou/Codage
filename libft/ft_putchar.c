# include <unistd.h> // Declaration de la librairie pour pouvoir utiliser la fonction write
void ft_putchar(char c)
{
    write(1,&c,1);
}
