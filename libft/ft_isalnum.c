# include <unistd.h>
// messqge inutile pour forcer ayedadjou a utiliser git :)
int ft_isalnum(char*str)

{  //On parcourt d'abord les caractères de la chaîne
int i;

    i = 0;
    while(str[i] != '\0') // boucle tant que le caractere a l'index i n'est pas \0
    { 
        if ((str[i]>=65 && str[i]<=90)
        || (str[i]>=97 && str[i]<=122)
        || (str[i]>=48 && str[i]<=57))
          //Contrôle de la valeur de la lettre
        {
           i++; // si le caractère est alphanumrique on passe àau caractère suivant
        }
        else
        {
            return(1);
        }
        
    }
     return(0); //si la chaîne est composée uniquement de caractères alphanumériques  
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
    int resultat;
     ft_putstr("je passe ici\n");
    resultat=ft_isalnum(av[1]);
    if (resultat==1)
    {
        ft_putstr("La Chaîne n'est pas alphanumérique\n");

    }
    else {
        ft_putstr("La chaîne est alphanumérique\n");
    }
}
 
