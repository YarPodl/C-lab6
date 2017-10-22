#pragma once


set<int>& operator+ (const set<int> &object1, const set<int> &object2);
set<int>& operator- (const set<int> &object1, const set<int> &object2);
set<int>& operator/ (const set<int> &object1, const set<int> &object2);
ostream& operator<<(ostream& a, const set<int>& b);
istream& operator >> (istream& a, set<int>& b);