#ifndef _STATE_MANAGER_H
#define _STATE_MANAGER_H

#include "EditorState.h"
#include <vector>

class StateManager
{
    std::vector<EditorState*> states;

public:
    void push(EditorState* state);
    EditorState pop();
};

#endif // _STATE_MANAGER_H