#include <iostream>
#include <cstdlib>
using namespace std;

const int m = 50; // maximum no of items

class items
{
private:
    int itemCode[m];
    float itemPrice[m];
    int count;

public:
    items()
    // constructor to initialise count
    {
        count = 0;
    }

    void getItem()
    {
        cout << "Enter the item code: ";
        cin >> itemCode[count]; // read item code from user
        cout << "Enter item cost: ";
        cin >> itemPrice[count]; // read item price for the code
        count++;                 // increment
    }

    void displaySum()
    // function to calculate the total cost of the items and displays cost
    {
        float sum = 0;
        for (int i = 0; i < count; i++)
        {
            sum += itemPrice[i];
        }
        cout << "Total Cost: " << sum << endl;
    }

    void remove()
    // finds the item and removes it
    {
        int a;
        cout << "Enter item code: ";
        cin >> a;
        for (int i = 0; i < count; i++)
        {
            if (itemCode[i] == a)
            {
                for (int j = i; j < count - 1; j++)
                {
                    itemCode[j] = itemCode[j + 1];
                    itemPrice[j] = itemPrice[j + 1];
                }
                count--; // decrease and reflect the removal of an item
                break;
            }
        }
    }

    void displayItems()
    // displays items and the prices
    {
        cout << "\n Code & Price";
        for (int i = 0; i < count; i++)
        {
            cout << "\n"
                 << itemCode[i] << " Price: " << itemPrice[i];
        }
        cout << "\n";
    }
};

int main()
{
    items order;
    int x;
    do
    {
        // cout << "\n you can do the following:\n";
        // cout << "Enter Appropriate number";
        cout << "\n1 : Add an item";
        cout << "\n2 : Display all items";
        cout << "\n3 : Delete an item";
        cout << "\n4 : Display Total Value";
        cout << "\n5 : Quit";
        cout << "\nChoice : ";
        cin >> x;

        switch (x)
        {
        case 1:
            order.getItem(); // adds items
            break;
        case 2:
            order.displayItems(); // displays items
            break;
        case 3:
            order.remove(); // removes item
            break;
        case 4:
            order.displaySum(); // displays the total summ and amount
            break;
        case 5:
            exit(0);
        default:
            cout << "Invalid Option Selected";
        }
    } while (x != 5); // continues the loop till the users selected to exit.
    return 0;
}
