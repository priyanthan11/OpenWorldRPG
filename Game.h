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

	sf::Clock dtClock;
	float dt; // dt == delta time


	// Initialization
	void InitWindow();
	

public:
	// Constructor/destructor
	Game();
	virtual ~Game();
	//Functions
	void updateDt();
	void updateSFMLEvent();
	void update();
	void render();
	void run();
	


};

