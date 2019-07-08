/*
    SFML-TEMPLATE
    Copyright (c) 2019 Fredy Rogez (rogez.net)

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

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
