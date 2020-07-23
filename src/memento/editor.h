/*!
* @file		editor.h
* @date		2020-07-14
* @author	Santiago Rodriguez
* @version	1.0
* @brief	Editor Class
* @remark	Behavioral design pattern.
*/

#ifndef _DEF_MEMENTO_EDITOR_
#define _DEF_MEMENTO_EDITOR_

#include "editor-state.h"

namespace memento {

    /*!
    * @class	Editor
    * @brief	Editor (Originator)
    * @remark	Design Patterns 2020.
    */
    class Editor{

    public:
        
        //
        Editor() {}
        ~Editor() {}

    private:

        //
        std::string m_Content; 

    public:

        std::string getContent(){return m_Content;}

        void setContent(std::string strContent){m_Content += strContent;}

        EditorState* createState();

        void restoreState(EditorState* state);

    }; // class Editor

} // namespace memento

#endif // _DEF_MEMENTO_EDITOR_
