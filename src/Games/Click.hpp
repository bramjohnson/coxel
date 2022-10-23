#ifndef CLICK_HPP
#define CLICK_HPP
#include <SFML/Graphics.hpp>
#include "Scene.hpp"

// A game where you click on the screen, or do any input, and one white pixel gets added to the screen. Try to fill it up!
namespace game {
    class Click: public lib::Scene {
        private:
            int clicks;
        
        public:
            Click();
            void OnClick();
            void Input(sf::Event& event);
            void Draw(sf::RenderWindow& window);
    };
}

#endif