# include <unistd.h>

void ft_tolower(char*str)

{  //On parcourt d'abord les caractères de la chaîne
int i;

    i = 0;
    while(str[i] != '\0') // boucle tant que le caractere a l'index i n'est pas \0
    { 
        if (str[i]>=65 && str[i]<=90)  //Contrôle de la valeur de la lettre
        {
            str[i]=str[i]+32;
        }
        i++;
        
    }
        
}

void ft_putstr(char *str) //¨Pour afficher le résultat 
{
    int i;

    i = 0;
    while(str[i] != '\0') // boucle tant que le caractere a l'index i n'est pas \0
    {
        write(1,&str[i],1);
        i++; //Pareil que i=i+1
    }
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        return (-1);
    }
     ft_putstr("je passe ici\n");
    ft_tolower(av[1]);
    ft_putstr(av[1]);
}
 
