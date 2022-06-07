#pragma once
#include<iostream>
#include<vector>

using namespace std;


            // Description of Variables and Code.
/*
        Housestart: Starting Boundary of House
        Houseend  : Ending Boundary of House
        appleTree : Position of Apple Tree
        orangeTree: Position of Orange Tree
  vector of apples: Position of Apple dropped from tree
  vector of orange: Position of Oranges dropped from oranges

        In this code we are finding number of Apples and Oranges 
        fall in the boundary of House.
*/

void countApplesAndOranges(int Housestart, int Houseend, int appleTree, int orangeTree, vector<int> apples, vector<int> oranges) {
    int totalApples, totalOranges;
    totalApples = totalOranges = 0;
    for (int i = 0; i < apples.size(); i++) {
        apples[i] = apples[i] + appleTree;
        if (apples[i] >= Housestart && apples[i] <= Houseend) {
            totalApples++;
        }

    }

    for (int i = 0; i < oranges.size(); i++) {
        oranges[i] = oranges[i] + orangeTree;
        if (oranges[i] >= Housestart && oranges[i] <= Houseend) {
            totalOranges++;
        }
    }
    cout << totalApples << endl << totalOranges << endl;
}

