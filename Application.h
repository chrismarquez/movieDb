//
// Created by christopher on 12/06/20.
//

#ifndef MOVIEDB_APPLICATION_H
#define MOVIEDB_APPLICATION_H

#include <iostream>
#include "VideoRepository.h"

class Application {
private:
    VideoRepository videoRepository;
    static void printMenu();
public:
    explicit Application();
    void run();
};

#endif //MOVIEDB_APPLICATION_H
