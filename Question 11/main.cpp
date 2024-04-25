// 11. WAP that prints a table indicating the number of occurrences of each alphabet in the text entered as command-line arguments.

#include <iostream>
#include <string>
using namespace std;

class AlphabetCounter {
    int counter_arr[26]; 

    public:
        AlphabetCounter() {
            // initializing each element with 0
            for(int i = 0; i < 26; i++) 
                counter_arr[i] = 0;
        }

        // logic: index acts as the alphabet(like a is 0, b is 1) and then it is mapped with how many times that alphabet occurs
        void count(string str) {
            for(int i = 0; str[i] != '\0'; i++) 
                counter_arr[ tolower(str[i]) - 97 ]++;
        }

        void print_count() {
            for(int i = 0; i < 26; i++)
                cout << (char)(i+97) << " -> " << counter_arr[i] << " times"<< endl;
        }
};

int main(int argc, char const *argv[])
{
    // copying the command-line argument into str
    string str = "";
    for(int i = 1; i < argc; i++)
        str += argv[i];

    AlphabetCounter obj;

    obj.count(str);
    obj.print_count();
    
    return 0;
}
