#include <stdio.h>
/**
 * Implemente a função FizzBizz conforme definida abaixo. A mesma deve receber dois números inteiros não negativos (start e end) e imprimir a partir de start (incluído) até end (excluído) seguindo a mesma lógica do FizzBuzz.
 * 
 * Função: void fizzBizz(int start, int end)
 * Input: inteiros (start < end) determinando os números de início e fim da contagem.
 * Output: utilize a função printf da biblioteca stdio.h e escreva um número ou palavra por linha (\n):
 * 
 */
void fizzBizz(int start, int end)
{
    printf("\nFizzBizz::START: %d, %d\n", start, end);
    
    int numero;
    for (numero = start; numero < end; numero = numero + 1)
    {
        if (numero % 3 == 0 && numero % 5 == 0) {
            printf ("FizzBuzz\n");  
        }
        else if (numero % 3 == 0) {
                printf ("Fizz\n");
        }
        else if (numero % 5 == 0) {
            printf ("Buzz\n");
            
        }
        else {
            printf ("%d\n", numero);
        }
    }
    printf("\nFizzBizz::END\n");
}
