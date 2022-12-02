#include <stdio.h>

int main(void) {
    int userInput;
    int localLow = 0;
    int localHigh = 0;
    int maxProfit = 0;
    
    printf("Enter stock prices for each day:\n");       // Input prompt
    
    for (scanf(" %d", &userInput); userInput >= 0; scanf(" %d", &userInput)) {         // Loop to run for every input until negative number is entered
        if (localLow == 0 || userInput < localLow) {
            localLow = userInput;                                                      // If ne lowest value is found, update localLow and reset localHigh 
            localHigh = 0;
        }

        if (localHigh == 0 || userInput > localHigh) {
            localHigh = userInput;                                                     // Update localHigh
        }
        
        if (localHigh - localLow > maxProfit) {
            maxProfit = localHigh - localLow;                                          // If new highest possible profit is found, update maxProfit
        }
    }

    printf("%d\n", maxProfit);                                                         // Output maxProfit

    return 0;
}