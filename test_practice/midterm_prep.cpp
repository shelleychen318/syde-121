#include <iostream>
#include <cmath>
using namespace std;

int find_second_largest(int nums[], int size);
void series_of_squares(int n);
void swap ();
int num_of_digits (int num);
int reverse (int num);

void get_input(int& i, int& j);
void process(int& i, int& j);


int main()
{
    // int test[] = {14, 6, 29, 17, 43, 37};
    // int s_largest = find_second_largest(test, 6);
    // cout << s_largest <<  endl;

    // int sum = 0;
    // int num = 1;
    // for (int i = 0; i < 50; i++) // print sum of odd numbers 1-100
    // {
    //     sum += num;
    //     num += 2;
    // }
    // cout << sum;

    // int x = 4; 
    // if (!(x % 2)) // x % 2 = 0 (false), !0 = true
    // {
    //     cout << x % 2; // output: 0
    // }

    // int num;
    // bool prime = true;

    // cout << "enter a num: ";
    // cin >> num;

    // for (int i = 2; i < num; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         prime = false;
    //         break;
    //     }
    // }

    // if (prime)
    //     cout << "prime";
    // else
    //     cout << "not prime";

    // int n, i;

    // cout << "enter a positive integer: ";
    // cin >> n;

    // cout << "factors of " << n << " are: ";
    // for (i = 1; i <=n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << ", ";
    //     }
    // }

    // int n, factorial;

    // cout << "enter a positive integer: ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     factorial *= i;
    // }
    // cout << factorial;
    
    // int int1, int2, smaller;

    // cout << "enter first int: ";
    // cin >> int1;
    // cout << "enter second int: ";
    // cin >> int2;

    // if (int1 <= int2)
    //     smaller = int1;
    // else if (int1 > int2)
    //     smaller = int2;

    // for (int i = smaller; i >= 1; i--)
    // {
    //     if (int1 % i == 0 && int2 % i == 0)
    //     {
    //         cout << "GCF: " << i << endl;
    //         break;
    //     }
    // }

    // int num1, num2, temp;

    // cout << "enter num 1: ";
    // cin >> num1;
    // cout << "enter num 2: ";
    // cin >> num2;

    // temp = num1;
    // num1 = num2;
    // num2 = temp;

    // cout << "this is num 1: " << num1 << endl;
    // cout << "this is num 2: " << num2 << endl;

    // int n;
    // cout << "enter a number: ";
    // cin >> n;
    // series_of_squares(n);

    // swap();

    // int num;
    // cout << "enter a number: ";
    // cin >> num;
    // int result = reverse(num);
    // // cout << result << endl;

    // int i, j;
    // get_input(i , j);
    // cout << "about to call function, i = " << i << " j = " << j;
    // process(i,j);
    // // i and j have been changed in the process function
    // cout << "just came back from function, i = " << i << " j = " << j;

    double n, n_approx, p_approx, difference;
    cout << "enter a number: ";
    cin >> n;
    cout << "enter an approximation for " << n << ": ";
    cin >> n_approx;
    p_approx = n_approx;

    do 
    {
        n_approx = ((n/p_approx) + p_approx) / 2.0;
        p_approx = n_approx;
        difference = fabs(n_approx - p_approx);

    } while (difference >= 0.00001);

    cout << n_approx;


    return 0;
}

double secnum;

void get_input(int& i, int& j)
{
    cout << "Please enter two values for i and j: ";
    cin >> i >> j;
    cout << endl;
    return; // a void function, returns nothing
}

// changes values of the arguments passed in at function call in main 
void process(int& i, int& j)
{
    i = i +10;
    j = j +20;
    cout << "Inside function Process \n";
    cout << "I added 10 to i, and 20 to j, i = " << i << " and j = " << j;
}

int find_second_largest(int nums[], int size)
{
    int largest = nums[0], s_largest = 0;

    for (int i = 1; i < size; i++)
    {
        if (nums[i] > largest)
        {
            s_largest = largest;
            largest = nums[i];
        }
        else if (nums[i] > s_largest)
        {
            s_largest = nums[i];
        }
    }
    return s_largest;
}

void series_of_squares(int n)
{
    int power, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        power = pow(i, 2);
        cout << pow(i, 2) << ", ";
        sum += power;
    }
    cout << "sum: " << sum;
}

void swap ()
{
    int num1, num2;
    cout << "enter num 1: ";
    cin >> num1;
    cout << "enter num 2: ";
    cin >> num2;
    num1 += num2;
    num2 = num1 - num2;
    num1 -= num2;
    cout << "num 1: " << num1 << endl;
    cout << "num 2: " << num2 << endl;
}

int num_of_digits (int num)
{   
    // assume 1 <= num < 100000

    if (num / 10000 >= 1)
        return 5;
    else if (num / 1000 >= 1)
        return 4;
    else if (num / 100 >= 1)
        return 3;
    else if (num / 10 >= 1)
        return 2;
    else
        return 1;
}

int reverse (int num)
{
    // double current;
    // while (num / 10 > 0)
    // {
    //     // cout << "kevin";
    //     current = num - (num / 10);
    //     num = num / 10;
    //     cout << current;
    // }

int n, rem, reverse = 0;
    while (n!=0)
    {
        rem=n%10;
        reverse = reverse*10+rem;
        n/=10;
    }
    cout <<reverse;
    return 0;
}