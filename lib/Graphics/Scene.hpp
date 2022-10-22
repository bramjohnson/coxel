#pragma once

namespace lib {
    class Scene {
        public:
            // Default constructor
            Scene();

            // Destructor
            ~Scene();

            // Copy Constructor
            Scene(const Scene& rhs);

            void Input(sf::Event& event);

            void Draw(sf::RenderWindow& window);
    };
}