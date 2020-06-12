//
// Created by christopher on 12/06/20.
//

#ifndef MOVIEDB_VIDEOREPOSITORY_H
#define MOVIEDB_VIDEOREPOSITORY_H


#include "AbstractVideo.h"
#include "IVideo.h"
#include <vector>

class VideoRepository {
private:
    vector<AbstractVideo> movies;
    vector<AbstractVideo> series;
public:
    explicit VideoRepository();
    void loadVideos(string file);
    vector<IVideo> getAllVideo() const;
    IVideo& getVideo(string id) const;
    vector<IVideo> getSeries() const;
    vector<IVideo> getMovies() const;
    vector<IVideo> getSeriesByGenre(string genre) const;
    vector<IVideo> getMoviesByGenre(string genre) const;
};


#endif //MOVIEDB_VIDEOREPOSITORY_H
