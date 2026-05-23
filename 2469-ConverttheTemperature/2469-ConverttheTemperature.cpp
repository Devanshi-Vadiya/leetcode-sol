// Last updated: 5/23/2026, 9:10:08 PM
1class Solution {
2public:
3    vector<double> convertTemperature(double celsius) {
4        double kelvin = celsius + 273.15;
5        double fahrenheit = (celsius * 1.80) + 32.00;
6
7        return {kelvin, fahrenheit};
8    }
9};