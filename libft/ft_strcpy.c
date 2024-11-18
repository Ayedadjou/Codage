#include<stdio.h>
#include <unistd.h>

char* ft_strcpy(char* src,char* dest) //Mettre char* pour travailler sur plusieurs caractères
{
   int i;
   i=0;
   if (src == NULL || dest==NULL) //Il faut que l'on teste qu'à chaque fois src ou dest est différent de zéro
   {
    return (NULL);
   }
    //sinon on cherche à copier quelque chose de vide éventuelllement dans quelque chose qui n'existe pas.
   while (src[i] != '\0') //Tant que le caractère est différent de '\0'(back slash zéro)
   {
    dest[i]=src[i]; //On parcourt chacune des chaînes de caractère
     i++;
   }
   dest[i]='\0'; //Il faut absolument mettre le '\0' pour fermer la chaîne de caractères
   return(dest);
}

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
  /*  char str[5] = "toto";
    str[5] = '\0';
    char test[5];
    ft_strcpy(str, test);
    ft_putstr(test);*/
    char test[5];
    ft_strcpy(NULL, test);
   // ft_putstr(test);
}