// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int ct = 0;
//     while (n > 0)
//     {
//         int rem = n % 10;
//         ct++;
//         n /= 10;
//     }
//     cout << ct << endl;
//     return 0;
// }

// ✅ Good Things:
// Correct logic for counting digits.

// Use of modulo %10 to get the last digit (although not necessary for just counting, but no harm).

// Simple and clean code — perfect for early interview rounds.

// 🔥 Improvements You Can Make
// Handle negative numbers

// If n is negative, n > 0 will fail directly.

// Use n = abs(n); before starting the loop.

// Handle zero

// If n == 0, your current loop will not run at all.

// 0 should be considered as 1 digit.

// So slightly improved version:

// cpp
// Copy
// Edit
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n = abs(n); // Make it positive

    if (n == 0) {
        cout << 1 << endl;
        return 0;
    }

    int ct = 0;
    while (n > 0)
    {
        ct++;
        n /= 10; // No need to find remainder if you just want to count digits
    }
    cout << ct << endl;
    return 0;
}
// 🧠 Notes:
// rem = n % 10; is unnecessary if you just want to count.
// (Use it only if you need the digits separately.)

// Use abs(n) to handle negatives cleanly.

// Special check for n == 0 — very common interview trap!

// 🔁 Alternate Methods:
// 1. Using String Conversion
// Quick method but not preferred in low-level coding rounds:

// cpp
// Copy
// Edit
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     n = abs(n);
//     string s = to_string(n);
//     cout << s.length() << endl;
//     return 0;
// }
// This is one-liner logic.

// Useful when interviewer says: "Optimize for faster coding."

// 2. Using Logarithm
// Crazy fast mathematical method:

// cpp
// Copy
// Edit
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     n = abs(n);
    
//     if (n == 0)
//         cout << 1 << endl;
//     else
//         cout << (int)log10(n) + 1 << endl;

//     return 0;
// }
// Explanation:

// log10(n) gives the number of digits - 1.

// Add 1 to get the number of digits.

// ✅ This is O(1) time — super fast!

// 📜 Final Suggestions:

// Method	When to use
// While Loop	Basic interview rounds, preferred if time allows
// String Method	Quick hacks, non-strict interviews
// Logarithm	When asked to optimize for performance
