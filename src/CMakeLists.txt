set(LIBRARY_NAME memento)

set(LIB_SOURCES
    memento/editor.cpp
    memento/editor.h
    memento/editor-state.cpp
    memento/editor-state.h
    memento/editor-history.cpp
    memento/editor-history.h
    memento/memento-demo.cpp
    memento/memento-demo.h
)

add_library(
    ${LIBRARY_NAME} STATIC
    ${LIB_SOURCES}
)

include_directories(${LIBRARY_NAME})

target_include_directories(MyLib PUBLIC ../library)

