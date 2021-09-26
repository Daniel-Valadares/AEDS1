/*
 Exemplo03E1 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix
*/
// dependencias
#include "io.h" // para definicoes proprias

// method00 - nao faz nada
void method00()
{
    // nao faz nada
} // fim method00 ( )

// contar e mostrar tudo o que não for alfanumerico
void method03E1()
{
    // definir dado
    int x = 0;
    int y = 0;
    int z = 0;

    char palavra[STR_SIZE];
    char registrar[STR_SIZE];
    strcpy(registrar, "");
    int tamanho = 0;

    // identificar
    IO_id("Exemplo03E1 - v0.0");

    // ler do teclado
    IO_printf("Entrar com uma cadeia de caracteres: ");
    scanf("%s", palavra);
    IO_printf("\n");

    // repetir para cada letra
    tamanho = strlen(palavra);

    // inicio teste variacao
    for (y = 0; y < tamanho; y = y + 1)
    {
        if (!(('0' <= palavra[y] && palavra[y] <= '9') || ('A' <= palavra[y] && palavra[y] <= 'Z' || 'a' <= palavra[y] && palavra[y] <= 'z')))
        {
            // contar repeticoes
            z = z + 1;
            // mostrar valor atual
            IO_printf("%d: [%c]\n", y, palavra[y]);

            // registrar resultados
            strcpy(registrar, IO_concat(registrar,
                              IO_concat(IO_toString_d(z),
                              IO_concat("-> ",
                              IO_concat(IO_toString_c(palavra[y]), " \n")))));
        }
    } // fim repetir
    // mostrar o resultado de repeticoes
    IO_printf("\nNumero de elementos diferentes de digitos e letras: %d\n", z);
    IO_printf("%s\n", registrar);

    // encerrar
    IO_pause("Apertar ENTER para continuar");
    getchar();
} // fim method03E1 ( )

/*
 Funcao principal.
*/
int main()
{
    // definir dado
    int x = 0; // definir variavel com valor inicial
               // repetir até desejar parar
    do
    {
        // identificar
        IO_id("Exemplo03E1 - Programa - v0.0");

        // ler do teclado
        IO_println("Opcoes");
        IO_println(" 0 - parar");
        IO_println(" 1 - separar e mostrar elementos nao alfanumericos de uma cadeia de caracateres");
        IO_println("");
        x = IO_readint("Entrar com uma opcao, inserindo seu valor: ");

        // testar valor
        switch (x)
        {
        case 0:
            method00();
            break;
        case 1:
            method03E1();
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
a.) ABC
b.) abc
c.) !@#
d.) A!b@c3
e.) !@#$QWER1234
---------------------------------------------- historico
Versao Data Modificacao
 E.1 __/__ testar elementos alfanumerico
---------------------------------------------- testes
Versao Teste
 E.1 ( OK ) teste de separacao em nova sting de elementos nao alfanumericos
*/
