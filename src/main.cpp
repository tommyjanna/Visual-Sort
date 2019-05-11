// main.cpp
// Project Title:		Visual Sort
// Project Description:	A program that generates and sorts an array
//						using the bubble sort algorithm and SFML
//						for the visual representation.
// Date Created:		May 8, 2019
// Last Modified:		May 11, 2019
// Created by:			Tommy Janna

#include <ctime>
#include <SFML/Graphics.hpp>
#include "List.h"

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Visual Sort");

	// Number of elements in list.
	List list(SIZE);
	
	srand(time(nullptr));
	
	list.Shuffle();
	list.Draw();
	list.Sort();

	while(window.isOpen())
	{
		Event event;

		while(window.pollEvent(event)) // Handle any input.
		{
			if(event.type == Event::Closed) // X button is pressed.
			{
				window.close();
			}
		}
		
		list.Draw();
		
		if(list.IsSorting())
		{
			list.BubbleSortStep();
		}
		
		window.clear();
		
		for(int i = 0; i < SIZE; i++)
		{
			window.draw(list.GetNodeAt(i)->rectangle);
		}
		
		window.display();
	}

	return 0;
}
