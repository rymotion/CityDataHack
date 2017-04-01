/* Justine Barrett HW9 3/17/2017
 904416835
 This program performs matrix addition depending on user input and outputs solutions either to console or file.
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include "csv.h"
using namespace std;

/**********
 ** fill_matrix -- generates matrix filled with random values
 ** add_matrix -- generates random card rank and suit and assigns point totals based off of card type
 ** output_matrix -- adds two matrices and stores values in new matrix
 ** fill_file -- fills matrix with int values from file 
 ** output_file -- outputs matrix values to file
 ** Parameters:
 ** data_ini- inital dataset
 **data_fin - final dataset(s)
 ** param_num= number of parameters
 ** fin -- input file.
 ** fout -- Output file.
 **********/



int main(int argc, char const *argv[]) {
    ifstream fin;
    string schoolName;

        
    
    //get subset/comparison data    
    fin.open(argv[1]);
    do {
        
    } while (fin.good());

    fill_file(subset1, user_row, user_col, fin);

    int col, y_coord, x_coord;
 
       
    
    int xco= 0;
    int yco= 0;
    
    for (int i=0; i<user_row; i++) {
         for (int j=0; j<user_row; j++) {
             if( initial_dataset[i][col] == subset1[j][col]) { // make this substr and add other parameter??
                 final_sub[xco][0]=subset1[j][x_coord];
                 final_sub[yco][0]=subset1[j][y_coord];
                 xco++;
                 yco++;
             }
        

    }
    return 0;
}
