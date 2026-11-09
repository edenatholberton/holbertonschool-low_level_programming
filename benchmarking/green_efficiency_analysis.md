## Measurement Methodology

In task 0, I measured the execution time for a deterministic computation to understand timing variability and establish a baseline. This was done using the "clock()" function. Through this function in the script I was able to generate the amount of iterations and the execution time of the program. I then ran this program multiple times to see the difference in the execution time. 

For task 1, running the same "clock()" function, I had to compare the results of the different algorithm speeds. This was done by firstly running the program 3 times. Through those 3 runs, I was able to see 4 things. 1: The Naive Algorithm Result (let's call this "NAR"), 2: The Naive Algorithm Time (let's call this "NAT"), 3: The Single-Pass Algorithm Result (SPAR), and lastly the Single-Pass Algorithm Time (SPAT). 

In task 2 (the instrumentation lab), I took four clock() readings and they produced four timings. For my readings, 
'start' was taken before build_dataset(),
'build_end' was taken after build_dataset() and before process_dataset(),
'process_end' was taken after process_dataset() and before reduce_checksum(), and
'reduce_end' was taken after reduce_checksum().

Each difference is in clock ticks. Multiplying by 1.0 and dividing by CLOCKS_PER_SEC converts it to seconds, and the 1.0 keeps the decimals. One reading serves as the end of one phase and then begins the next. That means there is no overlap between phases, and the same rule is applied to all three phases, which keeps the measurements consistent.

## Observed Performance Differenences

The results (NAR and SPAR) stayed the same across runs, but the times (NAT and SPAT) changed. The results from the NAT were: Run 1: 2.756034 seconds. Run 2: 2.745702 seconds. Run 3: 2.759070 seconds. To calculate the average seconds of the Naive Algorith Time, I added the results together ( 2.756034 + 2.745702 + 2.759070 ) which gave the sum of 8.260806 and since there were 3 runs, I divided the sum by 3, which gave the result of 2.753602 seconds as the NAT average.

The same formula was also done to calculate the average for the SPAT. The results from the 3 runs were: Run 1: 0.000106 seconds, Run 2: 0.000106 seconds. Run 3: 0.000111 seconds. These sum to 0.000106 + 0.000106 + 0.000111 = 0.000323, and dividing that by 3 gives 0.00010767 seconds. 

Dividing 2.753602 by 0.00010767 gives about 25,575, so the single-pass algorithm (SPAT) is roughly 25,575x faster than the naive algorithm (NAT).

This gave the results for Timings (in seconds). 
- BUILD_DATA = build_end - start, which is 0.000282
- PROCESS = process_end - build_end, which is 0.000320
- REDUCE = reduce_end - process_end, which is 0.000135
- TOTAL = reduce_end - start, which is 0.000737

The total can be verified by adding the sum of BUILD_DATA, PROCESS & REDUCE ( 0.000282 + 0.000320 + 0.000135 = 0.000737) which equals the TOTAL.

## Relation Between Runtime and Energy Consumption

The relation between runtime and energy consumption is that a program that takes longer to run keeps the CPU active for longer, and a busy CPU generally means the use of more power.

As shown from my results above, the single-pass algorithm (SPAT) was about 25,575x faster, so it kept the CPU busy for only 1/25,575 of the time.

## Limitations of the Experiment

A limitation is that task 2 has only one run (0.000737 seconds for TOTAL), whereas tasks 0 and 1 each had 3 runs.

In task 0, my 3 baseline runs varied slightly too, from 0.225867 to 0.228054 seconds.

The most important limitation is that my experiment doesn't measure watts, so I can't precisely calculate the energy used from CPU runtime alone.

I also ran all the tasks in the Holberton sandbox, so the results only apply to that environment. 

## Practical Engineering Takeaway

The main takeaway is that the choice of algorithm matters. Even with a small program, the single-pass algorithm ran about 25,575x faster than the naive one for the same result, which shows how quickly things can get out of hand.

Before optimising, I believe it would be wise to time each phase separately so I know where the time is most spent. 
