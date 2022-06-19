#include "Editor/Editor.h"

#include <iostream>

int main()
{
    Editor editor{};
    std::string content{"Hello, world!"};
    editor.SetContent(content);
    content = "Goodbye, world!";
    editor.SetContent(content);
    editor.Undo();
    
    std::cout << editor.GetContent() << std::endl;

    editor.SetContent(content);
    std::cout << editor.GetContent() << std::endl;

    return 0;
}