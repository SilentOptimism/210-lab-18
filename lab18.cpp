#include <iostream>
#include <cctype>

using namespace std;

struct Movie
{
    float rating;
    string comments;
    Movie *next;

};


int main(int argc, char const *argv[]){
    cout << "Which linked list method should we use?" << endl;
    cout << "\t[1] New nodes are added at the head of the linked list" << endl;
    cout << "\t[2] New nodes are added at the tail of the linked list" << endl;

    return 0;
}

Movie* buildMovie(){
    char AnotherReview = 'y';

    Movie* head = nullptr;

    // Check's if the user want's to continue
    while(tolower(AnotherReview) != 'n'){
        string tempInt;

        cout << "Enter review rating 0-5: ";
        cin >> tempInt;

    }

    

}

void addHead(Movie* head){
    while(head){
        head = head->next;
    }
}

//Returns Movie at given index

