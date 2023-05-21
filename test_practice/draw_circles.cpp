#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Constants
const int WIDTH = 50;
const int HEIGHT = 20;

const float Y_STRETCH_FACTOR = 0.5; // Factor to correct for terminal chars not being square

const char FG_CHAR = '*';
const char BG_CHAR = ' ';

// Function Declarations
void getInputs(vector<int> &xs, vector<int> &ys, vector<int> &radii);
void fillPlot(bool plot[HEIGHT][WIDTH], vector<int> xs, vector<int> ys, vector<int> radii);
void drawCircle(bool plot[HEIGHT][WIDTH], int x_centre, int y_centre, int radius);
void displayPlot(bool plot[HEIGHT][WIDTH]);

// Main Function
int main()
{
  vector<int> xs, ys, radii;
  bool plot[HEIGHT][WIDTH] = {};

  getInputs(xs, ys, radii);

    for (int i = 0; i < xs.size(); i++)
  {
    cout << xs[i] << endl;
  }
  fillPlot(plot, xs, ys, radii);
  displayPlot(plot);
}

// Gets the x-positions, y-positions and radii of circles from user
// Inputs: Vectors of x-positions, y-positions and radii to fill
// Outputs: None
void getInputs(vector<int> &xs, vector<int> &ys, vector<int> &radii)
{
  int num_circles, x, y, radius;

  cout << "How many circles do you want to draw? ";
  cin >> num_circles;

  cout << "Enter the x-positions, y-positions and radii of your circles" << endl
       << endl;

  for (int i = 1; i <= num_circles; i++)
  {
    cout << "Circle " << i << " [x-position y-position radius]: ";
    cin >> x >> y >> radius;

    y = round(y * Y_STRETCH_FACTOR);

    xs.push_back(x);
    ys.push_back(y);
    radii.push_back(radius);
  }

  cout << endl;
}

// Adds circles to the plot
// Inputs: Plot array, x-positions of circles, y-positions of circles, radii of circles
// Outputs: None
void fillPlot(bool plot[HEIGHT][WIDTH], vector<int> xs, vector<int> ys, vector<int> radii)
{
  for (int i = 0; i < xs.size(); i++)
    drawCircle(plot, xs[i], ys[i], radii[i]);
}

// Adds a circle to the plot
// Inputs: Plot array, x-position of centre, y-position of centre, radius
// Outputs: None
void drawCircle(bool plot[HEIGHT][WIDTH], int x_centre, int y_centre, int radius)
{
  int y_offset, x_start, x_end;

  // Find left-most and right-most x-positions
  x_start = x_centre - radius;
  x_end = x_centre + radius;

  // Ensure x coords are in plot
  if (x_start < 0)
    x_start = 0;
  if (x_end > WIDTH - 1)
    x_end = WIDTH - 1;

  // For each x-position in the circle:
  for (int x = x_start; x <= x_end; x++)
  {
    // Find y-position's offset from centre
    // Recall the formula for a circle (x-u)^2 - (y-v)^2 = r^2
    // Also adjust by stretch factor and round as we need an integer
    y_offset = round(sqrt(pow(radius, 2) - pow(x - x_centre, 2)) * Y_STRETCH_FACTOR);

    // Add top and bottom of circle to plot
    // Check that position is on plot before adding
    if (y_centre + y_offset < HEIGHT)
      plot[y_centre + y_offset][x] = true;
    if (y_centre - y_offset >= 0)
      plot[y_centre - y_offset][x] = true;
  }
}

// Prints the plot
// Inputs: Plot array
// Outputs: None
void displayPlot(bool plot[HEIGHT][WIDTH])
{
  // For each row
  for (int y = 0; y < HEIGHT; y++)
  {
    // For each column
    for (int x = 0; x < WIDTH; x++)
    {
      if (plot[y][x])
        cout << FG_CHAR;
      else
        cout << BG_CHAR;
    }
    cout << endl;
  }
}
