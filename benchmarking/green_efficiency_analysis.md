## Measurement Methodology

In the first task, I measured the execution time for a deterministic computation to understand timing variability and establish a baseline. This was doing using the "clock()" function. Through this function in the script I was able to generate the amount of iterations and the execution time of the program. I then ran this program multiple times to see the difference of the execution time. 

For the next task, running the same "clock()" function, I had to compare the results of the different algorithm speeds. This was done by firstly running the program 3 times. Through those 3 runs, I was able to see 4 things. 1: The Naive Algorithm Result (let's call this "NAR"), 2: The Naive Algorithm Time (let's call this "NAT"), 3: The Single-Pass Algorithm Result (SPAR), and lastly the Single-Pass Algorithm Time (SPAT). 

## Observed Performance Differenences

The results produced from the results (NAR & SPAR) were the same and did not change during the runs. But the results of time (NAT & SPAT) did change.So, the results from the NAT were: Run 1: 2.756034 seconds. Run 2: 2.745702. Run 3: 2.759070 seconds. So to calculate the average seconds of the Naive Algorith Time, I added the results together ( 2.756034 + 2.745702 + 2.759070 ) which gave us the sum of 8.260806 and since there were 3 runs, I divided the sum by 3, which gave us the result of 2.753602 seconds as the NAT average.

The same formula was also done to calculate the average for the SPAT. The results from the 3 runs were: Run 1: 0.000106 seconds, Run 2: 0.000106 seconds. Run 3: 0.000111 seconds. So to calculate the average, I once again get the sum; 0.000106 + 0.000106 + 0.000111 = 0.000323 and then divide that by 3, which gives us 0.00010767 seconds or (1.0767e-4 seconds). 

Immediately we can notice one result is significantly faster (SPAT) than the other (NAT). But just how much faster you might wonder? This is worked out by taking the bigger number (2.753602) and dividing it by the smaller number (0.00010767) which gives us the value of 25,575.25. This means that the single-pass algorithm (SPAT) is 25,575x faster than the naive algorithm (NAT).



In the instrumentation lab, I took four clock() readings.  
