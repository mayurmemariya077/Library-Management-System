


#include <iostream>
#include <string>

using namespace std;

const int MAX_ITEMS = 100;

    //    Abstract Class

class LibraryItem
{

private:
    string title;
    string author;    
    string dueDate;

protected:
    bool issued;

public:

    LibraryItem()
    {

        title = "";
        author = "";
        dueDate = "";
        issued = false;

    }



    // Parameterized Constructor


    LibraryItem(string t, string a, string d)
    {
        title = t;
        author = a;
        dueDate = d;
        issued = false;

    }

    string getTitle() const
    {
        return title;

    }

    string getAuthor() const
    {
        return author;
    }

    string getDueDate() const
    {
        return dueDate;
    }

    void setTitle(string t)
    {
        title = t;
    }

    void setAuthor(string a)
    {
        author = a;
    }

    void setDueDate(string d)
    {
        dueDate = d;
    }


    // Virtual Functions



    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() const = 0;

    virtual ~LibraryItem() {}
};



        // Book Class 



class Book : public LibraryItem
{
private:
    string isbn;

public:
    Book(string t, string a, string d, string i)
        : LibraryItem(t, a, d)
    {
        if (i.length() != 13)
            throw "Invalid ISBN! ISBN must be 13 digits.";

        isbn = i;
    }

    void checkOut() override
    {
        if (!issued)
        {
            issued = true;
            cout << "\nBook Checked Out Successfully.\n";
        }
        else
        {
            cout << "\nBook is already issued.\n";
        }
    }

    void returnItem() override
    {
        if (issued)
        {
            issued = false;
            cout << "\nBook Returned Successfully.\n";
        }
        else
        {
            cout << "\nBook is already available.\n";
        }
    }

    void displayDetails() const override
    {
        cout << "\n           BOOK             \n";
        cout << "Title     : " << getTitle() << endl;
        cout << "Author    : " << getAuthor() << endl;
        cout << "Due Date  : " << getDueDate() << endl;
        cout << "ISBN      : " << isbn << endl;
        cout << "Status    : " << (issued ? "Issued" : "Available") << endl;
    }
};


            //  DVD Class



class DVD : public LibraryItem
{
private:
    int duration;

public:
    DVD(string t, string a, string d, int dur)
        : LibraryItem(t, a, d)
    {
        if (dur <= 0)
            throw "Invalid Duration.";

        duration = dur;
    }

    void checkOut() override
    {
        if (!issued)
        {
            issued = true;
            cout << "\nDVD Checked Out Successfully.\n";
        }
        else
        {
            cout << "\nDVD is already issued.\n";
        }
    }

    void returnItem() override
    {
        if (issued)
        {
            issued = false;
            cout << "\nDVD Returned Successfully.\n";
        }
        else
        {
            cout << "\nDVD is already available.\n";
        }
    }

    void displayDetails() const override
    {
        cout << "\n            DVD                \n";
        cout << "Title     : " << getTitle() << endl;
        cout << "Author    : " << getAuthor() << endl;
        cout << "Due Date  : " << getDueDate() << endl;
        cout << "Duration  : " << duration << " Minutes" << endl;
        cout << "Status    : " << (issued ? "Issued" : "Available") << endl;
    }
};



            //   Magazine Class 



class Magazine : public LibraryItem
{
private:
    int issueNumber;

public:
    Magazine(string t, string a, string d, int issue)
        : LibraryItem(t, a, d)
    {
        if (issue <= 0)
            throw "Invalid Issue Number.";

        issueNumber = issue;
    }

    void checkOut() override
    {
        if (!issued)
        {
            issued = true;
            cout << "\nMagazine Checked Out Successfully.\n";
        }
        else
        {
            cout << "\nMagazine is already issued.\n";
        }
    }

    void returnItem() override
    {
        if (issued)
        {
            issued = false;
            cout << "\nMagazine Returned Successfully.\n";
        }
        else
        {
            cout << "\nMagazine is already available.\n";
        }
    }

    void displayDetails() const override
    {
    
        cout << "\n          MAGAZINE          \n";
        cout << "Title        : " << getTitle() << endl;
        cout << "Author       : " << getAuthor() << endl;
        cout << "Due Date     : " << getDueDate() << endl;
        cout << "Issue Number : " << issueNumber << endl;
        cout << "Status       : " << (issued ? "Issued" : "Available") << endl;

    }
};


void displayAllItems(LibraryItem *libraryItems[], int count)
{
    if (count == 0)
    {
        cout << "\nNo Library Items Available.\n";
        return;
    }

    for (int i = 0; i < count; i++)
    {
        cout << "\nItem Number : " << i + 1 << endl;
        libraryItems[i]->displayDetails();
    }

}



            //  Search Items 




void searchItem(LibraryItem *libraryItems[], int count)
{
    if (count == 0)
    {
        cout << "\nNo Library Items Available.\n";
        return;

    }

    string searchTitle;

    cin.ignore();

    cout << "\nEnter Title to Search : ";
    getline(cin, searchTitle);

    bool found = false;

    for (int i = 0; i < count; i++)
    {
        if (libraryItems[i]->getTitle() == searchTitle)
        {
            cout << "\nItem Found Successfully.\n";
            libraryItems[i]->displayDetails();
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nItem Not Found.\n";
    }
}



            //   Check Items Class 




void checkOutItem(LibraryItem *libraryItems[], int count)
{
    int index;

    cout << "\nEnter Item Number : ";
    cin >> index;

    if (index >= 1 && index <= count)
    {
        libraryItems[index - 1]->checkOut();
    }
    else
    {
        cout << "\nInvalid Item Number.\n";
    }
}



            //   Return Item 



void returnLibraryItem(LibraryItem *libraryItems[], int count)
{
    int index;

    cout << "\nEnter Item Number : ";
    cin >> index;

    if (index >= 1 && index <= count)
    {
        libraryItems[index - 1]->returnItem();
    }
    else
    {
        cout << "\nInvalid Item Number.\n";
    }
}



        //   Main Items 



int main()
{
    LibraryItem *libraryItems[MAX_ITEMS];
    int count = 0;
    int choice;

    try
    {
        libraryItems[count++] = new Book(
            "C++ Programming",
            "Bjarne Stroustrup",
            "20-07-2026",
            "1234567890123");

        libraryItems[count++] = new DVD(
            "Avengers Endgame",
            "Marvel Studios",
            "25-07-2026",
            181);

        libraryItems[count++] = new Magazine(
            "Science Today",
            "National Science",
            "30-07-2026",
            45);
    }
    catch (const char *msg)
    {
        cout << "\nException : " << msg << endl;
    }
    catch (...)
    {
        cout << "\nUnknown Exception Occurred.\n";
    }

    do
    {
        cout << "\n                                     ";
        cout << "\n     LIBRARY MANAGEMENT SYSTEM";
        cout << "\n                                     ";
        cout << "\n1. Display All Items";
        cout << "\n2. Search Item";
        cout << "\n3. Check Out Item";
        cout << "\n4. Return Item";
        cout << "\n5. Exit";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            displayAllItems(libraryItems, count);
            break;

        case 2:
            searchItem(libraryItems, count);
            break;

        case 3:
            checkOutItem(libraryItems, count);
            break;

        case 4:
            returnLibraryItem(libraryItems, count);
            break;

        case 5:
            cout << "\nThank You...\n";
            break;

        default:
            cout << "\nInvalid Choice.\n";
        }

    } while (choice != 5);

    for (int i = 0; i < count; i++)
    {
        delete libraryItems[i];
    }

    return 0;
}