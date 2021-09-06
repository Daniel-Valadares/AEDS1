/*
 Guia0312 - v0.0. - __ / __ / _____
 Author: 748377_Daniel_Valadares_De_Souza_Felix
 Para compilar em uma janela de comandos (terminal):

 No Linux  : g++ -o Guia0312    ./Guia0312.cpp
 No Windows: g++ -o Guia0312.exe  Guia0312.cpp
 Para executar em uma janela de comandos (terminal):
 No Linux : ./Guia0312
 No Windows:  Guia0312
*/
// lista de dependencias
#include "karel.hpp"
#include "io.hpp"
// --------------------------- definicoes de metodos
/**
 decorateWorld - Metodo para preparar o cenario.
 @param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld(const char *fileName)
{
    // colocar paredes no mundo
    int X = 0;
    int Y = 0;
    for (Y = 3; Y <= 8; Y = Y + 1)
    {
        world->set(1, Y, VWALL);
        if (Y <= 7)
        {
            world->set(2, Y, VWALL);
            world->set(7, Y, VWALL);
        } // end if 

        if (Y >= 5 && Y <= 6)
        {
            world->set(3, Y, VWALL);
        } // end if
        if (Y == 7)
        {
            world->set(4, Y, VWALL);
        } // end if
        if (Y == 6)
        {
            world->set(5, Y, VWALL);
        } // end if
    }  // end for
    for (X = 2; X <= 7; X = X + 1)
    {
        world->set(X, 2, HWALL);
        world->set(X, 8, HWALL);
        if (X == 3 || (X >= 5 && X <= 7))
        {
            world->set(X, 7, HWALL);   
        } // end if
        if (X >= 4 && X <= 5)
        {
            world->set(X, 6, HWALL);   
        } // end if
        if (X == 6)
        {
            world->set(X, 5, HWALL);   
        } // end if
        if (X >= 4 && X <= 6)
        {
            world->set(X, 4, HWALL);   
        } // end if
    } // end for
    // colocar um marcador no mundo
    int n = 0;
    for (n = 1; n <= 3; n = n + 1)
    {
        world->set(5, 7, BEEPER);
        if (n <= 2)
        {
            world->set(5, 6, BEEPER);
        } // end if
        if (n <= 1)
        {
            world->set(2, 3, BEEPER);
        } // end if
    } // end for
    
    // salvar a configuracao atual do mundo
    world->save(fileName);
} // decorateWorld ( )
/**
 Classe para definir robo particular (MyRobot),
 a partir do modelo generico (Robot)
 Nota: Todas as definicoes irao valer para qualquer outro robo
 criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
public:
    /**
 turnRight - Procedimento para virar 'a direita.
 */
    void turnRight()
    {
        // definir dado local
        int step = 0;
        // testar se o robo esta' ativo
        if (checkStatus())
        {
            // o agente que executar esse metodo
            // devera' virar tres vezes 'a esquerda
            for (step = 1; step <= 3; step = step + 1)
            {
                turnLeft();
            } // end for
        }     // end if
    }         // end turnRight ( )
    /**
 moveN - Metodo para mover certa quantidade de passos.
 @param steps - passos a serem dados.
 */
    void moveN(int steps)
    {
        // definir dado local
        int step = 0;
        // testar se a quantidade de passos e' maior que zero
        for (step = steps; step > 0; step = step - 1)
        {
            // dar um passo
            move();
        } // end if
    }     // end moveN( )
    void turnAround() // virar 180°
    {
        turnLeft();
        turnLeft();
    }   // end void turnAround()
    void turnAroundCornerLeft() // fazer curva fechada à esquerda (“U”)
    {
        move(); 
        if (leftIsClear())
        {
            turnLeft();
            move();
        } // end if
        if (leftIsClear())
        {
            turnLeft();
            move();
        } // end if
    }   // end void turnAroundCornerLeft()
    /**
 countCommands - Funcao para contar comandos de arquivo.
 @return quantidade de comandos
 @param fileName - nome do arquivo
 */
    int countCommands(const char *fileName)
    {
        // definir dados
        int x = 0;
        int length = 0;
        // abrir arquivo para leitura
        std::ifstream archive(fileName);
        // repetir enquanto houver dados
        archive >> x;
        while (!archive.eof())
        {
            // contar mais um comando
            length = length + 1;
            // tentar ler a proxima linha
            archive >> x;
        } // end while
        // fechar o arquivo
        archive.close();
        // retornar resultado
        return (length);
    } // end countCommands( )

    /**
 readCommands - Metodo para receber comandos de arquivo.
 @return grupo formado por todos os comandos
 @param filename - nome do arquivo
 */
    int readCommands(int commands[], const char *fileName)
    {
        // definir dados
        int x = 0;
        int action = 0;
        int length = 0;
        std::ifstream archive(fileName);
        // obter a quantidade de comandos
        length = countCommands(fileName);
        // criar um armazenador para os comandos
        if (length < MAX_COMMANDS)
        {
            // repetir para a quantidade de comandos
            for (x = 0; x < length; x = x + 1)
            {
                // tentar ler a proxima linha
                archive >> action;
                // guardar um comando
                // na posicao (x) do armazenador
                commands[x] = action;
            } // end for
            // fechar o arquivo
            // INDISPENSAVEL para a gravacao
            archive.close();
        } // end for
        // retornar quantidade de comandos lidos
        return (length);
    } // end readCommands( )
    /**
 execute - Metodo para executar um comando.
 @param action - comando a ser executado
*/
    void execute(int option)
    {
        // executar a opcao de comando
        switch (option)
        {
        case 0: // terminar
            // nao fazer nada
            break;
        case 1: // virar para a esquerda
            if (leftIsClear())
            {
                turnLeft();
            } // end if
            break;
        case 2: // virar para o sul
            while (!facingSouth())
            {
                turnLeft();
            } // end while
            break;
        case 3: // virar para a direita
            if (rightIsClear())
            {
                turnRight();
            } // end if
            break;
        case 4: // virar 180°
            turnAround();
            break;
        case 5: // mover
            if (frontIsClear())
            {
                move();
            } // end if
            break;
        case 6: // - fazer curva fechada à esquerda (“U”)
            turnAroundCornerLeft();
            break;
        case 7: // pegar marcador
            if (nextToABeeper())
            {
                pickBeeper();
            } // end if
            break;
        case 8: // virar para o norte
            while (!facingNorth())
            {
                turnLeft();
            } // end while
            break;
        case 9: // colocar marcador
            if (beepersInBag())
            {
                putBeeper();
            } // end if
            break;
        default: // nenhuma das alternativas anteriores
            // comando invalido
            show_Error("ERROR: Invalid command.");
        } // end switch
    }     // end execute( )
