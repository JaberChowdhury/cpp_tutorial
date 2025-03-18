#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Person
{
    int index;
    int quality;
    Person(int a, int b) : index(a), quality(b) {}
};
vector<Person> sort_valid_person(vector<Person> persons)
{
    int n = persons.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (persons[j].quality > persons[j + 1].quality) // Swap if quality is greater
            {
                // Person temp = persons[j];
                // persons[j] = persons[j + 1];
                // persons[j + 1] = temp;
                swap(persons[j], persons[j + 1]);
            }
        }
    }
    return persons;
}

bool check_response_validity(int a, int b)
{
    if (a <= 10)
    {
        // cout << "word_count " << a << " time && quality " << a << " time-----true" << endl;
        return true;
    }
    else
    {
        // cout << "word_count " << a << " time && quality " << a << " time-----false" << endl;
        return false;
    }
}
int get_the_winner_index(vector<vector<int>> each_test)
{

    vector<Person> valid_person;

    for (int i = 0; i < each_test.size(); i++)
    {
        if (check_response_validity(each_test[i][0], each_test[i][1]))
        {

            valid_person.push_back(Person((i + 1), each_test[i][1]));
            // person.index = i + 1;
            // person.quality = each_test[i][1];
            // cout << "valid index is " << i + 1 << endl;
        }
    }
    vector<Person> sorted_valid_person = sort_valid_person(valid_person);
    int winner = sorted_valid_person.back().index;
    return winner;
}

// taking each test n time
vector<vector<int>> take_each_test()
{
    // storing each test
    vector<vector<int>> responses;
    int response_count;
    cin >> response_count;
    // taking n time input
    for (int i = 1; i <= response_count; i++)
    {
        vector<int> each_response;
        int a, b;
        cin >> a >> b;
        each_response.push_back(a);
        each_response.push_back(b);
        // each response have 2 value
        responses.push_back(each_response);
    }
    return responses;
}

int main()
{
    // store all users response
    vector<vector<vector<int>>> tests;
    int t;
    cin >> t;
    // take t time test
    for (int i = 1; i <= t; i++)
    {
        // taking each test
        vector<vector<int>> each_test = take_each_test();
        tests.push_back(each_test);
    }

    for (int i = 0; i < tests.size(); i++)
    {
        // cout << "test size " << tests.size() << tests[i].size() << endl;
        int winner = get_the_winner_index(tests[i]);
        // cout << "winner = " << winner << endl;
        cout << winner << endl;
    }
    return 0;
}
