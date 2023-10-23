#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "7");

    sf::Texture texture1, texture2;

    texture1.loadFromFile("rcircle.png");
    sf::Sprite sprite1(texture1);

    texture2.loadFromFile("newFondo.png");
    sf::Sprite sprite2(texture2);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();

        sprite1.setPosition(250, 250);
        sprite1.setColor(sf::Color::Blue);
        window.draw(sprite1);

        sprite2.setPosition(0, 0);
        window.draw(sprite2);

        window.display();
    }
}
