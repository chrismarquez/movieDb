//
// Created by christopher on 12/06/20.
//

#ifndef MOVIEDB_IVIDEO_H
#define MOVIEDB_IVIDEO_H
#include <iostream>

using namespace std;

class IVideo {
public:
    virtual string getName() const = 0;
    virtual string getId() const = 0;
    virtual string getDuration() const = 0;
    virtual string getGenre() const = 0;
    virtual double getScore() const = 0;
};

#endif //MOVIEDB_IVIDEO_H
