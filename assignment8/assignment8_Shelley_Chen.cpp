/*
Name: Shelley Chen
Student ID: 21002650
Date: November 25, 2022
Course: SYDE 121
Lab Room: DC 1350
Assignment 8
Program Description: Program that computes best, worst, and average run times.
*/
#include <iostream>
using namespace std;

class Node
{
public:
    void set_distance(int d);
    void set_times(int i, double t);
    void display();
    void statistics();

private:
    double time[5]; // array of time in second
    int distance;   // distance in meter
    double min, max, average;
};
void Node::set_distance(int d)
{
    distance = d;
}
void Node::set_times(int i, double t)
{
    time[i] = t;
}
void Node::display()
{
    cout << "Here is your best 5 times for \n";
    cout << distance << " meter \n";
    for (int i = 0; i < 5; i++)
    {
        cout << time[i] << endl;
    }
}

void Node::statistics()
{
    double sum = 0.0, average;
    int n = sizeof(time) / sizeof(time[0]);

    // sort function takes two parameters, the beginning of the array and the length n upto which we want the array to be sorted
    sort(time, time + n);
    min = time[0];
    max = time[4];
    for (int i = 0; i < n; i++)
    {
        sum += time[i];
    }
    average = sum / n;

    cout << "Best time: " << min << "s" << endl;
    cout << "Worst time: " << max << "s" << endl;
    cout << "Average time: " << average << "s" << endl;
}

int main()
{
    Node run_data;
    int distance;
    double time;

    cout << "Enter run distance: ";
    cin >> distance;
    run_data.set_distance(distance);

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter time " << (i + 1) << ": ";
        cin >> time;
        run_data.set_times(i, time);
    }

    run_data.display();
    run_data.statistics();

    return 0;
}