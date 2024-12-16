# include <unistd.h>

void ft_rush(int x, int y)
{
    int i = 1;
    int j = 1;
    while (j <= y)
    {
        i = 1;
        while (i <= x)
        {
            if ((i == 1 || i == x) && (j == 1 || j == y)) // affichage des 1er et derniers caractères pour la 1ère ligne et la dernière ligne
                write(1, "O", 1);  
            if ((i != 1 && i != x) && (j == 1 || j == y)) // affichage des autres caractères pour la 1ère ligne et la dernière ligne
                write(1, "-", 1);  
            
            if ((i == 1 || i == x) && (j != 1 && j < y)) // affichage des 1er et derniers caractères pour la 2nde ligne
               write(1, "|", 1);  
            if ((i != 1 && i != x) && (j != 1 && j < y)) // affichage des autres caractères pour la 2nde ligne
                write(1, " ", 1);  

            i++;
        }
        write(1, "\n", 1);
        j++;
    }

}

int main(void)
{
    ft_rush(5, 3);
    return (0);
}