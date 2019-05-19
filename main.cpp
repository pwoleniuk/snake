#include <SFML/Graphics.hpp>
#include "Board.h"
#include "Snake.h"
#include "SFMLView.h"

int main() {
        sf::RenderWindow win(sf::VideoMode(800, 600), "My window");
        Board plansza(20,20);
        Snake waz(plansza);
        SFMLView view(plansza,waz);
        // rysujemy
        while (win.isOpen())
        {
            // obsługa zdarzeń
            //
            win.clear();
            view.draw(win);   // wywołujemy funkcję draw i dostarczamy jej okno na którym ma odbyć sie rysowanie
            win.display();
        }

}