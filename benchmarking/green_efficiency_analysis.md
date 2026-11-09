## Measurement Methodology

In the first task, I measured the execution time for a deterministic computation to understand timing variability and establish a baseline. This was doing using the "clock()" function. Through this function in the script I was able to generate the amount of iterations and the execution time of the program. I then ran this program multiple times to see the difference of the execution time. 

For the next task, running the same "clock()" function, I had to compare the results of the different algorithm speeds. This was done by firstly running the program 3 times. Through those 3 runs, I was able to see 4 things. 1: The Naive Algorithm Result (let's call this "NAR"), 2: The Naive Algorithm Time (let's call this "NAT"), 3: The Single-Pass Algorithm Result (SPAR), and lastly the Single-Pass Algorithm Time (SPAT). 

In the instrumentation lab, I took four clock() readings and they produced four timings. For my readings, 
'start' was taken before build_dataset();,
'build_end' was taken after build_dataset; and before process_dataset();,
'process_end' was taken after process_dataset(); and before reduce_checksum();, and
'reduce_end' was taken after reduce_checksum();.

Each difference is in clock ticks. Multiplying by 1.0 and dividing by CLOCKS_PER_SEC converts it to seconds, and the 1.0 keeps the decimals. One reading serves as the end of one phase and then begins the next. That means that there is no overlap between phases, this same rule is applied to all three pphases which keeps the script consistent.

## Observed Performance Differenences

The results produced from the results (NAR & SPAR) were the same and did not change during the runs. But the results of time (NAT & SPAT) did change.So, the results from the NAT were: Run 1: 2.756034 seconds. Run 2: 2.745702. Run 3: 2.759070 seconds. So to calculate the average seconds of the Naive Algorith Time, I added the results together ( 2.756034 + 2.745702 + 2.759070 ) which gave us the sum of 8.260806 and since there were 3 runs, I divided the sum by 3, which gave us the result of 2.753602 seconds as the NAT average.

The same formula was also done to calculate the average for the SPAT. The results from the 3 runs were: Run 1: 0.000106 seconds, Run 2: 0.000106 seconds. Run 3: 0.000111 seconds. So to calculate the average, I once again get the sum; 0.000106 + 0.000106 + 0.000111 = 0.000323 and then divide that by 3, which gives us 0.00010767 seconds or (1.0767e-4 seconds). 

Immediately we can notice one result is significantly faster (SPAT) than the other (NAT). But just how much faster you might wonder? This is worked out by taking the bigger number (2.753602) and dividing it by the smaller number (0.00010767) which gives us the value of 25,575.25. This means that the single-pass algorithm (SPAT) is 25,575x faster than the naive algorithm (NAT).

This gave us the results for Timings (in seconds). 
- BUILD_DATA = build_end - start, which is 0.000282
- PROCESS = process_end - build_end, which is 0.000320
- REDUCE = reduce_end - process_end, which is 0.000135
- TOTAL = reduce_end - start, which is 0.000737

The total can be verified by adding the sum of BUILD_DATA, PROCESS & REDUCE ( 0.000282 + 0.000320 + 0.000135 = 0.000737) which equals our TOTAL.

## Relation Between Runtime and Energy Consumption
The relation between runtime and energy consumption is that a program that takes longer to run, keeps the CPU active for longer, and a busy CPU generally  means the use of more power.

As shown from our results above, the single-pass algorithm (SPAT) was about 25,575x faster, so it kept the CPU busy for only 1/25,575 of the time. Huge difference.

## Limitations of the Experiment
A limitation is that task 2 has only one run (0.000737 seconds for TOTAL), whereas tasks 0 and 1 each had 3 runs.

The most important limitation is that this project doesn't measure watts, so I can't precisely calculate the energy used from CPU runtime alone.

Another point to mention is I ran all these in the Holberton sandbox, so I assume the results may differ elsewhere/on different machines. 

## Practical Engineering Takeaway
