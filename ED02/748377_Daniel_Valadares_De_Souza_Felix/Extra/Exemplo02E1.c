/*
 Exemplo02E1 - v0.0. - __ / __ / ____
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
  char x = 'A'; // definir variavel
  char y = 'A'; // definir outra variavel
  char z = 'A'; // definir mais uma variavel
                // identificar
  IO_id("Exemplo02E1 - Programa - v0.0");
  // ler do teclado
  x = IO_readchar("Entrar com um caractere: ");
  y = IO_readchar("Entrar com um outro caractere: ");
  z = IO_readchar("Entrar com mais um caractere: ");
  // testar valor
  if (x == y || x == z) // testar se x = y ou z
  {
    if (x == y) // testa se x = y
    {
      IO_printf("\n\t%s(%c)%s(%c)\n", "O primeiro caractere ", x,
                " tem seu valor interno igual ao segundo caractere ", y);
    }
    else
    {
      IO_printf("\n\t%s(%c)%s(%c)\n", "O primeiro caractere ", x,
                " tem seu valor interno igual ao terceiro caractere ", z);
    }
  }
  else
  {
    if ((y > x && z < x) || (z > x && y < x)) // testar se x entre y e z
    {
      IO_printf("\n\t%s(%c)%s(%c)%s(%c)\n", "O caractere ", x,
                " tem seu valor interno entre o caractere ",
                y, " e o caractere ", z);
    }
    else
    {
      IO_printf("\n\t%s(%c)%s(%c)%s(%c)\n", "O caractere ", x,
                " nao tem seu valor interno entre o caractere ",
                y, " e o caractere ", z);
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
a.) A
b.) a
c.) D
d.) #
---------------------------------------------- historico"
Versao Data Modificacao
 0.E1  __/__ teste de valores de caracteres
---------------------------------------------- testes
Versao Teste
 0.E1  01. ( OK ) teste de identificacao de valores de caracteres
 */