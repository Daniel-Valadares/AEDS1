/*
 Exemplo0105 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

 Para compilar em terminal (janela de comandos):

 Linux :  gcc -o Exemplo0105        Exemplo0105.c
 Windows: gcc -o Exemplo0105.exe    Exemplo0105.c

 Para executar em terminal (janela de comandos):

 Linux : ./Exemplo0105
 Windows:  Exemplo0105
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
    // definir dado
    char x[80] = "abc"; // definir variavel com tamanho e valor inicial
                        // identificar
    printf("%s\n", "EXEMPLO0105 - Programa - v0.0");
    printf("%s\n", "Autor: 748377_Daniel_Valadares_De_Souza_Felix");
    printf("\n"); // mudar de linha
                  // mostrar valor inicial
    printf("%s%s\n", "x = ", x);
    // OBS.: O formato para caracteres -> %s
    // ler do teclado
    printf("Entrar com uma cadeia de caracteres: ");
    scanf("%s", x);
    // OBS.: Nao dever ser usado o endereco dessa vez !
    // O tamanho do valor NAO devera' ultrassar três símbolos.
    // mostrar valor lido
    printf("%s%s\n", "x = ", x);
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
a.) def
b.) d e f
c.) d_e_f
---------------------------------------------- historico
Versao Data Modificacao6
0.1 __/__ esboco
0.2 __/__ mudanca de versao para double
0.3 __/__ mudanca de versao para char
0.4 __/__ mudanca de versao para bool
0.5 __/__ mudanca de versao para string
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa leitura e exibicao de inteiro
0.2 01. ( OK ) identificacao de programa com double
0.3 01. ( OK ) identificacao de programa com char
0.4 01. ( OK ) identificacao de programa com bool
0.5 01. ( OK ) identificacao de programa com string
*/
