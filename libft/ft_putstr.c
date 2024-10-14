
# include <unistd.h> // Declaration de la librairie pour pouvoir utiliser la fonction write

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0') // boucle tant que le caractere a l'index i n'est pas \0
    {
        write(1,&str[i],1);
        i++; //Pareil que i=i+1
    }
}

int main(void)
{
    ft_putstr("Boucle\n");
}