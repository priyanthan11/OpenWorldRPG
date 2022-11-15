#include "Game.h"

// Static Functions

// Initializer functions

// Constructor/destructor


void Game::InitWindow()
{
    /* Create SFML window using option from window.ini file*/
	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "RPG");
}

Game::Game()
{
    this->InitWindow();
}

Game::~Game()
{
	delete this->window;
}


// Functions
void Game::updateSFMLEvent()
{
    while (this->window->pollEvent(this->sfEvent))
    {
        if (this->sfEvent.type == sf::Event::Closed)
        {
            this->window->close();
        }
    }
}

void Game::update()
{
    this->updateSFMLEvent();
}

void Game::render()
{
    this->window->clear();

    // Render Items



    this->window->display();
}

void Game::run()
{
    while (this->window->isOpen())
    {
        this->update();
        this->render();
    }
}
