#include <iostream>
#include <string>
#include <vector>

class Grid
{
public:
    Grid(int size) : myGrid(size, std::vector<int>(size, 0)) // initialize grid to be correctly sized and all zeros
    {
        Randomize();
    }

    void Randomize()
    {
        for (size_t i = 0; i < myGrid.size(); i++)
        {
            for (size_t j = 0; j < myGrid[i].size(); j++)
            {
                myGrid[i][j] = rand() % 9 + 1;
            }
        }
    }

    void Print(std::ostream& out) const
    {
        out << "\n\tPuzzle\n\t";
        for (size_t i = 0; i < myGrid.size(); i++)
        {
            out << i << " ";
        }
        out << "\n\n";
        for (size_t i = 0; i < myGrid.size(); i++)
        {
            out << i << "\t";
            for (size_t j = 0; j < myGrid[i].size(); j++)
            {
                out << myGrid[i][j] << " ";
            }
            out << "\n";
        }
    }

    int GetValue(size_t row, size_t col) const
    {
        // use wraparound for too-large values
        // alternatively you could throw if row and/or col are too large
        return myGrid[row % myGrid.size()][col % myGrid.size()];
    }

    void SetValue(size_t row, size_t col, int val)
    {
        myGrid[row % myGrid.size()][col % myGrid.size()] = val;
    }

private:
    std::vector<std::vector<int>> myGrid;
};

int main0()
{
    srand(time(nullptr));
    Grid board(10);
    size_t xValue = 0;
    size_t yValue = 0;

    // game loop. You could even abstract this behavior into another class
    while (true)
    {
        board.Print(std::cout);
        std::cout << "\nEnter x value: ";
        if (!std::cin) // check for no input
            break;
        std::cin >> xValue;
        if (!std::cin) // check for end of input
            break;
        std::cout << "Enter y value: ";
        std::cin >> yValue;
        if (!std::cin)
            break;
        board.SetValue(xValue, yValue, 0);

        // other game logic...
    }

    // print board one last time before exist
    std::cout << "Game over. Final board: \n";
    board.Print(std::cout);

    return 0;
}
