/*
 Exemplo0109 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

 Para compilar em terminal (janela de comandos):
 Linux :  gcc -o exemplo0109     exemplo0109.c
 Windows: gcc -o exemplo0109.exe exemplo0109.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0109
 Windows:  exemplo0109
*/
// dependencias
#include <stdio.h>   // para as entradas e saidas
#include <stdbool.h> // para valores logicos
#include <string.h>  // para cadeias de caracteres: strcat( ), strcpy( ), strdup( ), strlen( )
#include <math.h>    // para funcoes matematicas
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(int argc, char *argv[])
{
    // definir dados singulares
    int x = 0;       // definir variavel com valor inicial para guardar inteiro
    double y = 3.5;  // definir variavel com valor inicial para guardar real
    char z = 'A';    // definir variavel com valor inicial para guardar caractere (simbolo)
    bool w = false;  // definir variavel com valor inicial para guardar falso ou verdadeiro
                     // definir dados com mais de um valor
    char s[80] = ""; // definir espaco de armazenamento para ate' 80 caracteres (simbolos)
                     // identificar
    printf("%s\n", "EXEMPLO0109 - Programa - v0.0");
    printf("%s\n", "Autor: 748377_Daniel_Valadares_De_Souza_Felix");
    printf("\n"); // mudar de linha
                  // mostrar valores iniciais
    printf("01. %s%d\n", "x = ", x);
    printf("02. %s%lf\n", "y = ", y);
    printf("03. %s%c\n", "z = ", z);
    // converter entre tipos de dados (type casting)
    x = (int)z; // codigo inteiro equivalente ao caractere
    printf("04. %s%d -> %c\n", "x = ", x, z);
    x = (int)y; // parte inteira de real
    printf("05. %s%d -> %lf\n", "x = ", x, y);
    x = 97;
    z = (char)x; // caractere equivalente ao codigo inteiro
    printf("06. %s%c -> %d\n", "z = ", z, x);
    x = (int)'0'; // codigo inteiro equivalente ao caractere
    z = (char)x;  // caractere equivalente ao codigo inteiro
    printf("07. %s%c -> %d\n", "z = ", z, x);
    x = w; // codigo inteiro equivalente ao logico
    printf("08. %s%d -> %d\n", "x = ", x, w);
    w = true;
    x = w; // codigo inteiro equivalente ao logico
    printf("09. %s%d -> %d\n", "x = ", x, w);
    x = (w == false); // equivalente 'a comparacao de igualdade (true igual a false)
    printf("10. %s%d -> %d\n", "x = ", x, w);
    x = !(w == false); // equivalente ao contrario da comparacao de valores (true igual a false)
    printf("11. %s%d -> %d\n", "x = ", x, w);
    x = (w != false); // equivalente 'a comparacao de diferenca (true diferente de false)
    printf("12. %s%d -> %d\n", "x = ", x, w);
    w = (x < y); // equivalente 'a comparacao entre (x) e (y)
    printf("13. %s%d < %lf = %d\n", "w = ", x, y, w);
    w = (x <= y); // equivalente 'a comparacao entre (x) e (y)
    printf("14. %s%d <= %lf = %d\n", "w = ", x, y, w);
    w = (y > x); // equivalente 'a comparacao entre (x) e (y)
    printf("15. %s%lf > %d = %d\n", "w = ", y, x, w);
    w = (y >= x); // equivalente 'a comparacao entre (x) e (y)
    printf("16. %s%lf >= %d = %d\n", "w = ", y, x, w);
    x = 4;
    w = (x % 2 == 0); // equivalente a testar se é par ou
    // resto inteiro (%) da divisao por 2 igual a zero
    printf("17. %s (%d%%2) ? %d\n", "e' par ", x, w);
    x = 4;
    w = (x % 2 != 0); // equivalente a testar se é ímpar ou
    // resto inteiro (%) da divisao por 2 diferente de zero
    printf("18. %s (%d%%2) ? %d\n", "e' impar ", x, w);
    z = 'x';
    w = ('a' <= z && z <= 'z'); // equivalente a testar se e' letra minuscula,
                                // pertence a [‘a’:’z’] (é igual ou esta’ entre ‘a’ e ‘z’)
    printf("19. %s (%c) ? %d\n", "e' minuscula ", z, w);
    z = 'X';
    w = (!('a' <= z && z <= 'z')); // equivalente a testar se NAO (!) e' letra minuscula
    printf("19. %s (%c) ? %d\n", "nao e' minuscula ", z, w);
    z = 'x';
    w = ('A' <= z && z <= 'Z'); // equivalente a testar se e' letra maiuscula
    printf("20. %s (%c) ? %d\n", "e' maiuscula ", z, w);
    z = 'X';
    w = ((z < 'A') || ('Z' < z)); // equivalente a testar se NAO e' letra maiuscula,
                                  // esta’ fora do intervalo [’a’:’z’], ou e’ menor que ‘a’ ou e’ maior que ‘z’
    printf("19. %s (%c) ? %d\n", "nao e' maiuscula ", z, w);
    z = '0';
    w = ('0' == z || '1' == z); // equivalente a testar se e' igual a '0' ou a '1'
    printf("21. %s (%c) ? %d\n", "e' 0 ou 1 ", z, w);
    strcpy(s, "zero"); // copiar para (s) <- "zero" (NAO usar '=' com caracteres);
    printf("22. palavra = %s\n", s);
    w = (strcmp("zero", s) == 0); // comparar se caracteres iguais (NAO usar '==' com caracteres);
                                  // Nota: O resultado da comparação sempre devera' ser avaliado
                                  // em relacao a zero, e sera' igual caso coincida.
    printf("23. palavra == %s ? %d\n", s, w);
    strcpy(s, "um e dois"); // copiar para (s) <- "outras palavras" (NAO usar '=' com caracteres);
    printf("24. palavras = %s\n", s);
    w = (strcmp("zero", s) != 0); // comparar se caracteres diferentes (NAO usar '!=' com caracteres);
                                  // Nota: O resultado da comparação sempre devera' ser avaliado
                                  // em relacao a zero, e sera' diferente caso NAO coincida.
    printf("25. palavra == %s ? %d\n", s, w);
    // encerrar
    printf("\n\nApertar ENTER para terminar.");
    getchar();  // alternativa para limpar a entrada de dados
    return (0); // voltar ao SO (sem erros)
} // fim main( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 12 e 24
b.) ab e cd
c.) a e bc
d.) ab e c
---------------------------------------------- historico
Versao Data Modificacao6
0.1 __/__ esboco
0.2 __/__ mudanca de versao para double
0.3 __/__ mudanca de versao para char
0.4 __/__ mudanca de versao para bool
0.5 __/__ mudanca de versao para string
0.6 __/__ mudanca de versao para multiplos int
0.7 __/__ mudanca de versao para pow
0.8 __/__ adaptação de versao para biblioteca string.h
0.9 __/__ adaptação de versao para printf
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa leitura e exibicao de inteiro
0.2 01. ( OK ) identificacao de programa com double
0.3 01. ( OK ) identificacao de programa com char
0.4 01. ( OK ) identificacao de programa com bool
0.5 01. ( OK ) identificacao de programa com string
0.6 01. ( OK ) identificacao de programa com multiplos int
0.7 01. ( OK ) identificacao de programa com pow
0.8 01. ( OK ) identificacao de programa com biblioteca string.h
0.9 01. ( OK ) identificacao de programa com printf
*/
