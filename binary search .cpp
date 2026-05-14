#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;


struct FamilyMember {
    string name;
    int age;
};


bool compareMembers(FamilyMember a, FamilyMember b) {
    return a.name < b.name;
}

int main() {
    int n;
    cout << "Enter the number of family members: ";
    cin >> n;

    FamilyMember members[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter name of member " << i + 1 << ": ";
        cin >> members[i].name;
        cout << "Enter age of " << members[i].name << ": ";
        cin >> members[i].age;
    }

    
    sort(members, members + n, compareMembers);

    string keyName;
    cout << "\nEnter a key name to search: ";
    cin >> keyName;


    int low = 0, high = n - 1;
    int foundIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (members[mid].name == keyName) {
            foundIndex = mid;
            break;
        }
        if (members[mid].name < keyName) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }


    if (foundIndex != -1) {
        cout << "Name was found and is aged " << members[foundIndex].age << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
