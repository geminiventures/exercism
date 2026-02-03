#include <string>
#include <vector>

namespace election {

    // The election result struct is already created for you:

    struct ElectionResult {
        // Name of the candidate
        std::string name{};
        // Number of votes the candidate has
        int votes{};
    };


    int vote_count(ElectionResult& candidate) {
        return candidate.votes;
    }


    void increment_vote_count(ElectionResult& candidate, int new_votes){
        candidate.votes += new_votes;
    }


    ElectionResult& determine_result(std::vector<ElectionResult>& candidates) {
        int idx = 0;
        for (int i = 0; i < candidates.size(); i++) {
            if (candidates[i].votes > candidates[idx].votes) idx = i;
        }
        candidates[idx].name = "President " + candidates[idx].name;
        return candidates[idx];
    }

}  // namespace election