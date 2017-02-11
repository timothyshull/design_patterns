#include "Text_document.h"
#include "Image_proxy.h"

int main()
{
    Text_document* text = new Text_document();
    // ...
    text->insert(new Image_proxy("image_filename.jpg"));

    return 0;
}
