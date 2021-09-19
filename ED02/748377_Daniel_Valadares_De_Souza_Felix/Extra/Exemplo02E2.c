/*
 Exemplo02E2 - v0.0. - __ / __ / _____
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
  IO_id("Exemplo02E2 - Programa - v0.0");
  // ler do teclado
  x = IO_readchar("Entrar com um caractere: ");

  y = IO_readchar("Entrar com um outro caractere: ");
  z = IO_readchar("Entrar com mais um caractere, diferente do anterior: ");
  // testar valor
  if (y == z) // testar se y = z
  {
    IO_printf("\n\t%s%s\n", "Erro: o segundo e terceiro caracteres tem valores internos semelhantes, favor ",
              "executar novamente e inserir os valores corretamente");
  }
  else
  {
    if (!((y > x && z < x) || (z > x && y < x))) // testar se x fora de y e z
    {
      IO_printf("\n\t%s%c%s%c%s%c\n", "O caractere ", x, 
                " tem seu valor interno fora do valor interno entre o caractere ",
                y, " e o caractere ", z);
    }
    else
    {
      IO_printf("\n\t%s%c%s%c%s%c\n", "O caractere ", x,
                " nao tem seu valor interno fora do valor interno entre o caractere ",
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
 0.E2  __/__ mudança no teste de valores de caracteres
---------------------------------------------- testes
Versao Teste
 0.E1  01. ( OK ) teste de identificacao de valores de caracteres
 0.E2  01. ( OK ) mudança de teste de identificacao de valores de caracteres
 */