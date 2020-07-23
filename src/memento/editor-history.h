/*!
* @file		editor-history.h
* @date		2020-07-14
* @author	Santiago Rodriguez
* @version	1.0
* @brief	Editor History Class (Caretaker)
* @remark	Behavioral design pattern.
*/

#ifndef _DEF_MEMENTO_EDITOR_HISTORY_
#define _DEF_MEMENTO_EDITOR_HISTORY_

#include "editor-state.h"

namespace memento{

    class EditorHistory
    {
        std::vector<EditorState*> m_statesHistory;
        EditorState* prevEditorState;

    public:

        EditorHistory(): prevEditorState(NULL) {};
        ~EditorHistory();

        void backup(EditorState* state);
        EditorState* undo();

        void ShowHistory() const;

    };

} // namespace memento

#endif // _DEF_MEMENTO_EDITOR_HISTORY_