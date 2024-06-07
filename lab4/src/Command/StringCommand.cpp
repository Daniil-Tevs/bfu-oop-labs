#include "StringCommand.h"

void StringCommand::execute(){
    std::cout << "Print: " << m_data << std::endl;
}

void StringCommand::undo(){
    std::cout << "Undo: " << m_data << std::endl;
}