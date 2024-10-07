#include <iostream>
#include <string>
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
        int rating = 0;
        string comments;

        cout << "Enter review rating 0-5: ";
        cin >> rating;

        if(rating > 5 || rating < 0){
            cout << "Invalid Inport" << endl;
            break;
        }

        cin.ignore(1000, '\n');

        cout << "Enter review coments: ";
        getline(cin, comments);




    }

    return head;

    

}

void addTail(Movie* head){
    while(head){
        head = head->next;
    }
}
void addHead(Movie* head){
    while(head){
        head = head->next;
    }
}

float average(Movie* head){
    float sum = 0;
    int count = 0;

    while(head){
        sum += head->rating;
        head = head->next;
        count++;
    }

    return sum/count;

}

//Returns Movie at given index

