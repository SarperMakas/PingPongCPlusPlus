#pragma once
#include <iostream>

// include SFMl
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

// use sf namespace
using namespace sf;


class Game {
private:
	// Variables

	// sizes of screen
	const int width = 1500;
	const int height = 1000;

	// sizes of player
	const float palletWidth = 30.f;
	const float palletHeight = 150.f;
	const float ballRadius = 55.f;

	RenderWindow* window;  // window of game
	VideoMode videoMode;  // sizes of window
	Event events;  // events of game

	// All rectangel shapes
	RectangleShape divisionLine; // A line for divide screen
	RectangleShape player; // Player characther
	RectangleShape computer; // Player characther
	RectangleShape ball; // ball with circle shape

	// Colors
	const Color backgroundColor = Color::Color(31, 31, 31, 255);  // backgroundColor
	const Color foregroundColor = Color::Color(55, 55, 55, 255);  // foregroundcolor

	// scorss
	Text playerPointText;  // text for player
	Text computerPointText;  // text for computer

	int playerPoint = 0;  // point of player
	int computerPoint = 0;  // point of computer

	// font
	sf::Font font;  // font for texts
	const std::string fontName = "Roboto-Regular.ttf";  // fonts path
	const int fontsize = 50; // size of font

	// move of ball
	float moveX = 0.f;
	float moveY = 0.f;
	float posibleMove[2] = { 0.5f, -0.5f };

	// Margin
	const float margin = 5.f;

	// private functions
	void draw();
	void eventLoop();
	void setPoints();
	void changePlayerPosition(int val);
	void moveBall();
	void setComputer();
	bool checkCollision(RectangleShape r1, RectangleShape r2);

public:
	// public functions
	void run();
	Game();
	virtual ~Game();
};

