#ifndef MYHEADER_H
#define MYHEADER_H
using namespace std;
#pragma once  // Prevents multiple inclusion of this header


#include <algorithm>
#include <bitset>
#include <cmath>
#include <limits>
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <list>
#include <utility>
#include <tuple>
#include <cstring>
#include <cctype>
#include <cstring>
#include <cctype>
#define For(i, n) for (int i = 0; i < n; i++)
#define Forcase int __t = 0; cin >> __t; while (__t--)
#define ll long long
#define ar array

const int MOD = 1e9 + 7;


#endif // MYHEADER_H
void greet();
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}