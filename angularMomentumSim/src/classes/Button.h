#pragma once
#include <SFML/Graphics.hpp>

class Button
{
public:
	Button();
	Button(std::string text1, int size, sf::Font& font);
	void create(std::string text1, int size, sf::Font& font);
	void setFont(sf::Font font1);
	void setFontSize(int size);
	void draw(sf::RenderWindow &window);
	void setPosition(double x, double y);
private:
	void resize();
	sf::RectangleShape button;
	sf::Text text;
};

