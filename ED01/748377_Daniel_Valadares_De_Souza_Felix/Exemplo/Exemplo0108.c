/*
 Exemplo0108 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

 Para compilar em terminal (janela de comandos):

 Linux :  gcc -o Exemplo0108        Exemplo0108.c
 Windows: gcc -o Exemplo0108.exe    Exemplo0108.c

 Para executar em terminal (janela de comandos):

 Linux : ./Exemplo0108
 Windows:  Exemplo0108
*/
// dependencias
#include <stdio.h>   // para as entradas e saidas
#include <stdbool.h> // para valores logicos
#include <string.h>  // para cadeias de caracteres: strcat( ), strcpy( ), strdup( ), strlen( )
#include <math.h>    // para funcoes matemáticas: pow( ), sqrt( ), sin( ), cos( ) ...
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(int argc, char *argv[])
{
    // definir dados
    char x[80] = "abc"; // definir variavel com tamanho e valor inicial
    char y[80] = "def"; // definir variavel com tamanho e valor inicial
    char z[80];         // definir variavel com tamanho inicial
    strcpy(z, "");      // e copiar para (z) a representacao de vazio
                        // identificar
    printf("%s\n", "EXEMPLO0108 - Programa - v0.0");
    printf("%s\n", "Autor: 748377_Daniel_Valadares_De_Souza_Felix");
    printf("\n"); // mudar de linha
                  // mostrar valores iniciais e comprimentos das cadeias
    printf("%s%s (%d)\n", "x = ", x, strlen(x));
    printf("%s%s (%d)\n", "y = ", y, strlen(y));
    // OBS.: O formato para int -> %d (ou %i)
    // ler do teclado
    printf("Entrar com caracteres: ");
    scanf("%s", x);
                    // OBS.: Nao indicar o endereco -> &
    printf("Entrar com outros caracteres: ");
    scanf("%s", y);
                    // OBS.: Nao indicar o endereco -> &
    // operar valores
    strcpy(z, x); // copiar (x) para (z)
    strcat(z, y); // concatenar (juntar) (y) a (z)
                  // OBS.: Forma mais eficiente
                  // mostrar valor resultante
    printf("%s[%s]*[%s] = [%s]\n", "z = ", x, y, z);
    // operar valores (forma alternativa)
    strcpy(z, strcat(strdup(x), y));
    // copiar para (z)
    // o resultado de concatenar
    // a copia de (x) com (y)
    // OBS.: Se nao duplicar, o valor (x) sera' alterado.
    // mostrar valor resultante
    printf("%s[%s]*[%s] = [%s]\n", "z = ", x, y, z);
    // encerrar
    printf("\n\nApertar ENTER para terminar.");
    fflush(stdin); // limpar a entrada de dados
    getchar();     // aguardar por ENTER
    return (0);    // voltar ao SO (sem erros)
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
*/
