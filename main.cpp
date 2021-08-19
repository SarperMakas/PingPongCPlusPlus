# include <iostream>

// import SFML
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

// use game
# include "Game.h"


int main() {
	// main funciton

	Game game;  // Define game class 
	game.run(); // Start math

	return 0;
}