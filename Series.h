//
// Created by christopher on 12/06/20.
//

#ifndef MOVIEDB_SERIES_H
#define MOVIEDB_SERIES_H


#include <vector>
#include "Video.h"

class Series : public Video {
private:
    vector<vector<Video>> episodes;
public:
    explicit Series(string id, string name, int duration, string genre);
    double getScore() const override ;
};


#endif //MOVIEDB_SERIES_H
