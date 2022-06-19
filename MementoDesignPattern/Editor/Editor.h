#ifndef _EDITOR_H
#define _EDITOR_H

#include "StateManagement/EditorState.h"
#include "StateManagement/StateManager.h"

#include <string>

class Editor
{
    std::string m_Content;
    StateManager m_History;

    inline void CreateNewState();
public:
    void SetContent(const std::string content);
    inline std::string GetContent() const { return m_Content; }

    void Undo();
};

#endif // _EDITOR_H