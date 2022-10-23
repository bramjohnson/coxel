#include "Click.hpp"

Click::Click() {
    this->clicks = 0;
}

void Click::OnClick() {
    this->clicks++;
}

void Click::Input(sf::Event& event) {
    return;
}

void Click::Draw(sf::RenderWindow& window) {
    return;
}