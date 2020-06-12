//
// Created by christopher on 12/06/20.
//

#ifndef MOVIEDB_VIDEOREPOSITORY_H
#define MOVIEDB_VIDEOREPOSITORY_H


#include "Video.h"
#include <vector>

class VideoRepository {
private:
    vector<Video> movies;
    vector<Video> series;
public:
    explicit VideoRepository();
    void addMovie(Video&& movie);
    void addSeries(Video&& series);
    void getAllVideo() const;
    void getSeries(string&& id) const;
    void getSeriesByGenre(string&& genre) const;
    void getMovies() const;
    void getMoviesByGenre(string&& genre) const ;
};


#endif //MOVIEDB_VIDEOREPOSITORY_H
