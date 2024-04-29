#include "utils.h"
using namespace std;

int main(void)
{

    vector<string> words = parse_file("./data/words.txt");

    while (1)
    {
        string w;
        int n;

        cout << "Enter a misspelled word > ";
        cin >> w;
        cout << "Enter the number of suggestions > ";
        cin >> n;
        vector<pair<int, string>> suggestions;
        for (auto word : words)
        {
            int d = minDistance(w, word);
            suggestions.push_back({d, word});
        }
        sort(suggestions.begin(), suggestions.end());

        print_suggestions(suggestions, n);
    }

    return 0;
}
