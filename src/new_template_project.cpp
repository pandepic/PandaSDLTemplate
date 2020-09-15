#include "new_template_project.h"

using namespace NewTemplateProject;

NewTemplateProjectGame::NewTemplateProjectGame()
{
    PandaSDL::Game::SettingsManager.Load("settings.xml");
    PandaSDL::Game::GameControlManager.Setup("Controls");
    
    _screenWidth = PandaSDL::Game::SettingsManager.GetSettingValueInt("Window", "Width");
    _screenHeight = PandaSDL::Game::SettingsManager.GetSettingValueInt("Window", "Height");
    
    Setup(this, "NewTemplateProject", PandaSDL::Rectangle(100, 100, _screenWidth, _screenHeight), "assets/xml/assets.xml", "Animations", PANDASDL_VSYNC_OFF, false);
    SetClearColor(PANDASDL_COLOR_WHITE);
}

NewTemplateProjectGame::~NewTemplateProjectGame()
{
}

void NewTemplateProjectGame::Load()
{
    EnableBlend();
    //EnableDepth();
    
    SetGamestate(&_mainMenuState);
}

void NewTemplateProjectGame::Update(const PandaSDL::Timer &gameTimer)
{
}

void NewTemplateProjectGame::Draw(const PandaSDL::Timer &gameTimer)
{
}
