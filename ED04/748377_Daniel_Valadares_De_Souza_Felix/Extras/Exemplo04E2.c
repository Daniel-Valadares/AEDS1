/*
 Exemplo04E2 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

*/
// dependencias
#include "io.h" // para definicoes proprias

void method00()
{
    // nao faz nada
} // fim method00 ( )

/**
 Funcao para determinar se caractere e uma letra maiscula maior que K.
 @return numero de repeticoes
 @param x - cadeia a ser testada
*/
int compareNumberOfDigits(char x[], char y[])
{
    // definir dado local
    int tamanho = 0;
    int posicao = 0;
    int testar = 0;
    int valor1 = 0;
    int valor2 = 0;
    char simbolo = '_';

    // testes da primeira cadeia
    tamanho = strlen(x);
    // repetir em base no tamanho
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = x[posicao];

        // testar se maior que K
        if ('0' <= simbolo && simbolo <= '9')
        {
            // contar e mostrar quantidade contada
            valor1 = valor1 + 1;
            IO_printf("Repeticao: %d\n%d: [%c]\n\n", valor1, posicao, simbolo);
        } // fim se
    }     // fim repetir
    // mostrar respeticoes da primeira cadeia
    IO_printf("Quantidade de digitos na primeira cadeia: %d\n", valor1);
    IO_pause("Apertar ENTER para terminar");

    // teste da segunda cadeia
    tamanho = strlen(y);
    // repetir em base no tamanho
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = y[posicao];

        // testar se maior que K
        if ('0' <= simbolo && simbolo <= '9')
        {
            // contar e mostrar quantidade contada
            valor2 = valor2 + 1;
            IO_printf("Repeticao: %d\n%d: [%c]\n\n", valor2, posicao, simbolo);
        } // fim se
    }     // fim repetir
    // mostrar respeticos da primeira cadeia
    IO_printf("Quantidade de digitos na segunda cadeia: %d\n", valor2);
    IO_pause("Apertar ENTER para terminar");

    // retornar resultado
    if (valor1 == valor2)
    {
        return (1);
    }
    else
    {
        if (valor1 > valor2)
        {
            return (2);
        }
        else
        {
            return (3);
        }
    }
} // fim compareNumberOfDigits ( )

/**
 method04E2 - Contar e mostrar a quantidade de simbolos nao alfanumericos em uma cadeia de caracteres
*/
void method04E2()
{
    // definir dados
    chars palavra1 = IO_new_chars(STR_SIZE);
    chars palavra2 = IO_new_chars(STR_SIZE);
    int comparacao = 0;

    // identificar
    IO_id("Exemplo04E2 - method04E2 - v0.0");

    //ler cadeias
    palavra1 = IO_readln("Insira a primeira cadeia de caracteres: ");
    palavra2 = IO_readln("\nInsira a segunda cadeia de caracteres: ");
    IO_println("");

    // comparacao de digitos
    comparacao = compareNumberOfDigits(palavra1, palavra2);

    // responder de acordo com a comparacao
    switch (comparacao)
    {
    case 1:
        IO_printf("Tanto a primeira cadeia quanto a segunda possui a mesma quantidade de digitos");
        break;
    case 2:
        IO_printf("A primeira cadeia possui mais digitos que a segunda");
        break;
    case 3:
        IO_printf("A segunda cadeia possui mais digitos que a primeira");
        break;
    }

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method04E2 ( )

/**
 Funcao principal.
 @return codigo de encerramento
*/
int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id("Exemplo04E2 - Programa - v0.0");

        // ler do teclado
        IO_println("Opcoes");
        IO_println(" 0 - parar");
        IO_println(" 1 - Comparar a quantidade de digitos em duas cadeias");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");

        // testar valor
        switch (x)
        {
        case 0:
            method00();
            break;
        case 1:
            method04E2();
            break;
        default:
            IO_pause("ERRO: Valor invalido.");
        } // fim escolher
    } while (x != 0);
    // encerrar
    IO_pause("Apertar ENTER para terminar");
    return (0);
} // fim main( )
  /*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios

---------------------------------------------- previsao de testes
a.) 123abc : 1234bc
b.) 1234bc : 123abc
c.) 123abc : 123abc
---------------------------------------------- historico
Versao Data Modificacao
 E.1 01. __/__ testes com IO_readln
 E.2 01. __/__ teste de comparacao
---------------------------------------------- testes
Versao Teste
 E.1 01. ( OK ) Contar e mostrar a quantidade de simbolos alfanumericos em multiplas cadeias de caracteres, incluindo espaco
 E.2 01. ( OK ) Comparar a quantidade de digitos em duas cadeias
*/