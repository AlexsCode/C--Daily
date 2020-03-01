//written and coded by Alex Tuddenham
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{ 
long income;
int totaltax=0;
int bracketnumber=4;


struct taxband //sets a structure of each band
{int taxbandmin; //finds the bottom of the band
 double tax;};  //finds the rate of tax on band

//creates an array of custom data type of the structure
taxband brackets[4] 
{ {10000, 0.1},
  {30000, 0.25},
  {100000,0.40},
  {INT_MAX,1.00}};

 cout << "Please type in income" << endl;
 cin >> income; //Sets the Initial income
 long taxable=income; //sets all income as taxable
 //find the taxVol out of income


    for (int i=0; i<bracketnumber;i++) //create loop for all brackets
          {if(income > brackets[i].taxbandmin)
            {

             if (income >brackets[i+1].taxbandmin) //looks if income is greator than next bracket in loop, allows to calculate tax as the full bands income.
              {totaltax= totaltax +double ((brackets[i+1].taxbandmin)-(brackets[i].taxbandmin))*(brackets[i].tax);//tax is set as the current tax + Calculated tax of this minimum band->next min band
              } //each full bands tax should be added at this point.
             else 
              { totaltax= totaltax+ double(income- brackets[i].taxbandmin) * (brackets[i].tax); //non-full band therefore adds the result of untaxed income*tax rate in bracket
              }
             cout << "Total Tax Paid up to Bracket "<<(i+1)<<endl<<totaltax<<endl ; //prints to screen the total tax at each bracket.
            }
    } cout << "Total Tax\n"<<totaltax<<endl ; //prints total, can be removed as last bracket should have the same total
}
