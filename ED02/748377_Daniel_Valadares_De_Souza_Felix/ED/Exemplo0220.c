/*
 Exemplo0220 - v0.0. - __ / __ / _____
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
  double x = 0; // definir variavel
  double y = 0; // definir outra variavel
  double z = 0; // definir mais uma variavel
                // identificar
  IO_id("Exemplo0220 - Programa - v0.0");
  // ler do teclado
  x = IO_readdouble("Entrar com um valor real: ");
  y = IO_readdouble("Entrar com um outro valor real, diferente do primeiro: ");
  z = IO_readdouble("Entrar com mais um valor real, diferente dos outros dois: ");
  // testar valor
  if (x == y || x == z || y == z) // testar se x = y ou z = x ou y = z
  {
    IO_printf("\n\t%s%s\n", "Erro: Algum valor conflitante inserido, favor executar novamente ", 
                            "o programa sem repeticoes entre os numeros");
  }
  else
  {
    if (!((y > x && z < x) || (z > x && y < x))) // testar se x nao esta entre y e z
    {
      IO_printf("\n\t%s%lf%s%lf%s%lf\n", "O valor ", x, " nao esta entre o valor ",
                 y, " e o valor ", z);
    }
    else
    {
      IO_printf("\n\t%s%lf%s%lf%s%lf\n", "O valor ", x, " esta entre o valor ",
                 y, " e o valor ", z);
    }
  } // end else
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
 0.18 __/__ teste de comparacao de inteiros
 0.19 __/__ teste de comparacao de multiplos inteiros
 0.20 __/__ mudanca no teste de comparacao de multiplos inteiros
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
 0.18 01. ( OK ) teste de comparacao de valores inteiros
 0.19 01. ( OK ) teste de comparacao de multiplos valores inteiros
 0.20 01. ( OK ) mudanca no teste de comparacao de multiplos valores inteiros
 */