#include <stdio.h>
#include <stdlib.h>


int main(void){

    float preco;

    printf("Entre com o PRECO DE COMPRA.\n"); scanf("%f",&preco);

    if ( preco < 30 ) <% printf("VALOR DE VENDA : %.2f\n", preco * 1.35); %>

	else <% printf( "VALOR DE VENDA : %.2f\n", preco * 1.40); %>

    return(0);
}
