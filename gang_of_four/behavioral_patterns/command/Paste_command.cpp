#include "Paste_command.h"
#include "Document.h"

Paste_command::Paste_command(Document* doc) : _document{doc} {}

void Paste_command::execute()
{
    _document->paste();
}
