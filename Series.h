//
// Created by christopher on 12/06/20.
//

#ifndef MOVIEDB_SERIES_H
#define MOVIEDB_SERIES_H


#include <vector>
#include "AbstractVideo.h"

class Series : public AbstractVideo {
private:
    vector<vector<IVideo>> episodes;
public:
    explicit Series(string id, string name, int duration, string genre);
    double getScore() const override;
    void addSeason(const vector<IVideo>& season);
    void addEpisode(IVideo& episode);
};


#endif //MOVIEDB_SERIES_H
