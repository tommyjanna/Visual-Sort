#ifndef LIST_H
#define LIST_H

#include <SFML/Graphics.hpp>

using namespace sf;

class List
{
public:
	List();
	List(int);
	virtual ~List();

	void BubbleSort();
private:
	class Node
	{
	public:
		Node();
		int GetContent();
		void SetContent(int);
	private:
		int content;
		RectangleShape rectangle;
	};

	int size;
};

#endif
