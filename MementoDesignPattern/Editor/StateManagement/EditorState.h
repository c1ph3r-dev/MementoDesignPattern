#ifndef _EDITOR_STATE_H
#define _EDITOR_STATE_H

#include <string>

class EditorState
{
    std::string content;
public:
    inline std::string GetContent() const { return content; }
    EditorState(const std::string content) : content(content) {}
};

#endif // _EDITOR_STATE_H