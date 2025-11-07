#include <iostream>
using namespace std;

class shopingstore
{
private:
    int code[50];
    int price[50];
    int count;

public:
    shopingstore()
    {
        count = 0;
    }
    void additem()
    {
        cout << "Enter code ";
        cin >> code[count];
        cout << "Enter price ";
        cin >> price[count];
        count++;
    }

    void deleteitem()
    {
        int c;
        cout << "Write code to delete ";
        cin >> c;
        int found = 0;
        for (int i = 0; i < count; i++)
        {
            if (code[i] == c)
            {
                for (int j = i; j < count - 1; j++)
                {
                    code[j] = code[j + 1];
                    price[j] = price[j + 1];
                }
                count--;
                cout << "Delete Item Successfully ....";
                found = 1;
                break;
            }
        }
        if (!found)
        {
            cout << "Item Not found ....";
        }
    }
    void displayitem()
    {
        if (count == 0)
        {
            cout << "Shopping list is empty!\n";
            return;
        }
        cout << "\n--- Shopping List ---\n";
        cout << "Code\tPrice\n";
        for (int i = 0; i < count; i++)
        {
            cout << code[i] << "\t" << price[i] << endl;
        }
    }
    void gettotal()
    {
        int total = 0;
        for (int i = 0; i < count; i++)
        {
            total += price[i];
        }
        cout << "Total price of Items is " << total;
    }
};

int main()
{

    shopingstore s;
    int choice;
    do
    {
        cout << "\n===== Departmental Store Menu =====\n";
        cout << "1. Add Item\n";
        cout << "2. Delete Item\n";
        cout << "3. Display Items\n";
        cout << "Enter your choice";
        cin >> choice;
        switch (choice)
        {
        case 1:
            s.additem();
            break;
        case 2:
            s.deleteitem();
            break;
        case 3:
            s.displayitem();
            break;
        case 4:
            s.gettotal();
            break;
        case 5:
            cout << "Exiting program";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
            break;
        }

    } while (choice != 5);

    return 0;
}