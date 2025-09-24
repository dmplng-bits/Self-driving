//
//  2DMatrix.cpp
//  Into_To_self_Driving
//
//  Created by Preet Singh on 9/23/25.
//


#include <iostream>
#include <vector>

using namespace std;

int main() {
    // declare a two dimension vector of type int
    vector < vector<int> > twodvector;
    
    // setup a row
    vector<int> singlerow (3, 2);
    
    //append five rows
    for(int i = 0; i < 5; i++) {
        twodvector.push_back(singlerow);
    }
    
    //print out the matrix
    for(int row = 0; row<twodvector.size(); row++) {
        for(int column = 0; column<twodvector[0].size(); column++){
            cout << twodvector[row][column] << " ";
         }
        cout<< endl;
    }
    return 0;
}
