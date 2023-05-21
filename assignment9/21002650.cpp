/*
Name: Shelley Chen
Student ID: 21002650
Date: November 30, 2022
Course: SYDE 121
Lab Room: DC 1350
Assignment 9
Program Description: Program that allows users to obtain some statistics on an input image and to invert the image.
*/

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

void invert(string line1, string line2, int int1, int int2, int int3, int **pixels, int rows_in, int columns_in);
void avrg_row(int **pixels, int rows_in, int columns_in);
void avrg_column(int **pixels, int rows_in, int columns_in);
double avrg_image(int **pixels, int rows_in, int columns_in);
double std_image(int **pixels, int rows_in, int columns_in);
void distribution(double average, double std);

ifstream in;
ofstream out;

int main()
{
    in.open("samp_img.ppm");           // input file with image
    out.open("21002650_inverted.ppm"); // output file with inverted image

    if (in.fail())
    {
        cout << "Input file opening failed\n";
        exit(1);
    }

    if (out.fail())
    {
        cout << "Output file opening failed\n";
        exit(1);
    }

    string imgType, comments;
    int rows, columns, maxColour;

    // read entire line from the input file, store in local variables
    getline(in, imgType);
    getline(in, comments);

    // read individual values from the input file, store in local variables
    in >> rows >> columns;
    in >> maxColour;

    // create pointer to another pointer which points to an empty 1D array
    int **pixels = new int *[rows];

    // fill the array
    for (int i = 0; i < rows; i++)
    {
        // for each row, create a column with the desire amount of cells
        // make this row pointer point to the first cell of this column
        pixels[i] = new int[columns];
        for (int j = 0; j < columns; j++)
        {
            // read individual values from the input file into the cells of the array
            in >> pixels[i][j];
        }
    }

    invert(imgType, comments, rows, columns, maxColour, pixels, rows, columns);
    out.close();

    out.open("21002650_stats.txt"); // output file

    double average_image, std;

    avrg_row(pixels, rows, columns);
    avrg_column(pixels, rows, columns);
    average_image = avrg_image(pixels, rows, columns);
    std = std_image(pixels, rows, columns);
    distribution(average_image, std);

    return 0;
}

void invert(string line1, string line2, int int1, int int2, int int3, int **pixels, int rows_in, int columns_in)
{
    // copy first four lines from original input file into new file
    out << line1 << endl
        << line2 << endl
        << int1 << " " << int2 << endl
        << int3 << endl;

    for (int i = 0; i < rows_in; i++)
    {
        for (int j = 0; j < columns_in; j++)
        {
            out << abs(255 - pixels[i][j]) << " ";
        }
        out << endl;
    }
}

void avrg_row(int **pixels, int rows_in, int columns_in)
{
    for (int i = 0; i < rows_in; i++)
    {
        double sum_row = 0.0, average_row;
        for (int j = 0; j < columns_in; j++)
        {
            sum_row += pixels[i][j];
        }
        average_row = sum_row / columns_in;
        out << "Avg Row (" << i + 1 << "): " << average_row << endl;
    }
    out << endl;
}

void avrg_column(int **pixels, int rows_in, int columns_in)
{
    for (int i = 0; i < columns_in; i++)
    {
        double sum_col = 0.0, average_col;
        for (int j = 0; j < rows_in; j++)
        {
            sum_col += pixels[j][i];
        }
        average_col = sum_col / rows_in;
        out << "Avg Col (" << i + 1 << "): " << average_col << endl;
    }
    out << endl;
}

double avrg_image(int **pixels, int rows_in, int columns_in)
{
    double sum_image = 0.0, average_image;
    for (int i = 0; i < rows_in; i++)
    {
        for (int j = 0; j < columns_in; j++)
        {
            sum_image += pixels[i][j];
        }
    }
    average_image = sum_image / (rows_in * columns_in);
    out << "Avg Pixel: " << average_image << endl;
    out << endl;

    return average_image;
}

double std_image(int **pixels, int rows_in, int columns_in)
{
    double sum1 = 0.0, sum2 = 0.0, std;
    for (int i = 0; i < rows_in; i++)
    {
        for (int j = 0; j < columns_in; j++)
        {
            sum1 += pow(pixels[i][j], 2); // square each pixel value, sum up those values
            sum2 += pixels[i][j];
        }
    }
    sum2 = pow(sum2, 2);

    std = abs((sum1 - sum2) / (rows_in * columns_in - 1));
    out << "STD: " << std << endl
        << endl;

    return std;
}

void distribution(double average, double std)
{
    for (int i = 1; i < 4; i++)
    {
        out << left << "Average + " << i << " STD: " << setw(20) << average + (i * std);
        out << left << "Average - " << i << " STD: " << setw(20) << average - (i * std) << endl;
    }
}