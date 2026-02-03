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

// TODO: Task 1
// vote_count takes a reference to an `ElectionResult` as an argument and will
// return the number of votes in the `ElectionResult.

    int vote_count(ElectionResult& election_result)
    {
        return election_result.votes;
    };


// TODO: Task 2
// increment_vote_count takes a reference to an `ElectionResult` as an argument
// and a number of votes (int), and will increment the `ElectionResult` by that
// number of votes.
    int increment_vote_count(ElectionResult& election_result, int votes)
    {
        election_result.votes +=votes;
        return election_result.votes;
    };

// determine_result receives the reference to a final_count and returns a
// reference to the `ElectionResult` of the new president. It also changes the
// name of the winner by prefixing it with "President". The final count is given
// in the form of a `reference` to `std::vector<ElectionResult>`, a vector with
// `ElectionResults` of all the participating candidates.

    ElectionResult& determine_result(std::vector<ElectionResult>& final_count)
    {
        int max_votes = 0;
        int idx{0};
        for (int i = 0; i < final_count.size(); i++)
        {
            if (final_count.at(i).votes > max_votes)
            {
                max_votes = final_count.at(i).votes;
                idx = i;
            }
        }
        std::string winner = "President " + final_count.at(idx).name;
        final_count.at(idx).name = winner;
        return final_count.at(idx);
    };
}