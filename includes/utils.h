#ifndef UTILS_H
#define UTILS_H

#include <bits/stdc++.h>
int minDistance(std::string word1, std::string word2);
std::vector<std::string> parse_file(const std::string &filename);
void print_suggestions(std::vector<std::pair<int, std::string>> &suggestions, int n);

#endif