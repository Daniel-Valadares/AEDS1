/*
 Exemplo0413 - v0.0. - __ / __ / _____
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
int biggerThanLetterK(char x[])
{
    // definir dado local
    int tamanho = 0;
    int posicao = 0;
    int contar = 0;
    char simbolo = '_';

    tamanho = strlen(x);
    // repetir em base no tamanho
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = x[posicao];

        // testar se maior que K
        if ('K' < simbolo && simbolo <= 'Z')
        {
            contar = contar + 1;
            IO_printf("Repeticao: %d\n%d: [%c]\n\n", contar, posicao, simbolo);
        } // fim se
    }     // fim repetir
    // retornar valor recebido
    return (contar);
} // fim biggerThanLetterK ( )

/**
 method0413 - Contar e mostrar a repeticoes de maisculas em uma cadeia de caracteres
*/
void method0413()
{
    // definir dados
    chars palavra = IO_new_chars(STR_SIZE);
    int resultado = 0;

    // identificar
    IO_id("Exemplo0413 - method0413 - v0.0");

    // ler do teclado
    IO_printf("Insira uma cadeia de caracteres: ");
    scanf("%s", palavra);

    // contar maiores que K
    resultado = biggerThanLetterK(palavra);

    //mostrar resultados do calculo
    IO_printf("Letras maiusculas maiores que K: %d\n", resultado);

    // encerrar
    IO_pause("Apertar ENTER para continuar");
    getchar();
} // fim method0413 ( )

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
        IO_id("Exemplo0413 - Programa - v0.0");

        // ler do teclado
        IO_println("Opcoes");
        IO_println(" 0 - parar");
        IO_println(" 1 - Contar e mostrar a repeticoes de maisculas maiores que K em uma cadeia de caracteres (alternativa)");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");

        // testar valor
        switch (x)
        {
        case 0:
            method00();
            break;
        case 1:
            method0413();
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
a.) zxy
b.) ZXY
c.) AaKkLlZz
---------------------------------------------- historico
Versao Data Modificacao
 0.1  __/__ esboco
 0.2  __/__ novas funcoes
 0.3  __/__ funcoes de intervalo
 0.4  __/__ funcoes de deteccao de pares
 0.5  __/__ alternativo
 0.6  __/__ funcoes de deteccao de letras minuscolas
 0.7  __/__ alternativa com mostrar
 0.8  __/__ outra alternativa
 0.9  __/__ funcoes de deteccao de numeros
 0.10 __/__ alternativa
 0.11 __/__ contar em intervalo fechado
 0.12 __/__ contar respeticoes de maisculas
 0.13 __/__ alternativa
---------------------------------------------- testes
Versao Teste
 0.1  01. ( OK ) identificacao de programa
 0.2  01. ( OK ) leitura de valores e determinar se positivos
 0.3  01. ( OK ) leitura de valores e contagem se positivos menores que 100
 0.4  01. ( OK ) Ler valores e contar positivos menores que 100 e pares
 0.5  01. ( OK ) Ler valores e contar positivos menores que 100 e pares (alternativo)
 0.6  01. ( OK ) Ler palavra e contar letras minusculas
 0.7  01. ( OK ) Ler palavra, contar e mostrar letras minusculas
 0.8  01. ( OK ) Ler palavra, contar e mostrar letras minusculas (alternativo)
 0.9  01. ( OK ) Ler palavra e contar os algarismos
 0.10 01. ( OK ) Ler palavra e contar os algarismos(alternativo)
 0.11 01. ( OK ) Ler e contar quantos valores reais pertence a um intervalo fechado
 0.12 01. ( OK ) Contar e mostrar a repeticoes de maisculas maiores que K em uma cadeia de caracteres
 0.13 01. ( OK ) alternativa de contar e mostrar a repeticoes de maisculas maiores que K em uma cadeia de caracteres
 */