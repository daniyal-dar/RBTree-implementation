#include <iostream>
#include "RBT.h"

using namespace std;

int main() 
{
    RBT tree;
    int choice;
    int value;

    do {
        cout << endl << "MENU" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Search" << endl;
        cout << "4. Inorder Traversal" << endl;
        cout << "5. Preorder Traversal" << endl;
        cout << "6. Postorder Traversal" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) 
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        switch (choice) 
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            if (cin.fail()) 
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid value." << endl;
            }
            else 
            {
                tree.insert(value);
                cout << value << " inserted successfully." << endl;
            }
            break;
        case 2:
            cout << "Enter value to delete: ";
            cin >> value;
            if (cin.fail()) 
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid value." << endl;
            }
            else 
            {
                if (tree.search(value)) 
                {
                    tree.deleteValue(value);
                    cout << value << " deleted successfully." << endl;
                }
                else 
                {
                    cout << value << " not found in tree." << endl;
                }
            }
            break;
        case 3:
            cout << "Enter value to search: ";
            cin >> value;
            if (cin.fail()) 
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid value." << endl;
            }
            else 
            {
                if (tree.search(value)) 
                {
                    cout << value << " found in tree." << endl;
                }
                else 
                {
                    cout << value << " not found in tree." << endl;
                }
            }
            break;
        case 4:
            cout << "Inorder Traversal: ";
            tree.displayInorder();
            break;
        case 5:
            cout << "Preorder Traversal: ";
            tree.displayPreorder();
            break;
        case 6:
            cout << "Postorder Traversal: ";
            tree.displayPostorder();
            break;
        case 0:
            cout << "Program ended." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}