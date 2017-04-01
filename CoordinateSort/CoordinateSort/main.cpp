//
//  main.cpp
//  CoordinateSort
//
//  Created by Ryan Paglinawan on 4/1/17.
//  Copyright © 2017 Ryan Paglinawan. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;
class Point{
public:
    Point(float x, float y){
        this -> x = x;
        this -> y = y;
    }
private:
    float x;
    float y;
};
int main(int argc, char const *argv[]) {
    ifstream finCoor, finName, finAPI, finCoor, finCollege;
    string schoolName, APIName;
    vector<string> name;
    vector<Point> coor;
    float x;
    float y;
    int APINum;
    
    //get subset/comparison data
    finCoor.open(argv[1]);
    do {
        finCoor >> x >> y;
        coor.push_back(Point(x,y));
    } while (finCoor.good() && !finCoor.eof());
    finCoor.close();
    
    finName.open(argv[2]);
    do {
        getline(cin, schoolName);
        name.push_back(schoolName);
    } while (finName.good() && !finCoor.eof());
    
    finAPI.open(argv[3]);
    do {
        finAPI >> APIName >> APINum;
        for( int i = 0; i < name.size(); i++){
            if (APIName == name[i]) {
                <#statements#>
            }else{}
        }
    } while (finAPI.good() && !finAPI.eof());
    
    return 0;
}
