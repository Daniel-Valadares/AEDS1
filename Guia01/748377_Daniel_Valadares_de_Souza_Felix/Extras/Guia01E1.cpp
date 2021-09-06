/*
 Guia01E1 - v0.0. - __ / __ / _____
 Author: 748377 Daniel Valadares de Souza Felix
 Para compilar em uma janela de comandos (terminal):

 No Linux  : g++ -o Guia01E1 ./Guia01E1.cpp
 No Windows: g++ -o Guia01E1.exe Guia01E1.cpp
 Para executar em uma janela de comandos (terminal):
 No Linux : ./Guia01E1
 No Windows: Guia01E1
*/
// lista de dependencias
#include "karel.hpp"
// --------------------------- definicoes de metodos
/**
 decorateWorld - Metodo para preparar o cenario.
 @param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar paredes no mundo
 world->set ( 3, 2, HWALL ); // horizontal
 world->set ( 4, 2, HWALL ); // horizontal
 world->set ( 5, 2, HWALL ); // horizontal
 world->set ( 3, 6, HWALL ); // horizontal
 world->set ( 4, 6, HWALL ); // horizontal
 world->set ( 5, 6, HWALL ); // horizontal
 world->set ( 2, 3, VWALL ); // vertical
 world->set ( 2, 4, VWALL );
 world->set ( 2, 5, VWALL );
 world->set ( 2, 6, VWALL );
 world->set ( 5, 3, VWALL );
 world->set ( 5, 4, VWALL );
 world->set ( 5, 5, VWALL );
// colocar um marcador no mundo
 world->set ( 5, 3, BEEPER );
 world->set ( 5, 3, BEEPER );
 world->set ( 5, 3, BEEPER );
 world->set ( 5, 3, BEEPER );
 world->set ( 5, 3, BEEPER );
 world->set ( 5, 3, BEEPER );
// salvar a configuracao atual do mundo
 world->save( fileName );
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
 turnRight - Procedimento (acao) para virar 'a direita.
 */
 void turnRight ( )
 {
 // testar se o robo esta' ativo
 if ( checkStatus ( ) )
 {
 // o agente que executar esse metodo
 // devera' virar tres vezes 'a esquerda
 turnLeft ( );
 turnLeft ( );
 turnLeft ( );
 } // end if
 } // end turnRight ( )
 /**
 moveN - Metodo para mover certa quantidade de passos.
 @param steps - passos a serem dados.
 */
 void moveN( int steps )
 {
 // definir dado local
 int step = 0;
 // repetir contando e testando ate' atingir a quantidade de passos
 for ( step = 1; step <= steps; step = step + 1 ) // outra forma de repetir
 {
 // dar um passo por vez
 move( );
 } // end if
 } // end moveN( )

 // colocar multiplos marcadores no chao
 void putBeepers ( int drops )
 {
 int drop = 0;
 for ( drop = 1; drop <= drops; drop = drop + 1 )
 {
 putBeeper( );
 } // end if
 } // end putBeepers ( )

// coletar multiplos marcadores no chao
 void pickBeepers ( int picks )
 {
 int pick = 0;
 for ( pick = 1; pick <= picks; pick = pick + 1 )
 {
 pickBeeper( );
 } // end if
 } // end pickBeepers ( )
 /**
 doPartialTask - Metodo para descrever parte de uma tarefa.
 */
 void doPartialTask( )
 {
 // especificar acoes dessa parte da tarefa
 moveN( 3 );
 turnLeft( );
 } // end doPartialTask( )
 /**
 doTask - Relacao de acoes para o robo executar.
 */
 void doTask( )
 {
    moveN(5);
    turnLeft();
    moveN(5);
    turnLeft();
    move();
    turnLeft();
    moveN(3);
    pickBeepers(6);
    turnRight();
    turnRight();
    moveN(3);
    turnRight();
    move();
    turnLeft();
    move();
    turnLeft();
    moveN(3);
    putBeepers(3);
    move();
    turnLeft();
    moveN(4);
    putBeepers(2);
    move();
    turnLeft();
    moveN(4);
    turnLeft();
    move();
    putBeeper();
    turnLeft();
    turnLeft();
    moveN(2);
    turnRight();
    moveN(5);
    turnRight();
    turnRight();
    turnOff ( );
 } // end doTask( )
}; // end class MyRobot
// --------------------------- acao principal
/**
 Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
// criar o ambiente e decorar com objetos
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
 world->create ( "" ); // criar o mundo
 decorateWorld ( "Guia01E1.txt" );
 world->show ( );
// preparar o ambiente para uso
 world->reset ( ); // limpar configuracoes
 world->read ( "Guia01E1.txt" );// ler configuracao atual para o ambiente
 world->show ( ); // mostrar a configuracao atual
 set_Speed ( 2 ); // definir velocidade padrao
// criar robo
 MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
 robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
 robot->doTask();
// encerrar operacoes no ambiente
 world->close ( );
// encerrar programa
 getchar ( );
 return ( 0 );
} // end main ( )
// ---------------------------------------------- testes
/*
748377 Daniel Valadares de Souza Felix
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
 E.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 E.1 ( OK ) teste de cojunto de acoes em ordem decrecente
*/