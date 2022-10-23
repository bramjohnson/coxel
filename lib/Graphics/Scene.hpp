#ifndef SCENE_HPP
#define SCENE_HPP
#include <SFML/Graphics.hpp>

namespace lib {
    class Scene {
        public:
            virtual void Input(sf::Event& event) = 0;
            virtual void Draw(sf::RenderWindow& window) = 0;
    };
}

#endif
