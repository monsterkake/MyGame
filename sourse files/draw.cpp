#include "game.h"
#include "draw.h"

void Menu::drawMenuBG()
{
	texture.loadFromFile("menuBG.jpg");
	menuBG.setTexture(texture);
	game.m_window.draw(menuBG);
}

void Menu::drawMenu()
{
	game.m_window.clear();
	drawMenuBG();
	game.m_window.display();
}

Menu menu;
