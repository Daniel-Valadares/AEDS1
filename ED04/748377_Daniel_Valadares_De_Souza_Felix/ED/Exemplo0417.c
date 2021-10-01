/*
 Exemplo0417 - v0.0. - __ / __ / _____
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
int countEvenNumbers(char x[])
{
    // definir dado local
    int tamanho = 0;
    int posicao = 0;
    int contar = 0;
    int testar = 0;
    char simbolo = '_';

    tamanho = strlen(x);
    // repetir em base no tamanho
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        // isolar um simbolo por vez
        simbolo = x[posicao];

        // testar se maior que K
        if ('0' <= simbolo && simbolo <= '9')
        {
            // converter para int
            testar = (int)simbolo;

            // testar se o digito e par
            if (testar % 2 == 0)
            {
                // contar e mostrar quantidade contada
                contar = contar + 1;
                IO_printf("Repeticao: %d\n%d: [%c]\n\n", contar, posicao, simbolo);
            } // fim se
        }     // fim se
    }         // fim repetir
    // retornar valor recebido
    return (contar);
} // fim biggerThanLetterK ( )

/**
 method0417 - Contar e mostrar a quantidade de digitos pares em uma cadeia de caracteres
*/
void method0417()
{
    // definir dados
    chars palavra = IO_new_chars(STR_SIZE);
    int resultado = 0;

    // identificar
    IO_id("Exemplo0417 - method0417 - v0.0");

    // ler do teclado
    IO_printf("Insira uma cadeia de caracteres: ");
    scanf("%s", palavra);

    // contar digitos
    resultado = countEvenNumbers(palavra);

    //mostrar resultados do calculo
    IO_printf("Quantidade de digitos pares na cadeia: %d\n", resultado);

    // encerrar
    IO_pause("Apertar ENTER para continuar");
    getchar();
} // fim method0417 ( )

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
        IO_id("Exemplo0417 - Programa - v0.0");

        // ler do teclado
        IO_println("Opcoes");
        IO_println(" 0 - parar");
        IO_println(" 1 - Contar e mostrar a quantidade de digitos pares em uma cadeia de caracteres");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");

        // testar valor
        switch (x)
        {
        case 0:
            method00();
            break;
        case 1:
            method0417();
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
a.) 12345
b.) 2468
c.) abc123
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
 0.14 __/__ mostrar letras
 0.15 __/__ mais elementos condicionais
 0.16 __/__ mostrar letras
 0.17 __/__ contar digitos
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
 0.14 01. ( OK ) Contar e mostrar as letras maisculas maiores que K em uma cadeia de caracteres
 0.15 01. ( OK ) Contar e mostrar o numero de letras maisculas que K (minuscula e maiuscula) em uma cadeia de caracteres
 0.16 01. ( OK ) Contar e mostrar as letras maiores que K (minuscula e maiuscula) em uma cadeia de caracteres
 0.17 01. ( OK ) Contar e mostrar a quantidade de digitos pares em uma cadeia de caracteres
 */