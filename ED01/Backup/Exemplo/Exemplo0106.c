/*
 Exemplo0107 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

 Para compilar em terminal (janela de comandos):

 Linux :  gcc -o Exemplo0107        Exemplo0107.c
 Windows: gcc -o Exemplo0107.exe    Exemplo0107.c

 Para executar em terminal (janela de comandos):

 Linux : ./Exemplo0107
 Windows:  Exemplo0107
*/
// dependencias
#include <stdio.h>   // para as entradas e saidas
#include <stdbool.h> // para valores logicos
#include <string.h>  // para cadeias de caracteres
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(int argc, char *argv[])
{
    // definir dados
    int x = 0; // definir variavel com valor inicial
    int y = 0; // definir variavel com valor inicial
    int z = 0; // definir variavel com valor inicial
               // identificar
    printf("%s\n", "EXEMPLO0106 - Programa - v0.0");
    printf("%s\n", "Autor: ______________________");
    printf("\n"); // mudar de linha
                  // mostrar valores iniciais
    printf("%s%d\n", "x = ", x);
    printf("%s%i\n", "y = ", y);
    // OBS.: O formato para int -> %d (ou %i)
    // ler do teclado
    printf("Entrar com um valor inteiro: ");
    scanf("%d", &x);
    // OBS.: Necessario indicar o endereco -> &
    printf("Entrar com outro valor inteiro: ");
    scanf("%i", &y);
    // OBS.: Necessario indicar o endereco -> &
    // operar valores
    z = x * y; // guardar em z o produto de x por y
               // mostrar valor resultante
    printf("%s(%i)*(%i) = (%d)\n", "z = ", x, y, z);
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
a.) 3 e 5
b.) -3 e 5
c.) -3 e -5
---------------------------------------------- historico
Versao Data Modificacao6
0.1 __/__ esboco
0.2 __/__ mudanca de versao para double
0.3 __/__ mudanca de versao para char
0.4 __/__ mudanca de versao para bool
0.5 __/__ mudanca de versao para string
0.6 __/__ mudanca de versao para multiplos int
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa leitura e exibicao de inteiro
0.2 01. ( OK ) identificacao de programa com double
0.3 01. ( OK ) identificacao de programa com char
0.4 01. ( OK ) identificacao de programa com bool
0.5 01. ( OK ) identificacao de programa com string
0.6 01. ( OK ) identificacao de programa com multiplos int
*/
