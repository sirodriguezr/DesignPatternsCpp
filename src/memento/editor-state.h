/*!
* @file		editor-state.h
* @date		2020-07-14
* @author	Santiago Rodriguez
* @version	1.0
* @brief	Editor State Class (Memento)
* @remark	Behavioral design pattern.
*/

#ifndef _DEF_MEMENTO_EDITOR_STATE_
#define _DEF_MEMENTO_EDITOR_STATE_

#include "../../library/library.h"

namespace memento{
    /*!
    * @class	EditorState
    * @brief	Editor State (Memento)
    * @remark	Design Patterns 2020.
    */
    class EditorState
    {
        friend class Editor;

        std::string m_Content;

        EditorState(){};
        EditorState(std::string strContent);

    public:

        ~EditorState(){};

        std::string getContent() const {return m_Content;} 

    }; //  class EditorState
} // namespace memento

#endif // _DEF_MEMENTO_EDITOR_STATE_