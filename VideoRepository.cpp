//
// Created by christopher on 12/06/20.
//

#include "VideoRepository.h"
#include "NotFoundException.h"

VideoRepository::VideoRepository() {
    movies = vector<IVideo>{};
    series = vector<IVideo>{};
}

void VideoRepository::loadVideos(string file) {

}

IVideo& VideoRepository::getVideo(string id) const {
    throw NotFoundException("Implement this");
}

vector<IVideo> VideoRepository::getSeries() const {
    return series;
}

vector<IVideo> VideoRepository::getAllVideo() const {
    auto result = vector<IVideo>{};
    result.insert(result.end(), movies.begin(), movies.end());
    result.insert(result.end(), series.begin(), series.end());
    return result;
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
