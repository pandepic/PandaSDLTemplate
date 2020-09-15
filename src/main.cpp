#include "new_template_project.h"

int main(int argc, char *argv[])
{
    try
    {
        NewTemplateProject::NewTemplateProjectGame game;
        return game.Run();
    }
    catch (const std::exception& error)
    {
        std::cout << "Exit on exception: " << error.what();
        system("pause");
        return EXIT_FAILURE;
    }
}
