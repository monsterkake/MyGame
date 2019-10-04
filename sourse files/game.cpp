#include "game.h"
#include "draw.h"


Game game;

void Game::createWindow()
{
	m_window.create(sf::VideoMode(600, 400), "main");
}

void Game::changeState(char mode)
{
		gameState = mode;
}

void Game::eventProcessing()
{
	while (m_window.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			m_window.close();
			break;
		}
	}
}

void Game::mainLoop()
{
	while (m_window.isOpen())
	{
		switch (gameState)
		{
		case 'm':
			menu.drawMenu();
			break;
		}
		
		eventProcessing();

	}
		
}
