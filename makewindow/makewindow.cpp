#include<iostream>
#include"Game.h"

int main()
{
	//Init srand
	srand(static_cast<unsigned>(time(NULL)));

	//init Game engin
	Game game;

	// Game loop
	while (game.running() && !game.getEndGame())
	{
		//update
		game.update();
		//render
		game.render();
		
	}
	return 0;
}