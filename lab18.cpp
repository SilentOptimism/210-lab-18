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


Movie* build();
void print(Movie*);
float average(Movie*);
void addTail(Movie*, Movie*);
void addHead(Movie*, Movie*, Movie*);

int main(int argc, char const *argv[]){

    Movie *head = build();
    print(head);

    return 0;
}

Movie* build(){
    char anotherReview = 'y';
    int headTail = 0;

    Movie* head = nullptr;
    Movie* current = nullptr;

    cout << "Which linked list method should we use?" << endl;
    cout << "\t[1] New nodes are added at the head of the linked list" << endl;
    cout << "\t[2] New nodes are added at the tail of the linked list" << endl;
    cin >> headTail;

    // Check's if the user want's to continue
    while(tolower(anotherReview) != 'n'){
        int rating = 0;
        string comments;

        // Gets the review rating and checks if its in range
        cout << "Enter review rating 0-5: ";
        cin >> rating;
        while (rating > 5 || rating < 0){
            cout << "Review must be between 0-5";
            cout << "Enter review rating 0-5: ";
            cin >> rating;
        }
        
        // Stops getline from grabing the \n
        cin.ignore(1000, '\n');

        // Gets users comments
        cout << "Enter review coments: ";
        getline(cin, comments);

        Movie *temp = new Movie();

        temp->comments = comments;
        temp->rating = rating;
        temp->next = nullptr;

        if(headTail == 1){
            void addHead(Movie* head, Movie* current, Movie* temp);
        }else{
            void addTail(Movie* head, Movie* temp);
        }

        cout << "Enter another input? Y/N: ";
        cin >> anotherReview;
    }
    return head;
}

void addHead(Movie* head, Movie* current, Movie* temp){
    // Checks if its the first node
    if(!head){
        head = temp;
        current = head;
    }else{
        current->next = temp;
        current = current->next;
    }
}

void addTail(Movie* head, Movie* temp){
    temp->next = head;
    head = temp;
}

void print(Movie* head){
    float ave = average(head);
    int count = 1;

    while(head){
        cout << "\t> Review #" << count << ": " << head->rating  << ": " << head->comments << endl;
        head = head->next;
    }
    cout << "\t> Average: " << ave << endl;
}

float average(Movie* head){
    float sum = 0;
    int count = 0;

    while(head){
        cout << "success" << endl;
        sum += head->rating;
        head = head->next;
        count++;
    }

    return sum/count;
}

//Returns Movie at given index

