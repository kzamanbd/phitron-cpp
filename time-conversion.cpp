#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Get the time in AM/PM format
    string timeString;
    getline(cin, timeString);

    // Parse the input time
    stringstream ss(timeString);
    tm tmTime = {};
    ss >> get_time(&tmTime, "%I:%M %p");

    // if (ss.fail())
    // {
    //     cout << "Invalid time format\n";
    //     return 1;
    // }

    // Convert to 24-hour format
    ostringstream resultStream;
    resultStream << put_time(&tmTime, "%H:%M");
    string result = resultStream.str();

    cout << "Converted time to 24-hour format: " << result << endl;

    return 0;
}
