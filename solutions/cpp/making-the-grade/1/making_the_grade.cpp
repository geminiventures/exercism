#include <array>
#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <math.h>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
     // TODO: Implement round_down_scores
    std::vector<int> round_down_scores;
    for (int i = 0; i < student_scores.size(); i++)
    {
        round_down_scores.push_back(student_scores[i]);
    }
    return round_down_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int counter{0};
    for (int i = 0; i < student_scores.size(); i++)
    {
        if (student_scores[i] <= 40)
        {
            counter++;
        }
    }
    return counter;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    std::array<int, 4> grades;
    int range = highest_score - 40;
    int interval = range / 4.0;
    int start = 41;
    for (int i = 0; i < grades.size(); i++)
    {
        grades[i] = start;
        start += interval;
    }

    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> student_ranking;
    for (int i = 0; i < student_scores.size(); i++)
    {
    //<rank>. <student name>: <student score>.
        student_ranking.push_back(std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));

    }
    return student_ranking;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    for (int i = 0; i < student_scores.size(); i++)
    {
        if (student_scores[i] == 100)
        {
            return student_names[i];
        }
    }
    return "";
}
