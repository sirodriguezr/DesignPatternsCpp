/*!
* @file		memento-demo.cpp
* @date		2020-07-22
* @author	Santiago Rodriguez
* @version	1.0
* @brief	Memento demo
* @remark	Behavioral design pattern.
*/

#include "memento-demo.h"

namespace memento{

    /*!
    * @fn		void MementoDemo::MementoDemo()
    * @brief	Constructor
    */
    MementoDemo::MementoDemo()
    {
        resetDemo();
    }

    /*!
    * @fn		void MementoDemo::~MementoDemo()
    * @brief	Destructor
    */
    MementoDemo::~MementoDemo()
    {
        delete m_editor;
        delete m_history;

        resetDemo();
    }
    
    /*!
    * @fn		void MementoDemo::initMementoDemo()
    * @brief	Initialize demo
    * @param	none
    */
    void MementoDemo::initMementoDemo()
    {
        // Originator
        m_editor = new Editor();

        // Caretaker
        m_history = new EditorHistory(); 


        m_editor->setContent("Memento ");
        m_history->backup(m_editor->createState());

        m_history->ShowHistory();

        m_editor->setContent("Demo ");
        m_history->backup(m_editor->createState());

        m_history->ShowHistory();

        m_editor->setContent("Cpp.");

        std::cout << "Editor Content: " << m_editor->getContent() << "\n"; 

        m_editor->restoreState(m_history->undo());

        m_history->ShowHistory();

        m_editor->restoreState(m_history->undo());
        m_editor->restoreState(m_history->undo());
    }

    /*!
    * @fn		void MementoDemo::resetDemo()
    * @brief	reset memento demo
    * @param	none
    */
    void MementoDemo::resetDemo()
    {
        if (m_editor != NULL){m_editor = NULL;}
        if (m_history != NULL){m_history = NULL;}
    }

} // namespace memento

