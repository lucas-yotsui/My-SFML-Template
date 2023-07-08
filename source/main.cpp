#include <SFML/Graphics.hpp>

int main(void) {
    auto window = sf::RenderWindow{ { 1920u, 1080u }, "CMake SFML Project" };
    window.setFramerateLimit(144);

    auto mouse = sf::Mouse{};

    auto circle = sf::CircleShape{ 20u };

    auto font = sf::Font{};
    font.loadFromFile("assets/fonts/OpenSans-Bold.ttf");

    auto text = sf::Text { "Mova o circulo com WASD, com as setas do teclado ou clique em algum lugar da janela para posiciona-lo la", font, 30u};
    text.setOrigin((105 * 7.5), 0);
    text.setFillColor(sf::Color::Yellow);
    text.setOutlineColor(sf::Color::White);
    text.setPosition((1920 / 2), 0);


    unsigned short positionX = (1920 / 2);
    unsigned short positionY = (1080 / 2);
    circle.setPosition(positionX, positionY);

    while (window.isOpen()) {
        for (auto event = sf::Event{}; window.pollEvent(event);) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (event.type == sf::Event::MouseButtonPressed) {
                positionX = mouse.getPosition(window).x - 20;
                positionY = mouse.getPosition(window).y - 20;

                circle.setPosition(positionX, positionY);
            }
            
            if (event.type == sf::Event::KeyPressed) {
                switch(event.key.code) {
                    case sf::Keyboard::W:
                        positionY -= 10;
                        break;
                    case sf::Keyboard::A:
                        positionX -= 10;
                        break;
                    case sf::Keyboard::S:
                        positionY += 10;
                        break;
                    case sf::Keyboard::D:
                        positionX += 10;
                        break;

                    case sf::Keyboard::Up :
                        positionY -= 10;
                        break;
                    case sf::Keyboard::Left:
                        positionX -= 10;
                        break;
                    case sf::Keyboard::Down:
                        positionY += 10;
                        break;
                    case sf::Keyboard::Right:
                        positionX += 10;
                        break;

                    default:
                        break;
                }

                circle.setPosition(positionX, positionY);

            }
        }

        window.clear();
        window.draw(circle);
        window.draw(text);
        window.display();
    }
}