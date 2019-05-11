// List.h
// Class Name:		  List
// Class Description: Stores a list of unique numbers in an array
//					  and the graphical data for each node.
// Date Created:	  May 8, 2019
// Last Modified:	  May 11, 2019
// Created by:		  Tommy Janna

#ifndef LIST_H
#define LIST_H

#define SIZE 20
#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

#include <SFML/Graphics.hpp>

using namespace sf;

class List
{
		
private:
	// Nested class Node representing each item in the list.
	class Node
	{
	public:
		Node(int);
		int GetContent();
		void SetContent(int);
		int GetHeight();
		void SetColour(Color);
		
		void Draw(int, int);
		
		RectangleShape rectangle;
	private:
		int content;
		int height, width;
	};

	int size;
	Node* nodes[20];
	
	int currentSortIndex;
	int currentIndex;
	
	bool sorting;
		
public:
	List(int);
	
	void BubbleSortStep();
	void Shuffle();
	Node* GetNodeAt(int);
	bool IsSorting();
	void Sort();
	void Draw();
};

#endif
