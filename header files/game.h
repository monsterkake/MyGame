#include <string>
#include <iostream>
#include <SFML/OpenGL.hpp>
#include <SFML/Network.hpp>
#include <SFML/Graphics.hpp>

using namespace std;

class Game
{
public:
	char gameState;

	 sf::RenderWindow m_window;
	
	sf::Event event;

	void mainLoop();
	void createWindow();
	void changeState(char);
private:
	void eventProcessing();
};

extern Game game;
