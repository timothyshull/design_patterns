#include"Open_command.h"
#include"Application.h"
#include"Document.h"

Open_command::Open_command(Application* a)
{
    _application = a;
}

void Open_command::execute()
{
    const char* name = ask_user();

    if (name != 0) {
        Document* document = new Document(name);
        _application->add(document);
        document->open();
    }
}

const char* Open_command::ask_user()
{
    return "/user/input/file/name.txt";
}