/**
 * Lista de comandos disponiveis:
 * 0 - turnOff
 * 1 - turnLeft         2 - to South
 * 3 - turnRight        4 - to turnAround
 * 5 - move             6 - to turnAroundCornerLeft
 * 7 - pickBeeper       8 - to North
 * 9 - putBeeper
 */
    void recordActions(const char *fileName)
    {
        // definir dados
        int action;
        // definir arquivo onde gravar comandos
        std::ofstream archive(fileName);
        // ler acao
        action = IO_readint("Command? ");
        // repetir enquanto acao maior ou igual a zero
        while (action >= 0)
        {
            // testar se opcao valida
            if (0 <= action && action <= 9)
            {
                // executar comando
                execute(action);
                // guardar o comando em arquivo
                archive << action << "\n";
            } // end if
            // ler acao
            if ( action == 0 ) 
            {
              // evitar ler o zero duas vezes
              action = -1; // parar
            }
            else
            {
              action = IO_readint("Command? ");
            }
        } // end while
        // fechar o arquivo
        // INDISPENSAVEL para a gravacao
        archive.close();
    } // end recordActions ( )
      /**
    /**
 metodo para executar comandos de arquivo.
 @param length - quantidade de comandos
 @param commands - grupo de comandos para executar
*/
    void doCommands(int length, int commands[])
    {
        // definir dados
        int action = 0;
        int x = 0;
        // repetir para a quantidade de comandos
        for (x = 0; x < length; x = x + 1)
        {
            // executar esse comando
            execute(commands[x]);
        } // end for
    }     // end doCommands( )

    /**
 doTask - Metodo para executar comandos de arquivo.
 @param fileName - nome do arquivo
*/
    void doTask(const char *fileName)
    {
        // definir dados locais
        int quantidade = 0;
        int comandos[MAX_COMMANDS];
        char message[80];
        // ler quantidade e comandos
        quantidade = readCommands(comandos, "Tarefa0312.txt");
        message[0] = '\0'; // limpar a mensagem
        sprintf(message, "Commands = %d", quantidade);
        show_Text(message);
        // executar comandos
        doCommands(quantidade, comandos);
    } // end doTask( )

    /**
 mapWorld Metodo para o robot explorar o mundo
 e fazer um mapa.
 @param map - arranjo bidimensional ( matriz )
 onde guardar o mapa
*/
    void mapWorld(int map[][WIDTH])
    {
        // definir dados locais
        int avenue = 0;
        int street = 0;
        int beepers = 0;
        char message[80];
        // obter o tamanho do mundo
        if (world != nullptr)
        {
            // informar o tamanho do mundo
            message[0] = '\0';
            sprintf(message, "World is %dx%d", world->avenues(), world->streets());
            show_Text(message);
            // percorrer o mundo procurando beepers
            for (street = 1; street <= world->streets(); street = street + 1)
            {
                for (avenue = 1; avenue <= world->avenues(); avenue = avenue + 1)
                {
                    // limpar posicao no mapa
                    map[street - 1][avenue - 1] = 0;
                    // se proximo a um marcador
                    if (nextToABeeper())
                    {
                        // informar marcador nesta posicao
                        message[0] = '\0';
                        sprintf(message, "Beeper at (%d,%d)", avenue, street);
                        show_Text(message);
                        // marcar posicao no mapa
                        map[street - 1][avenue - 1] = 1;
                        // encontrado mais um marcador
                        beepers = beepers + 1;
                    } // end if
                    // mover para a proxima posicao
                    if (avenue < world->avenues())
                    {
                        move();
                    } // end if
                }     // end for
                turnLeft();
                turnLeft();
                moveN(world->avenues() - 1);
                if (street < world->streets())
                {
                    turnRight();
                    move();
                    turnRight();
                } // end if
            }     // end for
        }         // end if
    }             // end mapWorld( ))

    /**
 saveMap - Metodo para guardar um mapa em arquivo.
 @param filename - nome do arquivo onde guardar o mapa
 @param map - arranjo bidimensional (matriz) com o mapa
*/
    void saveMap(const char *fileName, int map[][WIDTH])
    {
        // definir dados locais
        int avenue = 0,
            street = 0;
        // abrir arquivo para gravacao
        std::ofstream archive(fileName);
        // testar se ha' informacao
        if (world != nullptr)
        {
            // guardar o tamanho do mundo
            archive << world->avenues() << "\n";
            archive << world->streets() << "\n";
            // percorrer o mundo procurando beepers
            for (street = 1; street <= world->streets(); street = street + 1)
            {
                for (avenue = 1; avenue <= world->avenues(); avenue = avenue + 1)
                {
                    // guardar informacao no arquivo
                    if (map[street - 1][avenue - 1] == 1)
                    {
                        archive << avenue << std::endl;
                        archive << street << std::endl;
                        archive << map[street - 1][avenue - 1] << std::endl;
                    } // end if
                }     // end for
            }         // end for
            // fechar arquivo
            archive.close();
        } // end if
    }     // end saveMap ( )

    /**
 showMap - Metodo para ler um mapa em arquivo.
 @param avenues - largura do mapa
 @param streets - altura do mapa
 @param map - arranjo bidimensional (matriz) com o mapa
*/
    void showMap(int avenues, int streets, char map[][HEIGHT])
    {
        // definir dados
        int x = 0,
            y = 0;
        // percorrer o mundo procurando marcadores
        clrscr();
        std::cout << " Mapa de marcadores\n\n";
        std::cout << " ";
        for (x = 0; x < streets; x = x + 1)
        {
            std::cout << (x + 1);
        } // end for
        std::cout << std::endl;
        for (y = 0; y < streets; y = y + 1)
        {
            std::cout << (y + 1);
            for (x = 0; x < avenues; x = x + 1)
            {
                std::cout << map[y][x];
            } // end for
            std::cout << std::endl;
        } // end for
        IO_pause(" Apertar ENTER para continuar.");
    } // end showMap ( )
    /**
 readMap - Metodo para ler um mapa em arquivo.
 @param fileName - nome do arquivo com o mapa
*/
    void readMap(const char *fileName)
    {
        // definir dados
        int avenue = 0,
            street = 0;
        int avenues = 0,
            streets = 0;
        int x = 0,
            y = 0,
            z = 0;
        std::ifstream archive(fileName);
        // reservar area para guardar o maior mapa possivel
        char map[WIDTH][HEIGHT];
        // obter o tamanho do mundo
        archive >> avenues;
        archive >> streets;
        // testar configuracao do mapa
        if ((0 < avenues && avenues <= world->width) &&
            (0 < streets && streets <= world->height))
        {
            // percorrer o mundo procurando marcadores
            for (y = 0; y < streets; y = y + 1)
            {
                for (x = 0; x < avenues; x = x + 1)
                {
                    map[y][x] = '.';
                } // end for
            }     // end for
            // repetir enquanto houver dados
            archive >> avenue;     // tentar ler a primeira linha
            while (!archive.eof()) // testar se nao encontrado o fim
            {
                // contar mais um comando
                archive >> street;
                archive >> z;
                // testar se informacoes validas
                if ((1 <= avenue && avenue <= world->width) &&
                    (1 <= street && street <= world->height) &&
                    (z == 1))
                {
                    map[street - 1][avenue - 1] = 'X';
                }                  // end if
                archive >> avenue; // tentar ler a proxima linha
            }                      // end while
            // fechar o arquivo
            // RECOMENDAVEL para a leitura
            archive.close();
            // mostrar o mapa
            showMap(avenues, streets, map);
        } // end if
       } // end readMap ( )

    }; // end class MyRobot
    // --------------------------- acao principal
    /**
 Acao principal: executar a tarefa descrita acima.
*/
    int main()
    {

        // definir o contexto
        // criar o ambiente e decorar com objetos
        // OBS.: executar pelo menos uma vez,
        // antes de qualquer outra coisa
        // (depois de criado, podera' ser comentado)
        world->create(""); // criar o mundo
        decorateWorld("Guia0312.txt");
        world->show();
        // preparar o ambiente para uso
        world->reset();              // limpar configuracoes
        world->read("Guia0312.txt"); // ler configuracao atual para o ambiente
        world->show();               // mostrar a configuracao atual
        set_Speed(1);                // definir velocidade padrao
                                     // criar robo
        MyRobot *robot = new MyRobot();
        // posicionar robo no ambiente (situacao inicial):
        robot->create(1, 1, EAST, 0, "Karel");

        // definir armazenador para o mapa
        int map[HEIGHT][WIDTH]; // altura x largura
        // executar tarefa
        robot->doTask("Tarefa0312.txt");
        // encerrar operacoes no ambiente
        world->close();
        // encerrar programa
        getchar();
        return (0);
    } // end main ( )
      // ------------------------------------------- testes
      /*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
 0.12 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1    01. ( OK ) identificacao de programa
 0.2    01. ( OK ) forma alternativa de identificacao de programa
 0.3    01. ( OK ) recepcao de comandos de arquivos
 0.4    01. ( OK ) teste de execucap de comandos 
 0.5    01. ( OK ) teste de forma alternativa de execucao de comandos
 0.6    01. ( OK ) teste de leitura do tamanho do tamanho do mundo
 0.7    01. ( OK ) teste de idetificacao de beepers
 0.8    01. ( OK ) teste de recordacao de mapa
 0.9    01. ( OK ) teste de recordacao de arquivo de mapa
 0.10   01. ( OK ) teste de leitura de arquivo de mapa
 0.11   01. ( OK ) teste de movimentacao com leitura de arquivos 
 0.12   01. ( OK ) teste de novos comandos executaveis 
 */