#pragma once
#include <iostream>
#include <ctime>
#include<cstdlib>

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"

class Game
{
private:
	//Variables
	sf::RenderWindow* window;
	sf::Event sfEvent;

	// Initialization
	void InitWindow();
	

public:
	// Constructor/destructor
	Game();
	virtual ~Game();
	//Functions
	void updateSFMLEvent();
	void update();
	void render();
	void run();
	


};

