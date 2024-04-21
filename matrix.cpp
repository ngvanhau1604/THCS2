#include <iostream>
#include <vector>
using namespace std;
// Function to multiply a matrix with its transpose
std::vector<std::vector<int>> multiplyMatrixWithTranspose(const std::vector<std::vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    std::vector<std::vector<int>> result(rows, std::vector<int>(rows, 0));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            for (int k = 0; k < cols; k++)
            {
                result[i][j] += matrix[i][k] * matrix[j][k];
            }
        }
    }

    return result;
}

int main()
{
    // Example usage
    int cases;
    std::cin >> cases;
    for (int i = 1; i <= cases; i++)
    {
        cout << "Test " << i << ":\n";
        std::vector<std::vector<int>> matrix;
        int m, n;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp;
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            matrix.push_back(temp);
        }

        std::vector<std::vector<int>> result = multiplyMatrixWithTranspose(matrix);

        // Print the result
        for (const auto &row : result)
        {
            for (int element : row)
            {
                std::cout << element << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}