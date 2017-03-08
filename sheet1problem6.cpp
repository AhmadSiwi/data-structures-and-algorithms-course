/**
Create a class for email address book. Your class should have the following
* An array of strings containing email followed by the person name, an integer number to tell
how many emails are stored so far. (private)
* gets and sets methods for email and name for each entry. Print_all method to list all entry
values (public) a constructor method to initialize the size used so far to zero.
**/

#include <iostream>

using namespace std;

class emailAddressBook
{
private:
    string contact[100]; // assuming that the email address book can't store more than 100 contacts
    int numberOfEmails;
public:
    emailAddressBook(){numberOfEmails=0;}
    void setContact(string cont, int index){contact[index] = cont;}
    string getContact(int index){return contact[index];}
    void addContact(string cont)
    {
        contact[numberOfEmails] = cont;
        numberOfEmails++;
    }
    void printAll()
    {
        for(int i=0; i<numberOfEmails; i++)
            cout<<contact[i]<<endl;
    }
};
