#include "StateManager.h"

void StateManager::push(EditorState* state)
{
    states.push_back(state);
}

EditorState StateManager::pop()
{
    EditorState state = *states.back();
    delete states.back();
    states.pop_back();
    return state;
}