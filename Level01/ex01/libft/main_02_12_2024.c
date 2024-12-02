#include <stdio.h>
void ft_putchar(char c);//Pour appeler une fonction qui se trouve dans un autre fichier

void rush00(int x, int y)
{
  int i=1;
  while (i<y)
  {
    ft_putchar('O');
    i++;
  }
}
int main(void)
{
 rush00(3,6);
}
//Pour pouvoir afficher un rectangle, il faut créer un rectangle dans une boucle


