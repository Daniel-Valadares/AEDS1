/*
 Exemplo0103 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

 Para compilar em terminal (janela de comandos):

 Linux :  gcc -o Exemplo0103        Exemplo0103.c
 Windows: gcc -o Exemplo0103.exe    Exemplo0103.c

 Para executar em terminal (janela de comandos):

 Linux : ./Exemplo0103
 Windows:  Exemplo0103

*/
// dependencias
#include <stdio.h> // para as entradas e saidas
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(int argc, char *argv[])
{
  // definir dado
  char x = 'A'; // definir variavel com valor inicial
                // OBS.: Indispensavel usar apostrofos
                // identificar
  printf("%s\n", "EXEMPLO0103 - Programa - v0.0");
  printf("%s\n", "Autor: 748377_Daniel_Valadares_De_Souza_Felix");
  printf("\n"); // mudar de linha
                // mostrar valor inicial
  printf("%s%c\n", "x = ", x);
  // OBS.: O formato para char -> %c
  // ler do teclado
  printf("Entrar com um caractere: ");
  scanf("%c", &x);
  // OBS.: Necessario indicar o endereco -> &
  // mostrar valor lido
  printf("%s%c\n", "x = ", x);
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
a.) 0.5
b.) -0.5
c.) 1.23456789
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
0.2 __/__ mudanca de versao para double
0.3 __/__ mudanca de versao para char
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa leitura e exibicao de inteiro
0.2 01. ( OK ) identificacao de programa com double
0.3 01. ( OK ) identificacao de programa com char
*/
