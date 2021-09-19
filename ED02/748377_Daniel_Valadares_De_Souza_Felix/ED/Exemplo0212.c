/*
 Exemplo0212 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

 Para compilar em terminal (janela de comandos):

 Linux :  gcc -o exemplo0212     exemplo0212.c
 Windows: gcc -o exemplo0212.exe exemplo0212.c
 Para executar em terminal (janela de comandos):

 Linux : ./exemplo0212
 Windows:  exemplo0212
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
  int x = 0; // definir variavel com valor inicial
             // identificar
  IO_id("Exemplo0212 - Programa - v0.0");
  // ler do teclado
  x = IO_readint("Entrar com um valor inteiro: ");
  // testar valor
  if (x%2==0) // testar se par
  {
    // mostrar valor igual a par
    IO_printf("\n\t%s(%d)\n", "Valor par igual a ", x);
    if (x > -50)
    {
      // mostrar se maior que -50
      IO_printf("\t%s\n", "E maior que (-50)");
    }
    else
    {
      // mostrar se menor igual a -50
      IO_printf("\t%s\n", "E menor ou igual a (-50)");
    }
  }
  else
  {
    // mostrar valor igual a impar
    IO_printf("\n\t%s(%d)\n", "Valor impar igual a ", x);
    if (x < 50)
    {
      IO_printf("\t%s\n", "E menor que (50) ");
      // mostrar se menor que 50
    }
    else
    {
      IO_printf("\t%s\n", "E maior que (50) ");
      // mostrar se maior igual a 50
    }
  } // fim se
  // encerrar
  IO_pause("Apertar ENTER para terminar");
  return (0);
} // fim main( )
  /*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 0
b.) 1
c.) 2
d.) 3
e.) 4
f.)-1
---------------------------------------------- historico"
Versao Data Modificacao
 0.1  __/__ esboco
 0.2  __/__ teste de if else
 0.3  __/__ teste com dois if else
 0.4  __/__ teste com intervalo de condicao
 0.5  __/__ teste de identificacao de caracter
 0.6  __/__ mudanca de identificacao de caracter
 0.7  __/__ forma alternativa
 0.8  __/__ teste de valor de caracter
 0.9  __/__ teste de valor de int
 0.10 __/__ teste de switch
 0.11 __/__ teste de pair e impar
 0.12 __/__ teste de pair e impar com condicoes extras
---------------------------------------------- testes
Versao Teste
 0.1  01. ( OK ) identificacao de programa
 0.2  01. ( OK ) modificacao com if else
 0.3  01. ( OK ) modificacao com dois if else
 0.4  01. ( OK ) teste de intervalo condicional
 0.5  01. ( OK ) teste de identificacao de caracter
 0.6  01. ( OK ) teste de diferenciacao de letras
 0.7  01. ( OK ) teste alternativo de diferenciacao de letras
 0.8  01. ( OK ) teste de idetificacao de valor de caracter
 0.9  01. ( OK ) teste de idetificacao de valor de int
 0.10 01. ( OK ) teste de idetificacao via switch
 0.11 01. ( OK ) teste de idetificacao de numero par e impar
 0.12 01. ( OK ) teste de idetificacao de numero par e impar com mais condicoes
 */