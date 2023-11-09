/*take the age from the user and then decide accordingly
1. if age <18
print - not eligble for job
2. if age >=18 and age<=54
print - eligble for the job
3.If age >=55 and age <=57,
print - eligble for job, but retirement soon.
if age >57
print - retirement time */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cout << "Enter the Age:";
    cin >> age;

    if (age < 18)
    {
        cout << "You're not eligble for the job";
    }
    else if (age <= 57)
    {
        cout << "Youre eligble for the job";
        if (age >= 55)
        {
            cout << ", bUt retirement soon";
        }
    }
    else
    {
        cout << "retirement time";
    }
    return 0;
}






