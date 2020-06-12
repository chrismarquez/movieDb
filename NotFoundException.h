//
// Created by christopher on 12/06/20.
//

#ifndef MOVIEDB_NOTFOUNDEXCEPTION_H
#define MOVIEDB_NOTFOUNDEXCEPTION_H


#include <bits/exception.h>
#include <string>

class NotFoundException: public std::exception {
private:
    std::string message;
public:
    explicit NotFoundException(const std::string& message);
    const char* what() const noexcept override;
};


#endif //MOVIEDB_NOTFOUNDEXCEPTION_H
