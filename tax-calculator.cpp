// Income Tax Calculator
// By Kristin Kim, Christa Baker, and Anjali Paliwal

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Calculator {
public:
ofstream writer;
ifstream reader;
void fed(int status, float income);
void state(string location, float income, int status);
void fica(float income);
void name(string who);
void name2(string who2);
};
void Calculator::name(string who) {
writer.open("TaxCalc.txt", ios::app);
writer << "First name: " << who << endl;
writer.close();
}
void Calculator::name2(string who2) {
writer.open("TaxCalc.txt", ios::app);
writer << "Last name: " << who2 << endl;
writer.close();
}
void Calculator::fed(int status, float income) {
float fedtax = 0;
int year;
cout << "Tax year?" << endl;
cin >> year;
if (status == 1 && income >= 0 && income <= 9275) {
fedtax = 0.1*income;
}
if (status == 1 && income >= 9276 && income <= 37650) {
fedtax = .15*income;
}
if (status == 1 && income >= 37651 && income <= 91150) {
fedtax = .25*income;
}
if (status == 1 && income >= 91151 && income <= 190150) {
fedtax = .28*income;
}
if (status == 1 && income >= 190151 && income <= 413350) {
fedtax = .33*income;
}
if (status == 1 && income >= 413351 && income <= 415050) {
fedtax = .35*income;
}
if (status == 1 && income >= 415051) {
fedtax = .396*income;
}
//-------------------------------------------------------------------------------
if (status == 2 && income >= 0 && income <= 18550) {
fedtax = 0.1*income;
}
if (status == 2 && income >= 18551 && income <= 75800) {
fedtax = .15*income;
}
if (status == 2 && income >= 75801 && income <= 151900) {
fedtax = .25*income;
}
if (status == 2 && income >= 151901 && income <= 231450) {
fedtax = .28*income;
}
if (status == 2 && income >= 231451 && income <= 413350) {
fedtax = .33*income;
}
if (status == 2 && income >= 413351 && income <= 466950) {
fedtax = .35*income;
}
if (status == 2 && income >= 466951) {
fedtax = .396*income;
}
//--------------------------------------------------------------------------------
if (status == 3 && income >= 0 && income <= 9275) {
fedtax = 0.1*income;
}
if (status == 3 && income >= 9276 && income <= 37650) {
fedtax = .15*income;
}
if (status == 3 && income >= 37651 && income <= 75950) {
fedtax = .25*income;
}
if (status == 3 && income >= 75951 && income <= 115725) {
fedtax = .28*income;
}
if (status == 3 && income >= 115726 && income <= 206675) {
fedtax = .33*income;
}
if (status == 3 && income >= 206676 && income <= 233475) {
fedtax = .35*income;
}
if (status == 3 && income >= 233476) {
fedtax = .396*income;
}
//---------------------------------------------------------------------------------
if (status == 4 && income >= 0 && income <= 13250) {
fedtax = 0.1*income;
}
if (status == 4 && income >= 13251 && income <= 50400) {
fedtax = .15*income;
}
if (status == 4 && income >= 50401 && income <= 130150) {
fedtax = .25*income;
}
if (status == 4 && income >= 130151 && income <= 210800) {
fedtax = .28*income;
}
if (status == 4 && income >= 210801 && income <= 413350) {
fedtax = .33*income;
}
if (status == 4 && income >= 413351 && income <= 441100) {
fedtax = .35*income;
}
if (status == 4 && income >= 441101) {
fedtax = .396*income;
}
cout << "Your federal income tax is: $" << fedtax << endl;
writer.open("TaxCalc.txt", ios::app);
writer << "YEAR: " << year << endl;
writer << "Federal: " << fedtax << endl;
writer.close();
}
void Calculator::state(string location, float income, int status) {
float statetax = 0;
if(status == 1) {
//1. AL Alabama
if (location == "AL" || location == "Alabama" && income >= 0 && income < 500) {
statetax = .02*income;
}
if (location == "AL" || location == "Alabama" && income >= 500 && income < 3000) {
statetax = .04*income;
}
if (location == "AL" || location == "Alabama" && income >= 3000) {
statetax = .05*income;
}
//2. AK Alaska
if (location == "AK" || location == "Alaska") {
statetax = 0;
}
//3. AZ Arizona
if (location == "AZ" || location == "Arizona" && income >= 0 && income < 10179) {
statetax = .0259*income;
}
if (location == "AZ" || location == "Arizona" && income >= 10179 && income < 25445) {
statetax = .0288*income;
}
if (location == "AZ" || location == "Arizona" && income >= 25445 && income < 50890) {
statetax = .0336*income;
}
if (location == "AZ" || location == "Arizona" && income >= 50890 && income < 152668) {
statetax = .0424*income;
}
if (location == "AZ" || location == "Arizona" && income >= 152668) {
statetax = .0454*income;
}
//4. AR Arkansas
if (location == "AR" || location == "Arkansas" && income >= 0 && income < 4299) {
statetax = .009*income;
}
if (location == "AR" || location == "Arkansas" && income >= 4299 && income < 8500) {
statetax = .025*income;
}
if (location == "AR" || location == "Arkansas" && income >= 8500 && income < 12699) {
statetax = .035*income;
}
if (location == "AR" || location == "Arkansas" && income >= 12699 && income < 21199) {
statetax = .045*income;
}
if (location == "AR" || location == "Arkansas" && income >= 21199 && income < 35100) {
statetax = .06*income;
}
if (location == "AR" || location == "Arkansas" && income >= 35100) {
statetax = .0690*income;
}
//5. CA California
if (location == "CA" || location == "California" && income >= 0 && income < 8015) {
statetax = .01*income;
}
if (location == "CA" || location == "California" && income >=8015 && income < 19001) {
statetax = .02*income;
}
if (location == "CA" || location == "California" && income >=19001 && income <29989) {
statetax = .04*income;
}
if (location == "CA" || location == "California" && income >=29989 && income <41629) {
statetax = .06*income;
}
if (location == "CA" || location == "California" && income >= 41629 && income <52612) {
statetax = .08*income;
}
if (location == "CA" || location == "California" && income >=52612 && income <268750) {
statetax = .093*income;
}
if (location == "CA" || location == "California" && income >= 268750 && income < 322499) {
statetax = .103*income;
}
if (location == "CA" || location == "California" && income >=322499 && income <537498) {
statetax = .113*income;
}
if (location == "CA" || location == "California" && income >= 537498 && income <1000000) {
statetax = .1234*income;
}
if (location == "CA" || location == "California" && income >= 1000000) {
statetax = .133*income;
}
//6. CO Colorado
if (location == "CO" || location == "Colorado") {
statetax = 0.0463*income;
}
//7. CT Connecticut
if (location == "CT" || location == "Connecticut" && income >= 0 && income < 10000) {
statetax = .03*income;
}
if (location == "CT" || location == "Connecticut" && income >= 10000 && income <
50000) {
statetax = .05*income;
}
if (location == "CT" || location == "Connecticut" && income >= 50000 && income <
100000) {
statetax = .0550*income;
}
if (location == "CT" || location == "Connecticut" && income >= 100000 && income <
200000) {
statetax = .06*income;
}
if (location == "CT" || location == "Connecticut" && income >= 200000 && income <
250000) {
statetax = .0650*income;
}
if (location == "CT" || location == "Connecticut" && income >= 250000 && income <
500000) {
statetax = .0690*income;
}
if (location == "CT" || location == "Connecticut" && income >= 500000) {
statetax = .0699*income;
}
//8. DE Delaware
if (location == "DE" || location == "Delaware" && income >= 2000 && income < 5000) {
statetax = .022*income;
}
if (location == "DE" || location == "Delaware" && income >= 5000 && income < 10000) {
statetax = .039*income;
}
if (location == "DE" || location == "Delaware" && income >= 10000 && income < 20000) {
statetax = .048*income;
}
if (location == "DE" || location == "Delaware" && income >= 20000 && income < 25000) {
statetax = .052*income;
}
if (location == "DE" || location == "Delaware" && income >= 25000 && income < 60000) {
statetax = .0555*income;
}
if (location == "DE" || location == "Delaware" && income >= 600000) {
statetax = .066*income;
}
//9. FL Florida
if (location == "FL" || location == "Florida" ) {
statetax = 0;
}
//10. DC. District of Columbia, WashingtonDC
if (location == "DC" || location == "WashingtonDC" && income >= 0 && income < 10000)
{
statetax = .04*income;
}
if (location == "DC" || location == "WashingtonDC" && income >= 10000 && income <
40000) {
statetax = .06*income;
}
if (location == "DC" || location == "WashingtonDC" && income >= 40000 && income <
60000) {
statetax = .065*income;
}
if (location == "DC" || location == "WashingtonDC" && income >= 60000 && income <
350000) {
statetax = .085*income;
}
if (location == "DC" || location == "WashingtonDC" && income >= 350000 && income <
1000000) {
statetax = .0875*income;
}
if (location == "DC" || location == "WashingtonDC" && income >= 1000000) {
statetax = .0895*income;
}
//11. GA Gerogia
if (location == "GA" || location == "Georgia" && income >= 0 && income < 750) {
statetax = .01*income;
}
if (location == "GA" || location == "Georgia" && income >= 750 && income < 2250) {
statetax = .02*income;
}
if (location == "GA" || location == "Georgia" && income >= 3750 && income < 5250) {
statetax = .04*income;
}
if (location == "GA" || location == "Georgia" && income >= 5250 && income < 7000) {
statetax = .05*income;
}
if (location == "GA" || location == "Georgia" && income >= 7000) {
statetax = .06*income;
}
//12. HI Hawaii
if (location == "HI" || location == "Hawaii" && income >= 0 && income < 2400) {
statetax = .014*income;
}
if (location == "HI" || location == "Hawaii" && income >= 2400 && income < 4800) {
statetax = .032*income;
}
if (location == "HI" || location == "Hawaii" && income >= 4800 && income < 9600) {
statetax = .055*income;
}
if (location == "HI" || location == "Hawaii" && income >= 9600 && income < 14400) {
statetax = .064*income;
}
if (location == "HI" || location == "Hawaii" && income >= 14400 && income < 19200) {
statetax = .068*income;
}
if (location == "HI" || location == "Hawaii" && income >= 19200 && income < 24000) {
statetax = .072*income;
}
if (location == "HI" || location == "Hawaii" && income >= 24000 && income < 36000) {
statetax = .076*income;
}
if (location == "HI" || location == "Hawaii" && income >= 36000 && income < 48000) {
statetax = .079*income;
}
if (location == "Hi" || location == "Hawaii" && income >= 48000) {
statetax = .0825*income;
}
//13. ID Idaho
if (location == "ID" || location == "Idaho" && income >= 0 && income < 1454) {
statetax = .016*income;
}
if (location == "ID" || location == "Idaho" && income >= 1454 && income < 2908) {
statetax = .036*income;
}
if (location == "ID" || location == "Idaho" && income >= 2908 && income < 4362) {
statetax = .041*income;
}
if (location == "ID" || location == "Idaho" && income >= 4362 && income < 5816) {
statetax = .051*income;
}
if (location == "ID" || location == "Idaho" && income >= 5816 && income < 7270) {
statetax = .061*income;
}
if (location == "ID" || location == "Idaho" && income >= 7270 && income < 10905) {
statetax = .071*income;
}
if (location == "ID" || location == "Idaho" && income >= 10905) {
statetax = .074*income;
}
//14. IL Illinois
if (location == "IL" || location == "Ilinois" && income >= 0) {
statetax = .0375*income;
}
//15. IN Indiana
if (location == "IN" || location == "Indiana" && income >= 0) {
statetax = .033*income;
}
//16. IA Iowa
if (location == "IA" || location == "Iowa" && income >= 0 && income < 1573) {
statetax = .0036*income;
}
if (location == "IA" || location == "Iowa" && income >= 1573 && income < 3146) {
statetax = .0072*income;
}
if (location == "IA" || location == "Iowa" && income >= 3146 && income < 6292) {
statetax = .0243*income;
}
if (location == "IA" || location == "Iowa" && income >= 6292 && income < 14157) {
statetax = .045*income;
}
if (location == "IA" || location == "Iowa" && income >= 14157 && income < 23595) {
statetax = .0612*income;
}
if (location == "IA" || location == "Iowa" && income >= 23595&& income < 31460) {
statetax = .0648*income;
}
if (location == "IA" || location == "Iowa" && income >= 31460 && income < 47190) {
statetax = .068*income;
}
if (location == "IA" || location == "Iowa" && income >= 47190 && income < 70785) {
statetax = .0792*income;
}
if (location == "IA" || location == "Iowa" && income >= 70785) {
statetax = .0898*income;
}
//17. KS Kansas
if (location == "KS" || location == "Kansas" && income >= 0 && income < 15000) {
statetax = .029*income;
}
if (location == "KS" || location == "Kansas" && income >= 15000 && income < 30000) {
statetax = .049*income;
}
if (location == "KS" || location == "Kansas" && income >= 30000) {
statetax = .052*income;
}
//18. KY Kentucky
if (location == "KT" || location == "Kentucky" && income >= 0 && income < 3000) {
statetax = .02*income;
}
if (location == "KT" || location == "Kentucky" && income >= 3000 && income < 4000) {
statetax = .03*income;
}
if (location == "KT" || location == "Kentucky" && income >= 4000 && income < 5000) {
statetax = .04*income;
}
if (location == "KT" || location == "Kentucky" && income >= 5000 && income < 8000) {
statetax = .05*income;
}
if (location == "KT" || location == "Kentucky" && income >= 8000 && income < 75000) {
statetax = .058*income;
}
if (location == "KT" || location == "Kentucky" && income >= 75000) {
statetax = .06*income;
}
//19. LA Louisiana
if (location == "LA" || location == "Louisiana" && income >= 0 && income < 12500) {
statetax = .02*income;
}
if (location == "LA" || location == "Louisiana" && income >= 12500 && income < 50000) {
statetax = .04*income;
}
if (location == "LA" || location == "Louisiana" && income >= 50000) {
statetax = .06*income;
}
//20. ME Maine
if (location == "ME" || location == "Maine" && income >= 0 && income < 21050) {
statetax = .058*income;
}
if (location == "ME" || location == "Maine" && income >= 21050 && income < 50000) {
statetax = .0675*income;
}
if (location == "ME" || location == "Maine" && income >= 50000) {
statetax = .0715*income;
}
//21. MD Maryland
if (location == "MD" || location == "Maryland" && income >= 0 && income < 1000) {
statetax = .02*income;
}
if (location == "MD" || location == "Maryland" && income >= 1000 && income < 2000) {
statetax = .03*income;
}
if (location == "MD" || location == "Maryland" && income >= 2000 && income < 3000) {
statetax = .04*income;
}
if (location == "MD" || location == "Maryland" && income >= 3000 && income < 100000) {
statetax = .0475*income;
}
if (location == "MD" || location == "Maryland" && income >= 125000 && income <
125000) {
statetax = .05*income;
}
if (location == "MD" || location == "Maryland" && income >= 125000 && income <
150000) {
statetax = .0525*income;
}
if (location == "MD" || location == "Maryland" && income >= 125000 && income <
150000) {
statetax = .055*income;
}
if (location == "MD" || location == "Maryland" && income >= 150000) {
statetax = .0575*income;
}
//22. MA Massachusetts
if (location == "MA" || location == "Massachusetts" && income >= 0) {
statetax = .051*income;
}
//23. MI Michigan
if (location == "MI" || location == "Michigan" && income >= 0) {
statetax = .0425*income;
}
//24. MN Minnesota
if (location == "MN" || location == "Minnesota" && income >= 0 && income < 25390) {
statetax = .05535*income;
}
if (location == "MN" || location == "Minnesota" && income >= 25390 && income < 83400)
{
statetax = .0705*income;
}
if (location == "MN" || location == "Minnesota" && income >= 83400 && income <
156911) {
statetax = .0785*income;
}
if (location == "MN" || location == "Minnesota" && income >= 156911) {
statetax = .0985*income;
}
//25. MS Mississippi
if (location == "MS" || location == "Mississippi" && income >= 0 && income < 5000) {
statetax = .03*income;
}
if (location == "MS" || location == "Mississippi" && income >= 5000 && income < 10000)
{
statetax = .04*income;
}
if (location == "MS" || location == "Mississippi" && income >=10000) {
statetax = .05*income;
}
//26. MO Missouri
if (location == "MO" || location == "Missouri" && income >= 0 && income < 1008) {
statetax = .015*income;
}
if (location == "MO" || location == "Missouri" && income >= 1008 && income < 2016) {
statetax = .02*income;
}
if (location == "MO" || location == "Missouri" && income >= 2016 && income < 3024) {
statetax = .025*income;
}
if (location == "MO" || location == "Missouri" && income >= 3024 && income < 4302) {
statetax = .03*income;
}
if (location == "MO" || location == "Missouri" && income >= 4302 && income < 5040) {
statetax = .035*income;
}
if (location == "MO" || location == "Missouri" && income >= 5040 && income < 6048) {
statetax = .04*income;
}
if (location == "MO" || location == "Missouri" && income >= 6048 && income < 7056) {
statetax = .045*income;
}
if (location == "MO" || location == "Missouri" && income >= 7056 && income <8064) {
statetax = .05*income;
}
if (location == "MO" || location == "Missouri" && income >= 8064 && income < 9-72) {
statetax = .055*income;
}
if (location == "MO" || location == "Missouri" && income >= 9072) {
statetax = .06*income;
}
//MN Montana
if (location == "MT" || location == "Montana" && income >= 0 && income < 2900)
{
statetax = .01*income;
}
if (location == "MT" || location == "Montana" && income >= 2900 && income <
5200) {
statetax = .02*income;
}
if (location == "MT" || location == "Montana" && income >= 5200 && income <
7900) {
statetax = .03*income;
}
if (location == "MT" || location == "Montana" && income >= 7900 && income <
10600) {
statetax = .04*income;
}
if (location == "MN" || location == "Montana" && income >= 10600 && income <
13600) {
statetax = .05*income;
}
if (location == "MT" || location == "Montana" && income >= 13600 && income <
17600) {
statetax = .06*income;
}
if (location == "MT" || location == "Montana" && income >= 17600) {
statetax = .069*income;
}
//NE Nebraska ***
if (location == "NE" || location == "Nebraska" && income >= 0 && income < 3090)
{
statetax = .0246*income;
}
if (location == "NE" || location == "Nebraska" && income >= 3090 && income <
18510) {
statetax = .0351*income;
}
if (location == "NE" || location == "Nebraska" && income >= 18510 && income <
29830) {
statetax = .0501*income;
}
if (location == "NE" || location == "Nebraska" && income >= 29830) {
statetax = .0684*income;
}
//NV Nevada
if (location == "NV" || location == "Nevada" && income >= 0) {
statetax = 0 * income;
}
//NH New Hampshire
if (location == "NH" || location == "New Hampshire" && income >= 0) {
statetax = .05*income;
}
//NJ New Jersey ***
if (location == "NJ" || location == "New Jersey" && income >= 0 && income <
20000) {
statetax = .014*income;
}
if (location == "NJ" || location == "New Jersey" && income >= 20000 && income <
35000) {
statetax = .0175*income;
}
if (location == "NJ" || location == "New Jersey" && income >= 35000 && income <
40000) {
statetax = .035*income;
}
if (location == "NJ" || location == "New Jersey" && income >= 40000 && income <
75000) {
statetax = .0553*income;
}
if (location == "NJ" || location == "New Jersey" && income >= 75000 && income <
500000) {
statetax = .0637*income;
}
if (location == "NJ" || location == "New Jersey" && income >= 500000) {
statetax = .0897*income;
}
//NM New Mexico ***
if (location == "NM" || location == "New Mexico" && income >= 0 && income <
5500) {
statetax = .017*income;
}
if (location == "NM" || location == "New Mexico" && income >= 5500 && income <
11000) {
statetax = .032*income;
}
if (location == "NM" || location == "New Mexico" && income >= 11000 && income
< 16000) {
statetax = .047*income;
}
if (location == "NM" || location == "New Mexico" && income >= 16000) {
statetax = .049*income;
}
//NY New York ***
if (location == "NY" || location == "New York" && income >= 0 && income < 8500)
{
statetax = .04*income;
}
if (location == "NY" || location == "New York" && income >= 8500 && income <
11700) {
statetax = .045*income;
}
if (location == "NY" || location == "New York" && income >= 11700 && income <
13900) {
statetax = .0525*income;
}
if (location == "NY" || location == "New York" && income >= 13900 && income <
21400) {
statetax = .059*income;
}
if (location == "NY" || location == "New York" && income >= 21400 && income <
80650) {
statetax = .0645*income;
}
if (location == "NY" || location == "New York" && income >= 80650 && income <
215400) {
statetax = .0665*income;
}
if (location == "NY" || location == "New York" && income >= 215400 && income <
1077550) {
statetax = .0685*income;
}
if (location == "NY" || location == "New York" && income >= 1077550) {
statetax = .0882*income;
}
//NC North Carolina
if (location == "NC" || location == "North Carolina" && income >= 0) {
statetax = .0575*income;
}
//ND North Dakota ***
if (location == "ND" || location == "North Dakota" && income >= 0 && income <
37950) {
statetax = .011*income;
}
if (location == "ND" || location == "North Dakota" && income >= 37950 && income
< 91900) {
statetax = .0204*income;
}
if (location == "ND" || location == "North Dakota" && income >= 91900 && income
< 191650) {
statetax = .0227*income;
}
if (location == "ND" || location == "North Dakota" && income >= 191650 &&
income < 416700) {
statetax = .0264*income;
}
if (location == "ND" || location == "North Dakota" && income >= 416700) {
statetax = .029*income;
}
//OH Ohio
if (location == "OH" || location == "Ohio" && income >= 0 && income < 5250) {
statetax = .005*income;
}
if (location == "OH" || location == "Ohio" && income >= 5250 && income < 10500)
{
statetax = .0099*income;
}
if (location == "OH" || location == "Ohio" && income >= 10500 && income <
15800) {
statetax = .0198*income;
}
if (location == "OH" || location == "Ohio" && income >= 15800 && income <
21100) {
statetax = .0248*income;
}
if (location == "OH" || location == "Ohio" && income >= 21100 && income <
42100) {
statetax = .0297*income;
}
if (location == "OH" || location == "Ohio" && income >= 42100 && income <
84200) {
statetax = .0348*income;
}
if (location == "OH" || location == "Ohio" && income >= 84200 && income <
105300) {
statetax = .0396*income;
}
if (location == "OH" || location == "Ohio" && income >= 105300 && income <
210600) {
statetax = .046*income;
}
if (location == "OH" || location == "Ohio" && income >= 210600) {
statetax = .05*income;
}
//OK Oklahoma ***
if (location == "OK" || location == "Oklahoma" && income >= 0 && income <
1000) {
statetax = .005*income;
}
if (location == "OK" || location == "Oklahoma" && income >= 1000 && income <
2500) {
statetax = .01*income;
}
if (location == "OK" || location == "Oklahoma" && income >= 2500 && income <
3750) {
statetax = .02*income;
}
if (location == "OK" || location == "Oklahoma" && income >= 3750 && income <
4900) {
statetax = .03*income;
}
if (location == "OK" || location == "Oklahoma" && income >= 4900 && income <
7200) {
statetax = .04*income;
}
if (location == "OK" || location == "Oklahoma" && income >= 7200) {
statetax = .05*income;
}
//OR Oregon ***
if (location == "OR" || location == "Oregon" && income >= 0 && income < 3350) {
statetax = .05*income;
}
if (location == "OR" || location == "Oregon" && income >= 3350 && income <
8450) {
statetax = .07*income;
}
if (location == "OR" || location == "Oregon" && income >= 8450 && income <
125000) {
statetax = .09*income;
}
if (location == "OR" || location == "Oregon" && income >= 125000) {
statetax = .099*income;
}
//PA Pennsylvania
if (location == "PA" || location == "Pennsylvania" && income >= 0) {
statetax = .0307*income;
}
//RI Rhode Island
if (location == "RI" || location == "Rhode Island" && income >= 0 && income <
61300) {
statetax = .0375*income;
}
if (location == "RI" || location == "Rhode Island" && income >= 61300 && income
< 139400) {
statetax = .0475*income;
}
if (location == "RI" || location == "Rhode Island" && income >= 139400) {
statetax = .0599*income;
}
//SC South Carolina
if (location == "SC" || location == "South Carolina" && income >= 0 && income <
2930) {
statetax = 0 * income;
}
if (location == "SC" || location == "South Carolina" && income >= 2930 &&
income < 5860) {
statetax = 0.03*income;
}
if (location == "SC" || location == "South Carolina" && income >= 5860 &&
income < 8790) {
statetax = 0.04*income;
}
if (location == "SC" || location == "South Carolina" && income >= 8790 &&
income < 11720) {
statetax = 0.05*income;
}
if (location == "SC" || location == "South Carolina" && income >= 11720 &&
income < 14650) {
statetax = 0.06*income;
}
if (location == "SC" || location == "South Carolina" && income >= 14650) {
statetax = 0.07*income;
}
//SD South Dakota
if (location == "SD" || location == "South Dakota" && income >= 0) {
statetax = 0 * income;
}
//TN Tennessee
if (location == "TN" || location == "Tennessee" && income >= 0) {
statetax = 0.05*income;
}
//TX Texas
if (location == "TX" || location == "Texas" && income >= 0) {
statetax = 0 * income;
}
//UT Utah
if (location == "UT" || location == "Utah" && income >= 0) {
statetax = 0.05*income;
}
//VT Vermont ***
if (location == "VT" || location == "Vermont" && income >= 0 && income < 37950)
{
statetax = 0.0355*income;
}
if (location == "VT" || location == "Vermont" && income >= 37950 && income <
91900) {
statetax = 0.068*income;
}
if (location == "VT" || location == "Vermont" && income >= 91900 && income <
191650) {
statetax = 0.078*income;
}
if (location == "VT" || location == "Vermont" && income >= 191650 && income <
416700) {
statetax = 0.088*income;
}
if (location == "VT" || location == "Vermont" && income >= 416700) {
statetax = 0.0895*income;
}
//VA Virginia
if (location == "VA" || location == "Virginia" && income >= 0 && income < 3000) {
statetax = 0.02*income;
}
if (location == "VA" || location == "Virginia" && income >= 3000 && income <
5000) {
statetax = 0.03*income;
}
if (location == "VA" || location == "Virginia" && income >= 5000 && income <
17000) {
statetax = 0.05*income;
}
if (location == "VA" || location == "Virginia" && income >= 17000) {
statetax = 0.0575*income;
}
//WA Washington
if (location == "WA" || location == "Washington" && income >= 0) {
statetax = 0 * income;
}
//WV West Virginia
if (location == "WV" || location == "West Virginia" && income >= 0 && income <
10000) {
statetax = 0.03*income;
}
if (location == "WV" || location == "West Virginia" && income >= 10000 &&
income < 25000) {
statetax = 0.04*income;
}
if (location == "WV" || location == "West Virginia" && income >= 25000 &&
income < 40000) {
statetax = 0.045*income;
}
if (location == "WV" || location == "West Virginia" && income >= 40000 &&
income < 60000) {
statetax = 0.06*income;
}
if (location == "WV" || location == "West Virginia" && income >= 60000) {
statetax = 0.065*income;
}
//WI Wisconsin ***
if (location == "WI" || location == "Wisconsin" && income >= 0 && income <
11230) {
statetax = 0.04*income;
}
if (location == "WI" || location == "Wisconsin" && income >= 11230 && income <
22470) {
statetax = 0.0584*income;
}
if (location == "WI" || location == "Wisconsin" && income >= 22470 && income <
247350) {
statetax = 0.0627*income;
}
if (location == "WI" || location == "Wisconsin" && income >= 247350) {
statetax = 0.0765*income;
}
//WY Wyoming
if (location == "WY" || location == "Wyoming" && income >= 0) {
statetax = 0 * income;
}
}
if (status == 2 || status == 3 || status == 4) {
//1. AL Alabama
if (location == "AL" || location == "Alabama" && income >= 0 && income < 1000) {
statetax = .02*income;
}
if (location == "AL" || location == "Alabama" && income >= 1000 && income < 6000) {
statetax = .04*income;
}
if (location == "AL" || location == "Alabama" && income >= 6000) {
statetax = .05*income;
}
//2. AK Alaska
if (location == "AK" || location == "Alaska") {
statetax = 0;
}
//3. AZ Arizona
if (location == "AZ" || location == "Arizona" && income >= 0 && income < 20357) {
statetax = .0259*income;
}
if (location == "AZ" || location == "Arizona" && income >= 20357 && income < 50890) {
statetax = .0288*income;
}
if (location == "AZ" || location == "Arizona" && income >= 50890 && income < 101779) {
statetax = .0336*income;
}
if (location == "AZ" || location == "Arizona" && income >= 101779 && income < 305336) {
statetax = .0424*income;
}
if (location == "AZ" || location == "Arizona" && income >= 305336) {
statetax = .0454*income;
}
//4. AR Arkansas
if (location == "AR" || location == "Arkansas" && income >= 0 && income < 4299) {
statetax = .009*income;
}
if (location == "AR" || location == "Arkansas" && income >= 4299 && income < 8500) {
statetax = .025*income;
}
if (location == "AR" || location == "Arkansas" && income >= 8500 && income < 12699) {
statetax = .035*income;
}
if (location == "AR" || location == "Arkansas" && income >= 12699 && income < 21199) {
statetax = .045*income;
}
if (location == "AR" || location == "Arkansas" && income >= 21199 && income < 35100) {
statetax = .06*income;
}
if (location == "AR" || location == "Arkansas" && income >= 35100) {
statetax = .0690*income;
}
//5. CA California
if (location == "CA" || location == "California" && income >= 0 && income < 16030) {
statetax = .01*income;
}
if (location == "CA" || location == "California" && income >= 16030 && income < 38002) {
statetax = .02*income;
}
if (location == "CA" || location == "California" && income >= 38002 && income < 59978) {
statetax = .04*income;
}
if (location == "CA" || location == "California" && income >= 59978 && income < 83258) {
statetax = .06*income;
}
if (location == "CA" || location == "California" && income >= 83258 && income < 105224) {
statetax = .08*income;
}
if (location == "CA" || location == "California" && income >= 105224 && income < 537500) {
statetax = .093*income;
}
if (location == "CA" || location == "California" && income >= 537500 && income < 644998) {
statetax = .103*income;
}
if (location == "CA" || location == "California" && income >= 644998 && income < 1000000) {
statetax = .113*income;
}
if (location == "CA" || location == "California" && income >= 1000000 && income < 1074996) {
statetax = .123*income;
}
if (location == "CA" || location == "California" && income >= 1074996) {
statetax = .133*income;
}
//6. CO Colorado
if (location == "CO" || location == "Colorado") {
statetax = 0.0463*income;
}
//7. CT Connecticut
if (location == "CT" || location == "Connecticut" && income >= 0 && income < 20000) {
statetax = .03*income;
}
if (location == "CT" || location == "Connecticut" && income >= 20000 && income < 100000) {
statetax = .05*income;
}
if (location == "CT" || location == "Connecticut" && income >= 100000 && income < 200000) {
statetax = .0550*income;
}
if (location == "CT" || location == "Connecticut" && income >= 200000 && income < 400000) {
statetax = .06*income;
}
if (location == "CT" || location == "Connecticut" && income >= 400000 && income < 500000) {
statetax = .0650*income;
}
if (location == "CT" || location == "Connecticut" && income >= 500000 && income < 1000000) {
statetax = .0690*income;
}
if (location == "CT" || location == "Connecticut" && income >= 1000000) {
statetax = .0699*income;
}
//8. DE Delaware
if (location == "DE" || location == "Delaware" && income >= 2000 && income < 5000) {
statetax = .022*income;
}
if (location == "DE" || location == "Delaware" && income >= 5000 && income < 10000) {
statetax = .039*income;
}
if (location == "DE" || location == "Delaware" && income >= 10000 && income < 20000) {
statetax = .048*income;
}
if (location == "DE" || location == "Delaware" && income >= 20000 && income < 25000) {
statetax = .052*income;
}
if (location == "DE" || location == "Delaware" && income >= 25000 && income < 60000) {
statetax = .0555*income;
}
if (location == "DE" || location == "Delaware" && income >= 600000) {
statetax = .066*income;
}
//9. FL Florida
if (location == "FL" || location == "Florida") {
statetax = 0;
}
//10. DC. District of Columbia, WashingtonDC
if (location == "DC" || location == "WashingtonDC" && income >= 0 && income < 10000) {
statetax = .04*income;
}
if (location == "DC" || location == "WashingtonDC" && income >= 10000 && income < 40000) {
statetax = .06*income;
}
if (location == "DC" || location == "WashingtonDC" && income >= 40000 && income < 60000) {
statetax = .065*income;
}
if (location == "DC" || location == "WashingtonDC" && income >= 60000 && income < 350000) {
statetax = .085*income;
}
if (location == "DC" || location == "WashingtonDC" && income >= 350000 && income <
1000000) {
statetax = .0875*income;
}
if (location == "DC" || location == "WashingtonDC" && income >= 1000000) {
statetax = .0895*income;
}
//11. GA Gerogia
if (location == "GA" || location == "Georgia" && income >= 0 && income < 1000) {
statetax = .01*income;
}
if (location == "GA" || location == "Georgia" && income >= 1000 && income < 3000) {
statetax = .02*income;
}
if (location == "GA" || location == "Georgia" && income >= 3000 && income < 5000) {
statetax = .04*income;
}
if (location == "GA" || location == "Georgia" && income >= 7000 && income < 10000) {
statetax = .05*income;
}
if (location == "GA" || location == "Georgia" && income >= 10000) {
statetax = .06*income;
}
//12. HI Hawaii
if (location == "HI" || location == "Hawaii" && income >= 0 && income < 4800) {
statetax = .014*income;
}
if (location == "HI" || location == "Hawaii" && income >= 4800 && income < 9600) {
statetax = .032*income;
}
if (location == "HI" || location == "Hawaii" && income >= 9600 && income < 19200) {
statetax = .055*income;
}
if (location == "HI" || location == "Hawaii" && income >= 19200 && income < 28800) {
statetax = .064*income;
}
if (location == "HI" || location == "Hawaii" && income >= 28800 && income < 38400) {
statetax = .068*income;
}
if (location == "HI" || location == "Hawaii" && income >= 38400 && income < 48000) {
statetax = .072*income;
}
if (location == "HI" || location == "Hawaii" && income >= 48000 && income < 72000) {
statetax = .076*income;
}
if (location == "HI" || location == "Hawaii" && income >= 72000 && income < 96000) {
statetax = .079*income;
}
if (location == "Hi" || location == "Hawaii" && income >= 96000) {
statetax = .0825*income;
}
//13. ID Idaho
if (location == "ID" || location == "Idaho" && income >= 0 && income < 2908) {
statetax = .016*income;
}
if (location == "ID" || location == "Idaho" && income >= 2908 && income < 5816) {
statetax = .036*income;
}
if (location == "ID" || location == "Idaho" && income >= 5816 && income < 8724) {
statetax = .041*income;
}
if (location == "ID" || location == "Idaho" && income >= 8724 && income < 11632) {
statetax = .051*income;
}
if (location == "ID" || location == "Idaho" && income >= 11632 && income < 14540) {
statetax = .061*income;
}
if (location == "ID" || location == "Idaho" && income >= 14540 && income < 21810) {
statetax = .071*income;
}
if (location == "ID" || location == "Idaho" && income >= 21810) {
statetax = .074*income;
}
//14. IL Illinois
if (location == "IL" || location == "Ilinois" && income >= 0) {
statetax = .0375*income;
}
//15. IN Indiana
if (location == "IN" || location == "Indiana" && income >= 0) {
statetax = .033*income;
}
//16. IA Iowa
if (location == "IA" || location == "Iowa" && income >= 0 && income < 1573) {
statetax = .0036*income;
}
if (location == "IA" || location == "Iowa" && income >= 1573 && income < 3146) {
statetax = .0072*income;
}
if (location == "IA" || location == "Iowa" && income >= 3146 && income < 6292) {
statetax = .0243*income;
}
if (location == "IA" || location == "Iowa" && income >= 6292 && income < 14157) {
statetax = .045*income;
}
if (location == "IA" || location == "Iowa" && income >= 14157 && income < 23595) {
statetax = .0612*income;
}
if (location == "IA" || location == "Iowa" && income >= 23595 && income < 31460) {
statetax = .0648*income;
}
if (location == "IA" || location == "Iowa" && income >= 31460 && income < 47190) {
statetax = .068*income;
}
if (location == "IA" || location == "Iowa" && income >= 47190 && income < 70785) {
statetax = .0792*income;
}
if (location == "IA" || location == "Iowa" && income >= 70785) {
statetax = .0898*income;
}
//17. KS Kansas
if (location == "KS" || location == "Kansas" && income >= 0 && income < 30000) {
statetax = .029*income;
}
if (location == "KS" || location == "Kansas" && income >= 30000&& income < 60000) {
statetax = .049*income;
}
if (location == "KS" || location == "Kansas" && income >= 60000) {
statetax = .052*income;
}
//18. KY Kentucky
if (location == "KT" || location == "Kentucky" && income >= 0 && income < 3000) {
statetax = .02*income;
}
if (location == "KT" || location == "Kentucky" && income >= 3000 && income < 4000) {
statetax = .03*income;
}
if (location == "KT" || location == "Kentucky" && income >= 4000 && income < 5000) {
statetax = .04*income;
}
if (location == "KT" || location == "Kentucky" && income >= 5000 && income < 8000) {
statetax = .05*income;
}
if (location == "KT" || location == "Kentucky" && income >= 8000 && income < 75000) {
statetax = .058*income;
}
if (location == "KT" || location == "Kentucky" && income >= 75000) {
statetax = .06*income;
}
//19. LA Louisiana
if (location == "LA" || location == "Louisiana" && income >= 0 && income < 12500) {
statetax = .02*income;
}
if (location == "LA" || location == "Louisiana" && income >= 12500 && income < 100000) {
statetax = .04*income;
}
if (location == "LA" || location == "Louisiana" && income >= 100000) {
statetax = .06*income;
}
//20. ME Maine
if (location == "ME" || location == "Maine" && income >= 0 && income < 42099) {
statetax = .058*income;
}
if (location == "ME" || location == "Maine" && income >= 42099 && income < 74999) {
statetax = .0675*income;
}
if (location == "ME" || location == "Maine" && income >= 74999) {
statetax = .0715*income;
}
//21. MD Maryland
if (location == "MD" || location == "Maryland" && income >= 0 && income < 1000) {
statetax = .02*income;
}
if (location == "MD" || location == "Maryland" && income >= 1000 && income < 2000) {
statetax = .03*income;
}
if (location == "MD" || location == "Maryland" && income >= 2000 && income < 3000) {
statetax = .04*income;
}
if (location == "MD" || location == "Maryland" && income >= 3000 && income < 150000) {
statetax = .0475*income;
}
if (location == "MD" || location == "Maryland" && income >= 150000 && income < 175000) {
statetax = .05*income;
}
if (location == "MD" || location == "Maryland" && income >= 175000 && income < 225000) {
statetax = .0525*income;
}
if (location == "MD" || location == "Maryland" && income >= 225000 && income < 300000) {
statetax = .055*income;
}
if (location == "MD" || location == "Maryland" && income >= 300000) {
statetax = .0575*income;
}
//22. MA Massachusetts
if (location == "MA" || location == "Massachusetts" && income >= 0) {
statetax = .051*income;
}
//23. MI Michigan
if (location == "MI" || location == "Michigan" && income >= 0) {
statetax = .0425*income;
}
//24. MN Minnesota
if (location == "MN" || location == "Minnesota" && income >= 0 && income < 37110) {
statetax = .05535*income;
}
if (location == "MN" || location == "Minnesota" && income >=37110 && income < 147450) {
statetax = .0705*income;
}
if (location == "MN" || location == "Minnesota" && income >= 147450 && income < 261510) {
statetax = .0785*income;
}
if (location == "MN" || location == "Minnesota" && income >= 261510) {
statetax = .0985*income;
}
//25. MS Mississippi
if (location == "MS" || location == "Mississippi" && income >= 0 && income < 5000) {
statetax = .03*income;
}
if (location == "MS" || location == "Mississippi" && income >= 5000 && income < 10000) {
statetax = .04*income;
}
if (location == "MS" || location == "Mississippi" && income >= 10000) {
statetax = .05*income;
}
//26. MO Missouri
if (location == "MO" || location == "Missouri" && income >= 0 && income < 1008) {
statetax = .015*income;
}
if (location == "MO" || location == "Missouri" && income >= 1008 && income < 2016) {
statetax = .02*income;
}
if (location == "MO" || location == "Missouri" && income >= 2016 && income < 3024) {
statetax = .025*income;
}
if (location == "MO" || location == "Missouri" && income >= 3024 && income < 4302) {
statetax = .03*income;
}
if (location == "MO" || location == "Missouri" && income >= 4302 && income < 5040) {
statetax = .035*income;
}
if (location == "MO" || location == "Missouri" && income >= 5040 && income < 6048) {
statetax = .04*income;
}
if (location == "MO" || location == "Missouri" && income >= 6048 && income < 7056) {
statetax = .045*income;
}
if (location == "MO" || location == "Missouri" && income >= 7056 && income < 8064) {
statetax = .05*income;
}
if (location == "MO" || location == "Missouri" && income >= 8064 && income < 9 - 72) {
statetax = .055*income;
}
if (location == "MO" || location == "Missouri" && income >= 9072) {
statetax = .06*income;
}
//MN Montana
if (location == "MN" || location == "Montana" && income >= 0 && income < 2900)
{
statetax = .01*income;
}
if (location == "MN" || location == "Montana" && income >= 2900 && income <
5200) {
statetax = .02*income;
}
if (location == "MN" || location == "Montana" && income >= 5200 && income <
7900) {
statetax = .03*income;
}
if (location == "MN" || location == "Montana" && income >= 7900 && income <
10600) {
statetax = .04*income;
}
if (location == "MN" || location == "Montana" && income >= 10600 && income <
13600) {
statetax = .05*income;
}
if (location == "MN" || location == "Montana" && income >= 13600 && income <
17600) {
statetax = .06*income;
}
if (location == "MN" || location == "Montana" && income >= 17600) {
statetax = .069*income;
}
//NE Nebraska ***
if (location == "NE" || location == "Nebraska" && income >= 0 && income < 6170)
{
statetax = .0246*income;
}
if (location == "NE" || location == "Nebraska" && income >= 6170 && income <
37030) {
statetax = .0351*income;
}
if (location == "NE" || location == "Nebraska" && income >= 37030 && income <
59660) {
statetax = .0501*income;
}
if (location == "NE" || location == "Nebraska" && income >= 59660) {
statetax = .0684*income;
}
//NV Nevada
if (location == "NV" || location == "Nevada" && income >= 0) {
statetax = 0 * income;
}
//NH New Hampshire
if (location == "NH" || location == "New Hampshire" && income >= 0) {
statetax = .05*income;
}
//NJ New Jersey ***
if (location == "NJ" || location == "New Jersey" && income >= 0 && income <
20000) {
statetax = .014*income;
}
if (location == "NJ" || location == "New Jersey" && income >= 20000 && income <
50000) {
statetax = .0175*income;
}
if (location == "NJ" || location == "New Jersey" && income >= 50000 && income <
70000) {
statetax = .0350*income;
}
if (location == "NJ" || location == "New Jersey" && income >= 70000 && income <
80000) {
statetax = .0553*income;
}
if (location == "NJ" || location == "New Jersey" && income >= 80000 && income <
150000) {
statetax = .0637*income;
}
if (location == "NJ" || location == "New Jersey" && income >= 150000) {
statetax = .0897*income;
}
//NM New Mexico ***
if (location == "NM" || location == "New Mexico" && income >= 0 && income <
8000) {
statetax = .017*income;
}
if (location == "NM" || location == "New Mexico" && income >= 8000 && income <
16000) {
statetax = .032*income;
}
if (location == "NM" || location == "New Mexico" && income >= 16000 && income
< 24000) {
statetax = .047*income;
}
if (location == "NM" || location == "New Mexico" && income >= 24000) {
statetax = .049*income;
}
//NY New York ***
if (location == "NY" || location == "New York" && income >= 0 && income <
17150) {
statetax = .04*income;
}
if (location == "NY" || location == "New York" && income >= 17150 && income <
23600) {
statetax = .045*income;
}
if (location == "NY" || location == "New York" && income >= 23600 && income <
27900) {
statetax = .0525*income;
}
if (location == "NY" || location == "New York" && income >= 27900 && income <
43000) {
statetax = .059*income;
}
if (location == "NY" || location == "New York" && income >= 43000 && income <
161550) {
statetax = .0645*income;
}
if (location == "NY" || location == "New York" && income >= 161550 && income <
323200) {
statetax = .0665*income;
}
if (location == "NY" || location == "New York" && income >= 323200 && income <
2155350) {
statetax = .0685*income;
}
if (location == "NY" || location == "New York" && income >= 2155350) {
statetax = .0882*income;
}
//NC North Carolina
if (location == "NC" || location == "North Carolina" && income >= 0) {
statetax = .0575*income;
}
//ND North Dakota ***
if (location == "ND" || location == "North Dakota" && income >= 0 && income <
63400) {
statetax = .011*income;
}
if (location == "ND" || location == "North Dakota" && income >= 63400 && income
< 153100) {
statetax = .0204*income;
}
if (location == "ND" || location == "North Dakota" && income >= 153100 &&
income < 233350) {
statetax = .0227*income;
}
if (location == "ND" || location == "North Dakota" && income >= 233350 &&
income < 416700) {
statetax = .0264*income;
}
if (location == "ND" || location == "North Dakota" && income >= 416700) {
statetax = .029*income;
}
//OH Ohio
if (location == "OH" || location == "Ohio" && income >= 0 && income < 5250) {
statetax = .005*income;
}
if (location == "OH" || location == "Ohio" && income >= 5250 && income < 10500)
{
statetax = .0099*income;
}
if (location == "OH" || location == "Ohio" && income >= 10500 && income <
15800) {
statetax = .0198*income;
}
if (location == "OH" || location == "Ohio" && income >= 15800 && income <
21100) {
statetax = .0248*income;
}
if (location == "OH" || location == "Ohio" && income >= 21100 && income <
42100) {
statetax = .0297*income;
}
if (location == "OH" || location == "Ohio" && income >= 42100 && income <
84200) {
statetax = .0348*income;
}
if (location == "OH" || location == "Ohio" && income >= 84200 && income <
105300) {
statetax = .0396*income;
}
if (location == "OH" || location == "Ohio" && income >= 105300 && income <
210600) {
statetax = .046*income;
}
if (location == "OH" || location == "Ohio" && income >= 210600) {
statetax = .05*income;
}
//OK Oklahoma ***
if (location == "OK" || location == "Oklahoma" && income >= 0 && income <
2000) {
statetax = .005*income;
}
if (location == "OK" || location == "Oklahoma" && income >= 2000 && income <
5000) {
statetax = .01*income;
}
if (location == "OK" || location == "Oklahoma" && income >= 5000 && income <
7500) {
statetax = .02*income;
}
if (location == "OK" || location == "Oklahoma" && income >= 7500 && income <
9800) {
statetax = .03*income;
}
if (location == "OK" || location == "Oklahoma" && income >= 9800 && income <
12200) {
statetax = .04*income;
}
if (location == "OK" || location == "Oklahoma" && income >= 12200) {
statetax = .05*income;
}
//OR Oregon ***
if (location == "OR" || location == "Oregon" && income >= 0 && income < 6700) {
statetax = .05*income;
}
if (location == "OR" || location == "Oregon" && income >= 6700 && income <
16900) {
statetax = .07*income;
}
if (location == "OR" || location == "Oregon" && income >= 16900 && income <
250000) {
statetax = .09*income;
}
if (location == "OR" || location == "Oregon" && income >= 250000) {
statetax = .099*income;
}
//PA Pennsylvania
if (location == "PA" || location == "Pennsylvania" && income >= 0) {
statetax = .0307*income;
}
//RI Rhode Island
if (location == "RI" || location == "Rhode Island" && income >= 0 && income <
61300) {
statetax = .0375*income;
}
if (location == "RI" || location == "Rhode Island" && income >= 61300 && income
< 139400) {
statetax = .0475*income;
}
if (location == "RI" || location == "Rhode Island" && income >= 139400) {
statetax = .0599*income;
}
//SC South Carolina
if (location == "SC" || location == "South Carolina" && income >= 0 && income <
2930) {
statetax = 0 * income;
}
if (location == "SC" || location == "South Carolina" && income >= 2930 &&
income < 5860) {
statetax = 0.03*income;
}
if (location == "SC" || location == "South Carolina" && income >= 5860 &&
income < 8790) {
statetax = 0.04*income;
}
if (location == "SC" || location == "South Carolina" && income >= 8790 &&
income < 11720) {
statetax = 0.05*income;
}
if (location == "SC" || location == "South Carolina" && income >= 11720 &&
income < 14650) {
statetax = 0.06*income;
}
if (location == "SC" || location == "South Carolina" && income >= 14650) {
statetax = 0.07*income;
}
//SD South Dakota
if (location == "SD" || location == "South Dakota" && income >= 0) {
statetax = 0 * income;
}
//TN Tennessee
if (location == "TN" || location == "Tennessee" && income >= 0) {
statetax = 0.05*income;
}
//TX Texas
if (location == "TX" || location == "Texas" && income >= 0) {
statetax = 0 * income;
}
//UT Utah
if (location == "UT" || location == "Utah" && income >= 0) {
statetax = 0.05*income;
}
//VT Vermont ***
if (location == "VT" || location == "Vermont" && income >= 0 && income < 63350)
{
statetax = 0.0355*income;
}
if (location == "VT" || location == "Vermont" && income >= 63350 && income <
153100) {
statetax = 0.068*income;
}
if (location == "VT" || location == "Vermont" && income >= 153100 && income <
233350) {
statetax = 0.078*income;
}
if (location == "VT" || location == "Vermont" && income >= 233350 && income <
416700) {
statetax = 0.088*income;
}
if (location == "VT" || location == "Vermont" && income >= 416700) {
statetax = 0.0895*income;
}
//VA Virginia
if (location == "VA" || location == "Virginia" && income >= 0 && income < 3000) {
statetax = 0.02*income;
}
if (location == "VA" || location == "Virginia" && income >= 3000 && income <
5000) {
statetax = 0.03*income;
}
if (location == "VA" || location == "Virginia" && income >= 5000 && income <
17000) {
statetax = 0.05*income;
}
if (location == "VA" || location == "Virginia" && income >= 17000) {
statetax = 0.0575*income;
}
//WA Washington
if (location == "WA" || location == "Washington" && income >= 0) {
statetax = 0 * income;
}
//WV West Virginia
if (location == "WV" || location == "West Virginia" && income >= 0 && income <
10000) {
statetax = 0.03*income;
}
if (location == "WV" || location == "West Virginia" && income >= 10000 &&
income < 25000) {
statetax = 0.04*income;
}
if (location == "WV" || location == "West Virginia" && income >= 25000 &&
income < 40000) {
statetax = 0.045*income;
}
if (location == "WV" || location == "West Virginia" && income >= 40000 &&
income < 60000) {
statetax = 0.06*income;
}
if (location == "WV" || location == "West Virginia" && income >= 60000) {
statetax = 0.065*income;
}
//WI Wisconsin ***
if (location == "WI" || location == "Wisconsin" && income >= 0 && income <
14980) {
statetax = 0.04*income;
}
if (location == "WI" || location == "Wisconsin" && income >= 14980 && income <
29960) {
statetax = 0.0584*income;
}
if (location == "WI" || location == "Wisconsin" && income >= 29960 && income <
329810) {
statetax = 0.0627*income;
}
if (location == "WI" || location == "Wisconsin" && income >= 329810) {
statetax = 0.0765*income;
}
//WY Wyoming
if (location == "WY" || location == "Wyoming" && income >= 0) {
statetax = 0 * income;
}
}
cout << "Your state tax is: $" << statetax << endl;
writer.open("TaxCalc.txt", ios::app);
writer << "State: " << statetax << endl;
writer.close();
}
void Calculator::fica(float income) {
float ficatax = 0;
ficatax = .0765*income;
cout << "Your FICA tax is: $" << ficatax << endl;
writer.open("TaxCalc.txt", ios::app);
writer << "FICA: " << ficatax << endl;
writer << " " << endl;
writer.close();
}
int main() {
Calculator myVar;
int status;
float income;
string location;
string who;
string who2;
cout << "What is your first name?" << endl;
cin >> who;
cout << "What is your last name?" << endl;
cin >> who2;
cout << "What is your marital status?" << endl;
cout << "1. Single filer" << endl;
cout << "2. Married filing jointly or qualifying widower" << endl;
cout << "3. Married filing separately" << endl;
cout << "4. Head of household" << endl;
cin >> status;
cout << "What is your income?" << endl;
cin >> income;
cout << "What state do you live in?" << endl;
cin >> location;
myVar.name(who);
myVar.name2(who2);
myVar.fed(status, income);
myVar.state(location, income, status);
myVar.fica(income);
system("pause");
return 0;
}



