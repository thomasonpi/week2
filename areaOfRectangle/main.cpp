#include <iostream>
using namespace std;

int main()
{
    int length, width, area;
    
    cout << "let's calculate the area of a rectangle!\n";
    cout << "what is the legnth of your rectangle? ";
    cin >> length;
    cout << '\n';
    cout << "and the width? \n";
    cin >> width;
    
    area = length * width;
    cout << "the area of your box is: " << area << '\n';
    
    return 0;
}
