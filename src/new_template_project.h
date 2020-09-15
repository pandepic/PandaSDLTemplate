#ifndef __swords_and_sorcery_h__
#define __swords_and_sorcery_h__

#include "panda_sdl/src/general/game.h"
#include "panda_sdl/src/general/timer.h"

#include "gamestates/main_menu_state.h"

namespace NewTemplateProject
{
    class NewTemplateProjectGame : public PandaSDL::Game
    {
        public:
            NewTemplateProjectGame();
            ~NewTemplateProjectGame();

            virtual void Load() override;
            virtual void Update(const PandaSDL::Timer &gameTimer) override;
            virtual void Draw(const PandaSDL::Timer &gameTimer) override;

        protected:
            int _screenWidth, _screenHeight;
            
            // game states
            MainMenuState _mainMenuState;
    };
}

#endif
