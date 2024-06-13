#include <iostream>
#include "Eigen/Dense"

using Eigen::MatrixXd;

int main()
{
        MatrixXd m(3, 3);
        m << 1, 2, 3, 4, 5, 6, 7, 8, 9;

        std::cout << m << std::endl;

        return 0;
}
