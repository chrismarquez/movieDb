//
// Created by christopher on 12/06/20.
//

#include "NotFoundException.h"

NotFoundException::NotFoundException(const std::string& message) : message(message) {}

const char* NotFoundException::what() const noexcept {
    return message.c_str();
}