/* Change Lab | Lew Piper III | 011263249 */

#include<stdio.h>

//Define file variable to point to
FILE *fp;

int main(void) {
	//Declaration of variables
	double item_cost = 21.17;
	double ammount_tendered = 100.00;
	
	double twenty = 20.00;
	double ten = 10.00;
	double five = 5.00;
	double one = 1.00;
	
	double quarter = .25;
	double dime = .10;
	double nickel = .05;
	double penny = .01;
	
	int const pennies_per_dollar = 100;
	
	
	//Conversion to Pennies
	int item_cost_pennies = item_cost * pennies_per_dollar;
	int ammount_tendered_pennies = ammount_tendered * pennies_per_dollar;
	
	int twenty_dollars_pennies = twenty * pennies_per_dollar;
	int ten_dollars_pennies = ten * pennies_per_dollar;
	int five_dollars_pennies = five * pennies_per_dollar;
	int one_dollars_pennies = one * pennies_per_dollar;
		
	int quarter_pennies = quarter * pennies_per_dollar;
	int dime_pennies = dime * pennies_per_dollar;
	int nickel_pennies = nickel * pennies_per_dollar;
	int penny_pennies = penny * pennies_per_dollar;
		
		//Open file to print to
		fp = fopen("csis.txt", "w");
		
		
		//Calculations
		int change = ammount_tendered_pennies - item_cost_pennies;
		
		//Bills
		//20's
		int twenty_dollar_change = change / twenty_dollars_pennies;
		int leftover = change % twenty_dollars_pennies;
		//10's
		int ten_dollar_change = leftover / ten_dollars_pennies;
		leftover = leftover % ten_dollars_pennies;
		//5's
		int five_dollar_change = leftover / five_dollars_pennies;
		leftover = leftover % five_dollars_pennies;
		//1's 
		int one_dollar_change = leftover / one_dollars_pennies;
		leftover = leftover % one_dollars_pennies;
		
		//Coins
		//Quarters
		int quarters_change = leftover / quarter_pennies;
		leftover = leftover % quarter_pennies;
		//Dimes
		int dimes_change = leftover / dime_pennies;
		leftover = leftover % dime_pennies;
		//Nickels
		int nickels_change = leftover / nickel_pennies;
		leftover = leftover % nickel_pennies;
		//Pennies
		int pennies_change = leftover / penny_pennies;
		leftover = leftover % penny_pennies;
		
		
		//Presentation of the results 
	    printf("Below is teh change to be provided in bigger bills to coins.\n");
		printf("\n");
		printf("20's   10's   5's   1's   .25   .10   .05   .01\n");
		printf("----   ----   ---   ---   ---   ---   ---   ---\n");
		printf(" %d      %d      %d     %d     %d     %d     %d     %d\n",twenty_dollar_change, ten_dollar_change, five_dollar_change, one_dollar_change, quarters_change, dimes_change, nickels_change, pennies_change);
		
		fprintf(fp,"Below is teh change to be provided in bigger bills to coins.\n");
		fprintf(fp,"\n");
		fprintf(fp,"20's   10's   5's   1's   .25   .10   .05   .01\n");
		fprintf(fp,"----   ----   ---   ---   ---   ---   ---   ---\n");
		fprintf(fp," %d      %d      %d     %d     %d     %d     %d     %d\n",twenty_dollar_change, ten_dollar_change, five_dollar_change, one_dollar_change, quarters_change, dimes_change, nickels_change, pennies_change);
	
		
		

		//Close the file and exit the program
		fclose(fp);
		return 0;
}