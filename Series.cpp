//
// Created by christopher on 12/06/20.
//

#include "Series.h"

#include <utility>

Series::Series(string id, string name, int duration, string genre)
: AbstractVideo(std::move(id), std::move(name), duration, std::move(genre)) {

}

double Series::getScore() const {
    auto score = 0.0;
    auto episodeCount = 0;
    for (auto&& season : episodes) {
        for (auto&& episode : season) {
            score += episode.getScore();
            episodeCount++;
        }
    }
    return score / episodeCount;
}

void Series::addSeason(const vector<IVideo>& season) {
    episodes.push_back(season);
}

void Series::addEpisode(IVideo &episode) {
    auto lastSeason = episodes[episodes.size() - 1];
    lastSeason.push_back(episode);
}
