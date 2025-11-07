#include <iostream>
using namespace std;

class media
{
protected:
    string title;
    string author_name;
    bool isissued;

public:
    media(string t = "", string author_artist_name = "")
    {
        title = t;
        author_name = author_artist_name;
        isissued = false;
    }
    virtual void addItem() = 0;
    virtual void issue() = 0;
    virtual void deposite() = 0;
    virtual void display() = 0;

    virtual ~media() {};
};

class book : public media
{
private:
    int pages;

public:
    book(string title = "", string author_name = "", int pages = 0) : media(title, author_name)
    {
        this->pages = pages;
    }
    void addItem() override
    {
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Author Name: ";
        cin >> author_name;
        cout << "Enter No. of Pages: ";
        cin >> pages;
        isissued = false;
    }

    void issue() override
    {
        if (!isissued)
        {
            cout << "Book issued successfully!\n";
            isissued = true;
        }
        else
        {
            cout << "Book already issued !\n";
        }
    }

    void deposite() override
    {
        if (isissued)
        {
            cout << "Book deposited successfully!\n";
            isissued = false;
        }
        else
        {
            cout << "Book was not issued!\n";
        }
    }

    void display() override
    {
        cout << "\nBook Title: " << title
             << "\nAuthor: " << author_name
             << "\nPages: " << pages
             << "\nIssued: " << (isissued ? "Yes" : "No") << endl;
    }
};

class tape : public media
{
private:
    float playtime;

public:
    tape(string title = "", string author_name = "", float playtime = 0.0) : media(title, author_name)
    {
        this->playtime = playtime;
    }
    void addItem() override
    {
        cout << "Enter Tape Title: ";
        cin >> title;
        cout << "Enter Artist Name: ";
        cin >> author_name;
        cout << "Enter Play Time (in mins): ";
        cin >> playtime;
        isissued = false;
    }

    void issue() override
    {
        if (!isissued)
        {
            cout << "Tape issued successfully!\n";
            isissued = true;
        }
        else
        {
            cout << "Tape already issued!\n";
        }
    }

    void deposite() override
    {
        if (isissued)
        {
            cout << "Tape deposited successfully!\n";
            isissued = false;
        }
        else
        {
            cout << "Tape was not issued!\n";
        }
    }

    void display() override
    {
        cout << "\nTape Title: " << title
             << "\nArtist: " << author_name
             << "\nPlay Time: " << playtime << " mins"
             << "\nIssued: " << (isissued ? "Yes" : "No") << endl;
    }
};

int main()
{
    media *lib[10];
    int choice, count = 0;

    while (true)
    {
        cout << "\n--- Digital Library Menu ---\n";
        cout << "1. Add Book\n";
        cout << "2. Add Tape\n";
        cout << "3. Issue Item\n";
        cout << "4. Deposit Item\n";
        cout << "5. Display Items\n";
        cout << "6. Exit\n";
        cout << "Enter the choice:";
        cin >> choice;
        if (choice == 1)
        {
            lib[count] = new book();
            lib[count]->addItem();
            count++;
        }
        else if (choice == 2)
        {
            lib[count] = new tape();
            lib[count]->addItem();
            count++;
        }

        else if (choice == 3 || choice == 4 || choice == 5)
        {
            for (int i = 0; i < count; i++)
            {
                cout << "\nItem " << i + 1 << ":";
                lib[i]->display();
            }
            int index;
            cout << "\nEnter item number: ";
            cin >> index;
            index--;
              if (index >= 0 && index < count) {
                if (choice == 3)
                    lib[index]->issue();
                else if (choice == 4)
                    lib[index]->deposite();
                else
                    lib[index]->display();
            } else {
                cout << "Invalid index!\n";
            }
        }

        else if (choice == 6)
        {
            break;
        }

        else
        {
            cout << "Invalid choice:\n";
        }
    }

    return 0;
}