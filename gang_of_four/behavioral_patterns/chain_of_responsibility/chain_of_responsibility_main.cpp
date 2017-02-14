#include "Application.h"
#include "Button.h"
#include "Dialog.h"

int main()
{
    // moved topics to enum class definition
    Application* application{new Application{Help_topic::application_topic}};
    Dialog* dialog{new Dialog{application, Help_topic::print_topic}};
    Button* button{new Button{dialog, Help_topic::paper_orientation_topic}};
    button->handle_help();
    return 0;
}
