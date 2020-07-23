/*!
* @file		editor.cpp
* @date		2020-07-14
* @author	Santiago Rodriguez
* @version	1.0
* @brief	Editor Class (Originator)
* @remark	Behavioral design pattern.
*/

#include "editor.h"

using namespace std;

namespace memento {

    /*!
    * @fn		EditorState* Editor::createState()
    * @brief	create state (save)
    * @param	none
    * @return	EditorState*
    */
    EditorState* Editor::createState()
    {
        return new EditorState(m_Content);
    }

    /*!
    * @fn		void Editor::restoreState(EditorState* state)
    * @brief	restore state 
    * @param	EditorState* state
    */
    void Editor::restoreState(EditorState* state)
    {
        if(state == NULL)
        {
            std::cout << "Editor: History is empty" << "\n";
            return;
        }

        m_Content = state->getContent();
        std::cout << "Editor: My state has changed to: " << m_Content << "\n";
    }
} // namespace memento

