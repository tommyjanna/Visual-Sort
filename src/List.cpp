#include "List.h"

using namespace sf;

List::List()
{
	size = 0;
}

List::List(int _size)
{
	Node newNode;
	size = _size;
		
	for(int i = 0; i < _size; i++)
	{
		newNode = Node();
	}
}

List::~List()
{
    
}

List::Node::Node()
{
	RectangleShape rectangle;
	
	// Randomly generate a number between 1 and 20.
	content = rand() % 20 + 1;
	
	    rectangle.setSize(sf::Vector2f(100, 50));
rectangle.setOutlineColor(sf::Color::Red);
rectangle.setOutlineThickness(5);
rectangle.setPosition(10, 20);
}


int List::Node::GetContent()
{
	return content;
}

void List::Node::SetContent(int _content)
{
	content = _content;
	return;
}
