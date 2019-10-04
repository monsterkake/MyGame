#include "game.h"
int main()
{
	game.createWindow();
	game.changeState('m');

	game.mainLoop();
	
	return 0;
}
