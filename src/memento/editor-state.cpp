/*!
* @file		editor-state.h
* @date		2020-07-14
* @author	Santiago Rodriguez
* @version	1.0
* @brief	Editor State Class (Memento)
* @remark	Behavioral design pattern.
*/

#include "editor-state.h"

namespace memento {

    /*!
    * @fn		void EditorState::EditorState()
    * @brief	Constructor
    */
    EditorState::EditorState(std::string strContent): m_Content(strContent)
    {
        // 
    }

} // namespace memento


