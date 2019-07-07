#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>

#include "main.h"

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(window_width, window_height), game_name);    
    sf::Event event;
    sf::Texture texture;
    sf::Font font;        

    if (!font.loadFromFile(font_file))
    {
        cout << "FONT LOADING ERROR" << endl;
        window.close();
    }

    if (!texture.loadFromFile(texture_file))
    {
        cout << "TEXTURE LOADING ERROR" << endl;
        window.close();
    }    

    window.setFramerateLimit(frame_limit);

    // Sprite test
    sf::Sprite sprite(texture);
    sprite.setPosition(sf::Vector2f(window_width/2-32, window_height/2-32));

    // Font test
    sf::Text text("SFML WORKS !", font);
    text.setCharacterSize(64);    
    text.setFillColor(sf::Color::Red);  

    while (window.isOpen())
    {
        // Events
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;

            case sf::Event::Resized:
                break;

            case sf::Event::MouseMoved:
                break;

            case sf::Event::MouseButtonPressed:
                break;

            case sf::Event::MouseButtonReleased:
                break;

            case sf::Event::MouseWheelScrolled:
                break;

            case sf::Event::KeyPressed:
                break;

            case sf::Event::KeyReleased:
                break;
            }
        }
        // Update
                
        // ...

        // Draw
        window.clear();

        window.draw(sprite);
        window.draw(text);

        window.display();        
    }
    return 0;
}
