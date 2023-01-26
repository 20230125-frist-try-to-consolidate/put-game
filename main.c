#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// TODO (vinij#1#): find watch
char indica;
int c = 9, d = 4.7, soma2;
int main()
{
    char *pega_global; //para aparecer no watch local
    int a = 2, b = 5, soma;
    pega_global = &indica;
    printf("Hello world!\n indica = %c\n", &indica);
    setbuf(stdin,NULL);//limpando o buffer do teclado
    printf("indica, segundo 'pega global' eh = %c\n", pega_global);
    indica = 'a';
    printf("indica, segundo 'pega global' eh = %c\n", pega_global);
    soma = a + b;
    soma2 = c + d;
    printf("Hello world!\n indica agr = %c\n", indica);
    printf("soma fica = %d\n", soma);
    printf("soma 2 fica = %d ou %i\n", soma2, soma2);
    printf("%c\n", getch()); // muito bom. exibe o... numero digitado, em uma linha

    //getch()

    system("pause");
    system("pause");
    return EXIT_SUCCESS;
}

int opcoes()
{
    char indicador;


}
