/*
 Exemplo0104 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

 Para compilar em terminal (janela de comandos):

 Linux :  gcc -o Exemplo0104        Exemplo0104.c
 Windows: gcc -o Exemplo0104.exe    Exemplo0104.c

 Para executar em terminal (janela de comandos):

 Linux : ./Exemplo0104
 Windows:  Exemplo0104

*/
// dependencias
#include <stdio.h>   // para as entradas e saidas
#include <stdbool.h> // para valores logicos
                     // Nota: Em alguns compiladores pode haver problemas
                     // com relacao a essa biblioteca, caso acontecer
                     // considerar o uso de definicoes alternativas.
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(int argc, char *argv[])
{
  // definir dado
  bool x = false; // definir variavel com valor inicial
                  // OBS.: Indispensavel usar minusculas
                  // identificar
  printf("%s\n", "EXEMPLO0104 - Programa - v0.0");
  printf("%s\n", "Autor: 748377_Daniel_Valadares_De_Souza_Felix");
  printf("\n"); // mudar de linha
                // mostrar valor inicial
  printf("%s%d\n", "x = ", x);
  // OBS.: O formato para equivalente inteiro -> %d
  // ler do teclado
  printf("Entrar com um valor logico: ");
  scanf("%d", &x);
  // OBS.: Usar equivalente inteiro -> 0 = false
  // mostrar valor lido
  printf("%s%d\n", "x = ", x);
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
a.) 1
b.) 0
c.) true
---------------------------------------------- historico
Versao Data Modificacao6
0.1 __/__ esboco
0.2 __/__ mudanca de versao para double
0.3 __/__ mudanca de versao para char
0.4 __/__ mudanca de versao para bool
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa leitura e exibicao de inteiro
0.2 01. ( OK ) identificacao de programa com double
0.3 01. ( OK ) identificacao de programa com char
0.4 01. ( OK ) identificacao de programa com bool
*/
