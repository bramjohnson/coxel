// C++ Standard Libraries
#include <iostream>
#include <math.h>
#include <stack>
// Third Party Libraries
#include <SFML/Graphics.hpp>
// Include scenes
#include "Scene.hpp"
#include "Click.hpp"

// Entry point to the program
int main(){
    // Initialize a random seed
    srand(time(NULL));
    // Set dimensions of the window
    const int width = 256;
    const int height = 256;
    // Create scene stack
    std::stack<lib::Scene> scenes = new std::stack<lib::Scene>();
    scenes.push(new game::Click());
    // Create the window
    sf::RenderWindow window(sf::VideoMode(width,height), "Pixellege");
    // Limit to 30 FPS
    window.setFramerateLimit(30);
    
    // Main loop of the program
    while (window.isOpen())
    {
        // Pop top scene in the game
        lib::Scene top = scenes.pop();

        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
                continue;
            }
            
            top.Input(&event);
        }

	    // Clear the window at the start of every frame
        window.clear();

        // Do the fire rendering
        top.Draw(&window);

	    // Display to the window
        window.display();
    }


    return 0;
}
