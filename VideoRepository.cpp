//
// Created by christopher on 12/06/20.
//

#include "VideoRepository.h"
#include "NotFoundException.h"

VideoRepository::VideoRepository() {
    movies = vector<AbstractVideo>{};
    series = vector<AbstractVideo>{};
}

void VideoRepository::loadVideos(string file) {

}

IVideo& VideoRepository::getVideo(string id) const {
    throw NotFoundException("Implement this");
}

vector<IVideo> VideoRepository::getSeries() const {
    return vector<IVideo>();
}

vector<IVideo> VideoRepository::getAllVideo() const {
    return vector<IVideo>();
}

vector<IVideo> VideoRepository::getMovies() const {
    return vector<IVideo>();
}

vector<IVideo> VideoRepository::getSeriesByGenre(string genre) const {
    return vector<IVideo>();
}

vector<IVideo> VideoRepository::getMoviesByGenre(string genre) const {
    return vector<IVideo>();
}
