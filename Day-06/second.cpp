#include <iostream>
using namespace std;

void findGrade(int marks)
{
    if (marks > 90)
    {
        cout << "Grade: A+" << endl;
    }
    else if (marks > 80)
    {
        cout << "Grade: A" << endl;
    }
    else if (marks > 70)
    {
        cout << "Grade: B+" << endl;
    }
    else
    {
        cout << "Grade: C" << endl;
    }
}

int main()
{
    int student1 = 78;
    int student2 = 93;
    int student3 = 3;

    findGrade(student1);
    findGrade(student2);
    findGrade(student3);
}