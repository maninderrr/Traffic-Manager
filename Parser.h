#ifndef PARSER_H
#define PARSER_H
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include "Graphs.h"
using namespace std;

typedef void * (*THREADFUNCPTR)(void *);

bool query_E(Graph* g, string edges_list);

void query_V(Graph* g, int V);

string ltrim(const string &s);
string rtrim(const string &s);
string trim(const string &s);

#endif
