#include <iostream>
#include <string>
using namespace std;


void makemove(string &grid, int position, char marker);
void printGrid(const string &grid);
bool checkWin(const string &grid, char marker);
bool checkDraw(const string &grid);

int main() {
    string grid = "___!___!___\n___!___!___\n___!___!___";
    makemove(grid, 4, 'X');

    int position;
    cout << "Enter the position to place 'O' (0-8): ";
    cin >> position;
    makemove(grid, position, 'O');

    

        
        if (position== '2'){
        makemove(grid,position,'O');
        makemove(grid,8,'x');//first corner countering thing
        cout << "Enter the position to place 'O' (0-8): ";
        cin >> position;
        makemove(grid, position, 'O');
       
        if (position==0){ //if player blocks
            makemove(grid,1,'c');
            cout << "Enter the position to place 'O' (0-8): ";
            cin >> position;
            if (position==7){
                 makemove(grid,5,'x');
                if (position==3){
                    makemove(grid,6,'x');
                
                }
                else {
                    makemove(grid,3,'x');
                
                }
                }
            }
        }
        else{
            makemove(grid,0,'X');
            
        
        }
        




        if (position=='0') {
        makemove(grid,position,'O');
        makemove(grid,6,'x');//second corner countering thing
        cout << "Enter the position to place 'O' (0-8): ";
        cin >> position;
        makemove(grid, position,'O');
        //fourth
        if (position==2){ //if player blocks
            makemove(grid,1,'x');
            cout << "Enter the position to place 'O' (0-8): ";
            cin >> position;
            if (position==7){
                 makemove(grid,5,'x');
                 cout
                 makemove
                if (position==3){
                    makemove(grid,6,'x');
                    
                }
                else {
                    makemove(grid,3,'x');
                    
                }
            }
            else {
                makemove(grid,7,'x');
                

            }
            }      
                
            }
        else{
            makemove(grid,2,'X');
            
        
        }






        if (position=='6') {
        makemove(grid,position,'O');
        makemove(grid,8,'x');//third corner countering thing
        cout << "Enter the position to place 'O' (0-8): ";
        cin >> position;
        makemove(grid, position,'O');
        }


        if (position=='8') {
        makemove(grid,position,'O');
        makemove(grid,2,'x');//fourth corner countering thing
        cout << "Enter the position to place 'O' (0-8): ";
        cin >> position;
        makemove(grid, position,'O');
        }










        //NON CORNER POINTS
        if (position== '1'){
        makemove(grid,position,'O');
        makemove(grid,8,'X');
        cout << "Enter the position to place 'O' (0-8): ";
        cin >> position;
        makemove(grid, position, 'O');}

        if (position== '5') {
        makemove(grid,position,'O');
        makemove(grid,8,'X');
        cout << "Enter the position to place 'O' (0-8): ";
        cin >> position;
        makemove(grid, position, 'O');}

        if (position== '3'){
        makemove(grid,position,'O');
        makemove(grid,8,'X');
        cout << "Enter the position to place 'O' (0-8): ";
        cin >> position;
        makemove(grid, position, 'O');
        }

        if (position== '7') {
        makemove(grid,position,'O');
        makemove(grid,8,'X');
        cout << "Enter the position to place 'O' (0-8): ";
        cin >> position;
        makemove(grid, position, 'O');
        }

    


                
   
    // Check for win or draw
    if (checkWin(grid, 'X')) {
        cout << "System wins!" << endl;
    } else if (checkDraw(grid)) {
        cout << "It's a tie!" << endl;
    } else {
        cout << "Player's turn." << endl;
    }

    printGrid(grid);

    return 0;
}

// Function 
void makemove(string &grid, int position, char marker) {
    int point = 4*position+1;
    grid[point] = marker;
}

void printGrid(const string &grid) {
    cout << grid << endl;
}

bool checkWin(const string &grid, char marker='X') {
    
    return ((grid[0] == marker && grid[1] == marker && grid[2] == marker) || // Top row
            (grid[3] == marker && grid[4] == marker && grid[5] == marker) || // Middle row
            (grid[6] == marker && grid[7] == marker && grid[8] == marker) || // Bottom row
            (grid[0] == marker && grid[3] == marker && grid[6] == marker) || // Left column
            (grid[1] == marker && grid[4] == marker && grid[7] == marker) || // Middle column
            (grid[2] == marker && grid[5] == marker && grid[8] == marker) || // Right column
            (grid[0] == marker && grid[4] == marker && grid[8] == marker) || // Diagonal 1
            (grid[2] == marker && grid[4] == marker && grid[6] == marker));  // Diagonal 2
}

bool checkDraw(const string &grid) {
    
    for (char c : grid) {
        if (c == '_') {
            return false; 
        }
    }
    return true; 
}