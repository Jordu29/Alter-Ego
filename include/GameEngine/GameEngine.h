#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
using namespace std;

#include "GameStateConstant.h"
class GameState;

class GameEngine
{
    public:
        void init(const sf::String title, int width=640, int height=480);
        void cleanup();

        void changeState(GameState *state);
        void changeState(int state);
        void pushState(GameState *state);
        void popState();

        void handleEvents();
        void update();
        void draw();

        bool isRunning() { return m_running; }
        void quit() { m_running = false; }

        sf::RenderWindow m_window;                          //  SFML window, main screen of game

    private:
        vector<GameState*> states;                          //  Stack of game states
        bool m_running;                                     //  boolean which say if the game is running or not
};

#endif // GAMEENGINE_H
