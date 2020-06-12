//
// Created by christopher on 12/06/20.
//

#include "VideoRepository.h"

VideoRepository::VideoRepository() {
    movies = vector<Video>{};
    series = vector<Video>{};
}

void VideoRepository::addMovie(Video&& movie) {
    this->movies.push_back(movie);
}

void VideoRepository::addSeries(Video&& series) {
    this->series.push_back(series);
}

void VideoRepository::getAllVideo() const {

}

void VideoRepository::getSeries(string &&id) const {

}

void VideoRepository::getSeriesByGenre(string&& genre) const {

}

void VideoRepository::getMovies() const {

}

void VideoRepository::getMoviesByGenre(string&& genre) const {

}
