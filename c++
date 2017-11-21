#include <iostream>
using namespace std;

//prototypes
double getSales(string);
void findHighest(double, double, double, double);

//Main function
int main()
{
    double NEsales, SEsales, NWsales, SWsales;
    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
            case 0:
            NEsales = getSales("NE");
            break;
            case 1:
            SEsales = getSales("SE");
            break;
            case 2:
            NWsales = getSales("NW");
            break;
            default:
            SWsales = getSales("SW");
            break;
        }
    }
    findHighest(NEsales, SEsales, NWsales, SWsales);
}

// function sales gets the division sales
    double getSales(string name)
{
  double sales = 0;
  cout << "Pleas enter the sale of the division " << name << " $";
  cin >> sales;
  while (sales < 0)
  {
      cout << "Please enter a positive number. Please enter a valid number: ";
      cin >> sales;
  }
  return sales;

}

//Function find highest 
void findHighest(double NEsales, double SEsales, double NWsales, double SWsales)
{
    double highest = 0;
    string division = "";
    
    if (NEsales > SEsales && NEsales > NWsales && SEsales > SWsales)
    {
    highest = NEsales;
    division = "North East";
    }
    else if (SEsales > NEsales && SEsales > NWsales && SEsales > SWsales)
    {
        highest = SEsales;
        division = "South East";
    }
    else if (NWsales > NEsales && NWsales > NWsales && NWsales > SWsales)
    {
        highest = NWsales;
        division = "North West";
    }
    else
    {
        highest = SWsales;
        division = "South West";
    }
    cout << "The division with the highest sales is " << division << " with totals sales of $" << highest;
}
