#include <SFML/Graphics.hpp>

using namespace sf;

int main() {

    RenderWindow window(VideoMode(640,480,32),"Hello SFML");

    Font font;
    font.loadFromFile("../resources/fonts/Pacifico.ttf");

    Text text("Hello World",font,11);
    text.setCharacterSize(32);
    text.setPosition(window.getSize().x/2.0f - text.getGlobalBounds().width/2.0f,
                     window.getSize().y/2.0f - text.getGlobalBounds().height/2.0f);


    while(window.isOpen()){

        Event event{};
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed){
                window.close();
            }

            window.clear(sf::Color::Black);
            window.draw(text);
            window.display();
        }
    }
    return 0;
}