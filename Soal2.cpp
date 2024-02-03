#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'EstimatePos' function below.
 *
 * The function accepts following parameters:
 *  1. FLOAT initial_x
 *  2. FLOAT next_x
 *  3. FLOAT initial_y
 *  4. FLOAT next_y
 *  5. FLOAT time_diff
 */

void EstimatePos(float initial_x, float next_x, float initial_y, float next_y, float time_diff) {
    // Complete the function and make a print statement inside the function based on the output format
    float selx = next_x-initial_x, sely = initial_y-next_y;
    float kecx = selx/time_diff, kecy = sely/time_diff;
    float xnol=initial_x+kecx*(initial_y/kecy);
    cout << fixed  << setprecision(2) << "Ball x's position on y: 0.00 cm is " << xnol << " cm" << endl;

    if (xnol>=310 and xnol <=490) cout << "Ball is moving towards goal post" << endl;
    else cout << "Ball is not moving towards goal post" << endl;
}

int main()
{
    float initial_x,next_x,initial_y,next_y,time_diffrence;
    cin >> initial_x >> next_x >> initial_y >> next_y >> time_diffrence;

    EstimatePos(initial_x, next_x, initial_y, next_y, time_diffrence);

    return 0;
}