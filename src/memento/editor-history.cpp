/*!
* @file		editor-history.cpp
* @date		2020-07-14
* @author	Santiago Rodriguez
* @version	1.0
* @brief	Editor History Class (Caretaker)
* @remark	Behavioral design pattern.
*/

#include "editor-history.h"

namespace memento{

    /*!
    * @fn		void EditorHistory::~EditorHistory()
    * @brief	Constructor
    */
    EditorHistory::~EditorHistory()
    {
        for (EditorState* element : m_statesHistory) {
            delete element;
        }

        m_statesHistory.clear();

        if (NULL != prevEditorState) 
        {
            delete prevEditorState;
        }

    }

    /*!
    * @fn		void EditorHistory::backup(EditorState* state)
    * @brief	backup state 
    * @param	EditorState* state
    */
    void EditorHistory::backup(EditorState* state)
    {
        m_statesHistory.push_back(state);
    }

     /*!
    * @fn		EditorState* EditorHistory::undo()
    * @brief	undo to previous state 
    * @param	none
    * @return	EditorState* previous state, NULL if history is empty
    */
    EditorState* EditorHistory::undo()
    {
        if (!m_statesHistory.size()) {
            return NULL;
        }
        
        prevEditorState =  m_statesHistory.back();
        m_statesHistory.pop_back();

        return prevEditorState;   
        
    }

    /*!
    * @fn		void EditorHistory::ShowHistory() const 
    * @brief	Show history
    * @param	none
    */
    void EditorHistory::ShowHistory() const 
    {
        std::cout << "Editor History: List of editor states:\n";

        for (EditorState* editorState : m_statesHistory) 
        {
            std::cout << editorState->getContent() << "\n";
        }
    }
} // namespace memento

