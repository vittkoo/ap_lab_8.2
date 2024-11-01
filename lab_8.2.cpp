#include <iostream>
#include <string>

using namespace std;

size_t CountAInLastWord(const string s)
{
    size_t count = 0;
    size_t lastSpace = s.rfind(' '); // знайти останній пробіл

    // витягти останнє слово з рядка
    string lastWord = s.substr(lastSpace + 1);

    // підрахунок літер 'a'
    for (size_t i = 0; i < lastWord.length(); i++)
        if (lastWord[i] == 'a' || lastWord[i] == 'A') // перевірка на 'a' або 'A'
            count++;

    return count;
}

int main()
{
    string str;

    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "Count of 'a' in the last word: " << CountAInLastWord(str) << endl;

    return 0;
}
