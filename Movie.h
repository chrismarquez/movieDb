//
// Created by christopher on 12/06/20.
//

#ifndef MOVIEDB_MOVIE_H
#define MOVIEDB_MOVIE_H


#include "AbstractVideo.h"

class Movie : public AbstractVideo {
private:
    double score;
public:
    explicit Movie(string id, string name, int duration, string genre, double score);
    double getScore() const override;
};


#endif //MOVIEDB_MOVIE_H
