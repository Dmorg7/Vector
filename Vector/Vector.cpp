#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    vector<int> ss;
    vector<int>::iterator it;
    int choice, item;
    while (1)
    {
        cout << "\n---------------------" << endl;
        cout << "Vector Implementation" << endl;
        cout << "\n---------------------" << endl;
        cout << "1.Insert an Element into the Vector" << endl;
        cout << "2.Delete Last Element of the Vector" << endl;
        cout << "3.Size of the Vector" << endl;
        cout << "4.Display by Index" << endl;
        cout << "5.Dislplay by Iterator" << endl;
        cout << "6.Clear the Vector" << endl;
        cout << "7.Exit" << endl;
        cout << "Please Enter your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value that you want Inserted: ";
            cin >> item;
            ss.push_back(item);
            break;
        case 2:
            cout << "Deleted Previous Element Inserted" << endl;
            ss.pop_back();
            break;
        case 3:
            cout << "Size of the Vector: ";
            cout << ss.size() << endl;
            break;
        case 4:
            cout << "Display the Vector by Index: ";
            for (int i = 0; i < ss.size(); i++)
            {
                cout << ss[i] << " ";
            }
            cout << endl;
            break;
        case 5:
            cout << "Display the Vector by an Iterator: ";
            for (it = ss.begin(); it != ss.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            break;
        case 6:
            ss.clear();
            cout << "Vector has been Cleared" << endl;
            break;
        case 7:
            exit(1);
            break;
        default:
            cout << "Wrong Choice Entered Please Try Again" << endl;
        }
    }
    return 0;
}
