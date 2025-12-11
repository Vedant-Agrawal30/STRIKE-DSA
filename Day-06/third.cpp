#include <iostream>
using namespace std;

void Youtube(string photo, string title, int views, int days)
{
    cout << "Create a box of height 2cm and width 2cm " << photo << endl;
    cout << "Put the photo inside the box" << endl;
    cout << "Print the Title " << title << endl;
    cout << "Print the views " << views << endl;
    cout << "Upload time " << days << endl;
}

int main()
{

    string photo1 = "photo.jpg", title = "Rohit negi STRIKE", photo2 = "photo2.jpg", title2 = "Rohit negi STRIKE Ongoing";
    int views = 420, days = 5, views2 = 34444, days2 = 33;


    Youtube(photo1,title,views,days);
    cout<<endl<<endl;
    Youtube(photo2,title2,views2,days2);

    // cout << "Create a box of height 2cm and width 2cm" << endl;
    // cout << "Put the photo inside the box" << endl;
    // cout << "Print the Title " << endl;
    // cout << "Print the views" << endl;
    // cout << "Upload time" << endl;
}