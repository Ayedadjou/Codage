# include <unistd.h> // Declaration de la librairie pour pouvoir utiliser la fonction write

void ft_putchar(char c);

void rush(int x){
    
    ft_putchar ('O');
    
        
        
    for(int i = 0; i < x-2; i++){

        ft_putchar('-');

    }
        
        
        
        
    /*
        else if (i!=1 && i!=5) //Ligne 1 du rectangle hors 1er et dernier caractère
        {
            ft_putchar ('-');
            {
    
        }
        }
    */
    ft_putchar ('O');

    ft_putchar('\n');
}
/*
int i;

        if  (i=1 || i=5)   //Ligne 1 du rectangle 1er et dernier caractère
        { 
            ft_putchar ('O');
                }
        
        else if (i!=1 && i!=5) //Ligne 1 du rectangle hors 1er et dernier caractère
        {
            ft_putchar ('-');
            {
    
        }
        }

*/        


