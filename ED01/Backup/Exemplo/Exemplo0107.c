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
    double x = 0.0; // definir variavel com valor inicial
    double y = 0.0; // definir variavel com valor inicial
    double z = 0.0; // definir variavel com valor inicial
                    // identificar
    printf("%s\n", "EXEMPLO0107 - Programa - v0.0");
    printf("%s\n", "Autor: 748377_Daniel_Valadares_De_Souza_Felix");
    printf("\n"); // mudar de linha
                  // mostrar valores iniciais
    printf("%s%lf\n", "x = ", x);
    printf("%s%lf\n", "y = ", y);
    // OBS.: O formato para int -> %d (ou %i)
    // ler do teclado
    printf("Entrar com um valor real: ");
    scanf("%lf", &x);
    // OBS.: Necessario indicar o endereco -> &
    printf("Entrar com outro valor real: ");
    scanf("%lf", &y);
    // OBS.: Necessario indicar o endereco -> &
    // operar valores
    z = pow(x, y); // elevar a base (x) 'a potencia (y)
                   // mostrar valor resultante
    printf("%s(%lf)^(%lf) = (%lf)\n", "z = ", x, y, z);
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
a.) 2.0 e 3.0
b.) 3.0 e 2.0
c.) -3.0 e 2.0
d.) -2.0 e -3.0
---------------------------------------------- historico
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
0.7 __/__ mudanca de versao para pow
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa leitura e exibicao de inteiro
0.2 01. ( OK ) identificacao de programa com double
0.3 01. ( OK ) identificacao de programa com char
0.4 01. ( OK ) identificacao de programa com bool
0.5 01. ( OK ) identificacao de programa com string
0.6 01. ( OK ) identificacao de programa com multiplos int
0.7 01. ( OK ) identificacao de programa com pow
*/
