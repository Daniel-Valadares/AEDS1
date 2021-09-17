/*
 Exemplo0208 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

 Para compilar em terminal (janela de comandos):

 Linux :  gcc -o exemplo0208     exemplo0208.c
 Windows: gcc -o exemplo0208.exe exemplo0208.c
 Para executar em terminal (janela de comandos):

 Linux : ./exemplo0208
 Windows:  exemplo0208
*/
// dependencias
#include "io.h" // para definicoes proprias
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main()
{
  // definir dado
  char x = '_'; // definir variavel com valor inicial
                // identificar
  IO_id("EXEMPLO0208 - Programa - v0.0");
  // ler do teclado
  x = IO_readchar("Entrar com um caractere ['0','A','a']: ");
  // testar valor
  switch (x)
  {
  case '0':
    IO_printf("%s (%c=%d)\n", "Valor igual do simbolo zero", x, x);
    break;
  case 'A':
    IO_printf("%s (%c=%d)\n", "Valor igual 'a letra A", x, x);
    break;
  case 'a':
    IO_printf("%s (%c=%d)\n", "Valor igual 'a letra a", x, x);
    break;
  default: // se nao alguma das opcoes anteriores
    IO_printf("%s (%c=%d)\n", "Valor diferente das opcoes ['0','A','a']", x, x);
  } // fim escolher
  // encerrar
  IO_pause("Apertar ENTER para terminar");
  return (0);
} // fim main( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 0
b.) A
c.) a
d.) 1
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
 0.2 __/__ teste de if else
 0.3 __/__ teste com dois if else
 0.4 __/__ teste com intervalo de condicao
 0.5 __/__ teste de identificacao de caracter
 0.6 __/__ mudanca de identificacao de caracter
 0.7 __/__ forma alternativa
 0.8 __/__ teste de valor de caracter
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
 0.2 01. ( OK ) modificacao com if else
 0.3 01. ( OK ) modificacao com dois if else
 0.4 01. ( OK ) teste de intervalo condicional
 0.5 01. ( OK ) teste de identificacao de caracter
 0.6 01. ( OK ) teste de diferenciacao de letras
 0.7 01. ( OK ) teste alternativo de diferenciacao de letras
 0.8 01. ( OK ) teste de idetificacao de valor de caracter
*/