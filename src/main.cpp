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
	Event event;

	// Creates list of unique numbers in order from 1 - SIZE.
	List list(SIZE);
	
	
	srand(time(nullptr));
	
	// Randomize the list.
	list.Shuffle();
	// Set sort flag to true.
	list.Sort();

	while(window.isOpen())
	{
		/// INPUT

		while(window.pollEvent(event)) // Obtain next input in queue.
		{
			if(event.type == Event::Closed) // X button is pressed.
			{
				window.close();
			}
		}
		
		/// SORTING
		
		if(list.IsSorting()) // Not finished sorting.
		{
			// Run next sort step.
			list.BubbleSortStep();
		}
		
		/// RENDERING
		
		// Update all items in list to be drawn.
		list.Draw();
		
		window.clear();
		
		for(int i = 0; i < SIZE; i++) // Draw each node in list.
		{
			window.draw(list.GetNodeAt(i)->rectangle);
		}
		
		window.display();
	}

	return 0;
}
