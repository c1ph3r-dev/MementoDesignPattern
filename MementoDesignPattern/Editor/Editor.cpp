#include "Editor.h"

void Editor::CreateNewState()
{
    m_History.push(new EditorState{m_Content});
}

void Editor::SetContent(const std::string content)
{ 
    CreateNewState();
    m_Content = content;
}

void Editor::Undo()
{
    auto state = m_History.pop();
    m_Content = state.GetContent();
}