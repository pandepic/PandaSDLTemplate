#ifndef __newtemplateproject_mainmenustate_h__
#define __newtemplateproject_mainmenustate_h__

#include "../panda_sdl/src/general/gamestate.h"

namespace NewTemplateProject
{
    class MainMenuState : public PandaSDL::Gamestate, public PandaSDL::HandleGameControls
    {
        public:
            MainMenuState();
            ~MainMenuState();
            
            virtual void Setup(PandaSDL::Game* game) override;
            virtual void Close() override;
            
            virtual void Update(const PandaSDL::Timer &gameTimer) override;
            virtual void Draw(const PandaSDL::Timer &gameTimer) override;
            
            virtual void HandleGameControl(
                const std::string                       &controlName,
                const PandaSDL::eGameControlState       &state,
                const PandaSDL::KeyboardState           &keyboardState,
                const PandaSDL::MouseState              &mouseState,
                const PandaSDL::Timer                   &gameTimer) override;
            
        protected:
    };
}

#endif