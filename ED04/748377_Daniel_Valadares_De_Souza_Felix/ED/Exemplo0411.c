/*
 Exemplo0411 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix

*/
// dependencias
#include "io.h" // para definicoes proprias

void method00()
{
    // nao faz nada
} // fim method00 ( )

/**
 Funcao para determinar se valor real pertence a intervalo fechado.
 @return true, se pertencer; false, caso contrario
 @param x - valor a ser testado
*/
bool belongsTo(double x, double inferior, double superior)
{
    // definir dado local
    bool result = false;
    // testar a condicao
    if (inferior <= x && x <= superior)
    {
        result = true;
    } // fim se
    return (result);
} // fim belongsTo ( )

/**
 Method0411 - Ler e contar quantos valores reais pertence a um intervalo fechado
*/
void method0411()
{
    // definir dados
    double menor = 0.0;
    double maior = 0.0;
    double quantidade = 0.0;
    double valor = 0.0;
    double show = 0.0;
    int in = 0;
    int out = 0;
    int repeat = 0;

    // identificar
    IO_id("Exemplo0411 - Method00411 - v0.0");

    // ler do teclado
    quantidade = IO_readdouble("Entrar com uma quantidade real de valores a ser testados: ");
    show = quantidade;

    // ler valores do intervalo
    menor = IO_readdouble("\nInsira o menor valor real do intervalo fechado: ");
    maior = IO_readdouble("\nInsira o maior valor real do intervalo fechado: ");
    while (maior < menor)
    {
        IO_printf("\nERRO: Valor conflitante inserido\n");
        maior = IO_readdouble("\nInsira o maior valor real do intervalo fechado: ");
    }

    // repetir para a quantidade de vezes informada
    for (repeat = 0; repeat < quantidade; repeat = repeat + 1)
    {
        // ler valor do teclado
        IO_printf("\n");
        valor = IO_readdouble(IO_concat(
            IO_concat("", IO_toString_d(repeat+1)), ": "));

       

        // testar se valor pertence ao intervalo
        if (belongsTo(valor, menor, maior))
        {
            in = in + 1;
            IO_printf("Quantidade dentro: %d\n", in);
        } // fim se
        else
        {
            out = out + 1;
            IO_printf("Quantidade fora: %d\n", out);
        } // fim else 
        
        
        // mostrar numero faltante de testes
        show = show - 1;
        if (show >= 1)
        {
            IO_printf("Restam %lf testes\n\n", show);
        }
        else
        {
            if (0 < show && show < 1)
            {
                IO_printf("Ultimo teste\n\n");
            }
            else
            {
                IO_printf("Acabaram os testes\n\n");
            }
        }
    }     // fim repetir

    // mostrar a quantidade de repeticoes
    IO_printf("Teste concluido\n\n");
    IO_printf("%s[%d]\n", "Quantidade de valores dentro do intervalo:\t", in);
    IO_printf("%s[%d]\n", "Quantidade de valores fora do intervalo:\t", out);
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // fim method0411 ( )

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
        IO_id("Exemplo0411 - Programa - v0.0");

        // ler do teclado
        IO_println("Opcoes");
        IO_println(" 0 - parar");
        IO_println(" 1 - Ler e contar quantos valores reais pertence a um intervalo fechado");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");

        // testar valor
        switch (x)
        {
        case 0:
            method00();
            break;
        case 1:
            method0411();
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
a.) [2:10.5] 10.5
b.) [2:10.5] 1
c.) [2:10.5] 7
---------------------------------------------- historico
Versao Data Modificacao
 0.1  __/__ esboco
 0.2  __/__ novas fucoes
 0.3  __/__ funcoes de intervalo
 0.4  __/__ funcoes de deteccao de pares
 0.5  __/__ alternativo
 0.6  __/__ funcoes de deteccao de letras minuscolas
 0.7  __/__ alternativa com mostrar
 0.8  __/__ outra alternativa
 0.9  __/__ funcoes de deteccao de numeros
 0.10 __/__ alternativa
 0.11 __/__ contar em intervalo fechado
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
*/