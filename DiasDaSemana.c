#include <stdio.h>
#include <conio.h>
int main (void)
{
    int valor;
    printf ("Digite um valor de 0 a 7: ");
    scanf ("%d", &valor);
    switch (valor)
    {
        case 1:
        printf ("Domingo\n");
        break;

        case 2:
        printf ("Segunda\n");
        break;

        case 3:
        printf ("Terça\n");
        break;

        case 4:
        printf ("Quarta\n");
        break;

        case 5:
        printf ("Quinta\n");
        break;

        case 6:
        printf ("Sexta\n");
        break;

        case 7:
        printf ("Sábado\n");
        break;

        default:
        printf ("Valor Inválido!\n");
    }
    getch();
    return 0;
}