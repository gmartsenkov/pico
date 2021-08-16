#include <gtest/gtest.h>
#include <string>
#include <vector>
#include <regex>

using namespace std;

static const char *GIT_RESPONSE = "{\"data\":{\"search\":{\"edges\":[{\"node\":{\"title\":\"move section visibility logic to questionnaire entity\",\"author\":{\"name\":\"Georgi Martsenkov\"}}},{\"node\":{\"title\":\"Select box for settings\",\"author\":{\"name\":\"Krisztian Nagy\"}}},{\"node\":{\"title\":\"Features lint\",\"author\":{\"name\":\"Joan Mira\"}}}]}}}";

class GithubPR
{
    public: 
        string name;
        string author;

        vector<GithubPR> parse_github_response(std::string response) {
            vector<GithubPR> pull_requests;

            std::smatch sm;
            std::regex title_reg("")
            return pull_requests;
        }
};

TEST(GithubPR, parse_github_response) 
{
    EXPECT_EQ (0, 0);
}


int main(int argc, char **argv) 
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
