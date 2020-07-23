/*!
* @file		memento-demo.cpp
* @date		2020-07-22
* @author	Santiago Rodriguez
* @version	1.0
* @brief	Memento demo
* @remark	Behavioral design pattern.
*/

#ifndef _DEF_MEMENTO_DEMO_
#define _DEF_MEMENTO_DEMO_

#include "editor.h"
#include "editor-history.h"

namespace memento{

    class MementoDemo
    {
        Editor* m_editor;
        EditorHistory* m_history;

    public:

        MementoDemo();
        ~MementoDemo();

        void initMementoDemo();
        void resetDemo();

    };

} // namespace memento

#endif // _DEF_MEMENTO_DEMO_