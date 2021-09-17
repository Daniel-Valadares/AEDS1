/*
 Exemplo0217 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

// dependencias
*/
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
  int x = 0; // definir variavel
  int y = 0; // definir outra variavel
             // identificar
  IO_id("Exemplo0217 - Programa - v0.0");
  // ler do teclado
  x = IO_readint("Entrar com um valor inteiro: ");
  y = IO_readint("Entrar com um outro valor inteiro: ");
  // testar valor
  if (!((x & 1) == 0)) // testar se x != par
  {
    // mostrar se impar
    IO_printf("\n\t%s%d%s\n", "O valor ", x,
              " e impar");
    if (x < 0) // testar se negativo
    {
      // mostrar se negativo
      IO_printf("\t%s\n", "E tambem e negativo");
    } // end if
    else
    {
      // mostrar se não negativo
      IO_printf("\t%s\n", "Mas nao e negativo");
    } // end else
  }   // end if
  else
  {
    // mostrar se nao impar
    IO_printf("\n\t%s%d%s\n", "O valor ", x,
              " nao e impar");
    if (x < 0) // testar se negativo
    {
      // mostrar se negativo
      IO_printf("\t%s\n", "Mas e negativo");
    } // end if
    else
    {
      // mostrar se não negativo
      IO_printf("\t%s\n", "E tambem nao e negativo");
    }                 // end else
  }                   // end else
  if (((y & 1) == 0)) // testar se y = par
  {
    // mostrar se impar
    IO_printf("\n\t%s%d%s\n", "O valor ", y,
              " e par");
    if (y > 0) // testar se positivo
    {
      // mostrar se positivo
      IO_printf("\t%s\n", "E tambem e positivo");
    } // end if
    else
    {
      // mostrar se nao positivo
      IO_printf("\t%s\n", "Mas nao e positivo");
    } // end else
  }   // end if
  else
  {
    // mostrar se par
    IO_printf("\n\t%s%d%s\n", "O valor ", y,
              " nao e par");
    if (y > 0) // testar se positivo
    {
      // mostrar se positivo
      IO_printf("\t%s\n", "Mas e positivo");
    } // end if
    else
    {
      // mostrar se nao positivo
      IO_printf("\t%s\n", "E tambem nao e positivo");
    } // end else
  }   // end else
  // encerrar
  IO_pause("Apertar ENTER para terminar");
  return (0);
} // end main( )
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
 0.13 __/__ teste de intervalo
 0.14 __/__ teste de intervalo fechado
 0.15 __/__ teste com dois intervalos
 0.16 __/__ teste de par ou impar com multiplos int
 0.17 __/__ teste de par ou impar com multiplos int e negativo e positivo
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
 0.13 01. ( OK ) teste de idetificacao de intervalo aberto
 0.14 01. ( OK ) teste de idetificacao de intervalo fechado
 0.15 01. ( OK ) teste de idetificacao de intervalos simultaneos
 0.16 01. ( OK ) teste de idetificacao de multiplos int com par ou impar
 0.17 01. ( OK ) teste de idetificacao de multiplos int com par ou impar e negativo e positivo
 */